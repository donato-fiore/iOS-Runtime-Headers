// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPOWERCONTROLLER_H
#define PXPOWERCONTROLLER_H

@class NSMutableDictionary, BKSProcessAssertion;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PXPowerController : NSObject {
    uint8_t _assertionIdentifierGenerator;
}


@property (nonatomic) unsigned int assertionID; // ivar: _assertionID
@property (readonly, nonatomic) NSMutableDictionary *assertionReasonsByIdentifier; // ivar: _assertionReasonsByIdentifier
@property (retain, nonatomic) BKSProcessAssertion *backgroundProcessAssertion; // ivar: _backgroundProcessAssertion
@property (nonatomic, getter=isBackgrounded) BOOL backgrounded; // ivar: _backgrounded
@property (readonly, nonatomic) BOOL hasBackgroundAssertion;
@property (readonly, nonatomic) BOOL hasPowerAssertion;
@property (nonatomic) CGFloat powerAssertionStartTime; // ivar: _powerAssertionStartTime
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *powerControllerQueue; // ivar: _powerControllerQueue


+(id)sharedController;
-(id)description;
-(id)init;
-(unsigned int)generateAssertionIdentifier;
-(void)acquireBackgroundAssertion;
-(void)acquireBackgroundAssertionIfNeeded;
-(void)addPowerAssertionForIdentifier:(unsigned int)arg0 withReason:(unsigned int)arg1 ;
-(void)applicationWillEnterForeground:(id)arg0 ;
-(void)applicationWillResignActive:(id)arg0 ;
-(void)dealloc;
-(void)handleEnteringBackground;
-(void)handleEnteringForeground;
-(void)invalidateBackgroundAssertion;
-(void)invalidateBackgroundAssertionIfNeeded;
-(void)releasePowerAssertion;
-(void)releasePowerAssertionIfNeeded;
-(void)removePowerAssertionForIdentifier:(unsigned int)arg0 withReason:(unsigned int)arg1 ;
-(void)takePowerAssertion;
-(void)takePowerAssertionIfNeeded;


@end


#endif