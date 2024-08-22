// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDEXTRACTIONREQUEST_H
#define HDEXTRACTIONREQUEST_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HDExtractionRequest : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *resources; // ivar: _resources


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResources:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif