// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SVXACTIVATIONCONTEXTMUTATION_H
#define _SVXACTIVATIONCONTEXTMUTATION_H

@class AFRequestInfo, NSDictionary, NSString;
@protocol SVXActivationContextMutating;

#import <Foundation/Foundation.h>

#import "SVXActivationContext.h"
#import "SVXButtonEvent.h"
#import "SVXSystemEvent.h"
#import "SVXClientInfo.h"

@interface _SVXActivationContextMutation : NSObject <SVXActivationContextMutating>

 {
    SVXActivationContext *_baseModel;
    NSInteger _source;
    NSUInteger _timestamp;
    SVXButtonEvent *_buttonEvent;
    SVXSystemEvent *_systemEvent;
    SVXClientInfo *_clientInfo;
    AFRequestInfo *_requestInfo;
    NSDictionary *_userInfo;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setButtonEvent:(id)arg0 ;
-(void)setClientInfo:(id)arg0 ;
-(void)setRequestInfo:(id)arg0 ;
-(void)setSource:(NSInteger)arg0 ;
-(void)setSystemEvent:(id)arg0 ;
-(void)setTimestamp:(NSUInteger)arg0 ;
-(void)setUserInfo:(id)arg0 ;


@end


#endif