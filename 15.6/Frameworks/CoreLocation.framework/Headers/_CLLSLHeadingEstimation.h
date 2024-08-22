// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CLLSLHEADINGESTIMATION_H
#define _CLLSLHEADINGESTIMATION_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _CLLSLHeadingEstimation : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSArray *headings; // ivar: _headings
@property (nonatomic) int status; // ivar: _status


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithMemberIndent:(id)arg0 endIndent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif