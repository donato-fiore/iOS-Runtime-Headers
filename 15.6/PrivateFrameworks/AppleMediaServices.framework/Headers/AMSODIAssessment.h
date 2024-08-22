// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSODIASSESSMENT_H
#define AMSODIASSESSMENT_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AMSODIAssessment : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *stringValue; // ivar: _stringValue


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStringValue:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif