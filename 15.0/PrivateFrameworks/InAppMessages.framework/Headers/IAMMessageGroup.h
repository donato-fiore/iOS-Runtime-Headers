// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IAMMESSAGEGROUP_H
#define IAMMESSAGEGROUP_H

@class NSString;
@protocol IAMMessageGroupInternalDelegate;

#import <Foundation/Foundation.h>

#import "IAMMessageCoordinator.h"

@interface IAMMessageGroup : NSObject

@property (readonly, nonatomic) NSString *groupIdentifier; // ivar: _groupIdentifier
@property (weak, nonatomic) NSObject<IAMMessageGroupInternalDelegate> *internalDelegate; // ivar: _internalDelegate
@property (weak, nonatomic) IAMMessageCoordinator *messageCoordinator; // ivar: _messageCoordinator


-(BOOL)shouldPerformModalMessagePresentation;
-(id)contextPropertyWithName:(id)arg0 ;
-(id)initWithGroupIdentifier:(id)arg0 ;
-(void)performModalMessagePresentation:(id)arg0 fromViewController:(id)arg1 ;
-(void)receiveEvent:(id)arg0 ;
-(void)reportContextPropertiesDidChange:(id)arg0 ;
-(void)reportModalMessagePresentationFailedWithIdentifier:(id)arg0 ;
-(void)reportModalMessageWasDismissedWithIdentifier:(id)arg0 ;
-(void)reportModalMessageWasPresentedWithIdentifier:(id)arg0 ;
-(void)reportModalMessageWithIdentifier:(id)arg0 actionWasPerformedWithIdentifier:(id)arg1 ;
-(void)viewControllerForModalMessagePresentation:(id)arg0 completion:(id)arg1 ;


@end


#endif