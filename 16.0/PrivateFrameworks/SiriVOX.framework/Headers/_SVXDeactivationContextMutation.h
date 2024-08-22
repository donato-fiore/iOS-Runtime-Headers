// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SVXDEACTIVATIONCONTEXTMUTATION_H
#define _SVXDEACTIVATIONCONTEXTMUTATION_H

@class NSDictionary, NSString;
@protocol SVXDeactivationContextMutating;

#import <Foundation/Foundation.h>

#import "SVXDeactivationContext.h"
#import "SVXButtonEvent.h"
#import "SVXClientInfo.h"
#import "SVXDeactivationOptions.h"

@interface _SVXDeactivationContextMutation : NSObject <SVXDeactivationContextMutating>

 {
    SVXDeactivationContext *_baseModel;
    NSInteger _source;
    NSUInteger _timestamp;
    SVXButtonEvent *_buttonEvent;
    SVXClientInfo *_clientInfo;
    NSDictionary *_userInfo;
    SVXDeactivationOptions *_options;
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
-(void)setOptions:(id)arg0 ;
-(void)setSource:(NSInteger)arg0 ;
-(void)setTimestamp:(NSUInteger)arg0 ;
-(void)setUserInfo:(id)arg0 ;


@end


#endif