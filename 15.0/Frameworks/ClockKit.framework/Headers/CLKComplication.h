// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLKCOMPLICATION_H
#define CLKCOMPLICATION_H

@class NSString, NSUserActivity, NSDictionary;
@protocol NSSecureCoding, TLIdentifiable, NSCopying;

#import <Foundation/Foundation.h>

#import "CLKUserActivity.h"

@interface CLKComplication : NSObject <NSSecureCoding, TLIdentifiable, NSCopying>

 {
    CLKUserActivity *_clkUserActivity;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger family; // ivar: _family
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUserActivity *userActivity;
@property (readonly, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
+(id)complicationWithFamily:(NSInteger)arg0 descriptor:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)tl_isEqualToIdentifiable:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif