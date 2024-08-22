// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INCEXTENSIONTRANSACTION_H
#define INCEXTENSIONTRANSACTION_H

@class NSMutableDictionary, INIntent, INIntentResponse, NSUserActivity, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "INCExtensionRequest.h"
#import "INCExtensionTransactionState.h"

@interface INCExtensionTransaction : NSObject {
    NSMutableDictionary *_userActivitiesByIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (retain, nonatomic, setter=_setCurrentIntent:) INIntent *currentIntent; // ivar: _currentIntent
@property (retain, nonatomic, setter=_setCurrentIntentResponse:) INIntentResponse *currentIntentResponse; // ivar: _currentIntentResponse
@property (readonly, copy, nonatomic) NSUserActivity *currentUserActivity; // ivar: _currentUserActivity
@property (readonly, nonatomic) BOOL donateInteraction; // ivar: _donateInteraction
@property (readonly, copy, nonatomic) NSString *groupIdentifier; // ivar: _groupIdentifier
@property (readonly, nonatomic) INCExtensionRequest *request; // ivar: _request
@property (nonatomic) BOOL shouldResetRequestAfterHandle; // ivar: _shouldResetRequestAfterHandle
@property (retain, nonatomic) INCExtensionTransactionState *state; // ivar: _state


+(void)initialize;
-(id)description;
-(id)initWithIntent:(id)arg0 donateInteraction:(BOOL)arg1 groupIdentifier:(id)arg2 ;
-(id)userActivityWithIdentifier:(id)arg0 ;
-(void)_addUserActivities:(id)arg0 ;
-(void)_updateCurrentUserActivityForType:(NSInteger)arg0 intent:(id)arg1 intentResponse:(id)arg2 ;


@end


#endif