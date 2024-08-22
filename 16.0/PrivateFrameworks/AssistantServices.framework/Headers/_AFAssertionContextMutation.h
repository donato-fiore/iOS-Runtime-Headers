// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _AFASSERTIONCONTEXTMUTATION_H
#define _AFASSERTIONCONTEXTMUTATION_H

@class NSString, NSDate, NSDictionary;
@protocol AFAssertionContextMutating;

#import <Foundation/Foundation.h>

#import "AFAssertionContext.h"

@interface _AFAssertionContextMutation : NSObject <AFAssertionContextMutating>

 {
    AFAssertionContext *_base;
    NSUInteger _timestamp;
    NSString *_reason;
    NSDate *_effectiveDate;
    CGFloat _expirationDuration;
    NSDictionary *_userInfo;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isDirty;
-(CGFloat)getExpirationDuration;
-(NSUInteger)getTimestamp;
-(id)getEffectiveDate;
-(id)getReason;
-(id)getUserInfo;
-(id)initWithBase:(id)arg0 ;
-(void)setEffectiveDate:(id)arg0 ;
-(void)setExpirationDuration:(CGFloat)arg0 ;
-(void)setReason:(id)arg0 ;
-(void)setTimestamp:(NSUInteger)arg0 ;
-(void)setUserInfo:(id)arg0 ;


@end


#endif