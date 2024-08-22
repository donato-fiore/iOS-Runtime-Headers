// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBLOCKSCREENPLUGINACTION_H
#define SBLOCKSCREENPLUGINACTION_H

@class BSAction, NSString;

#import <Foundation/Foundation.h>


@interface SBLockScreenPluginAction : NSObject {
    BSAction *_action;
}


@property (nonatomic) NSInteger authenticationPolicy; // ivar: _authenticationPolicy
@property (readonly, copy, nonatomic) id *completion; // ivar: _completion
@property (copy, nonatomic) NSString *label; // ivar: _label


+(id)action;
+(id)actionWithCompletion:(id)arg0 ;
-(BOOL)isApplicationAction;
-(BOOL)isCallAction;
-(BOOL)isEmergencyDialerAction;
-(id)init;
-(id)initWithCompletion:(id)arg0 ;
-(void)sendResponseWithSuccess:(BOOL)arg0 ;


@end


#endif