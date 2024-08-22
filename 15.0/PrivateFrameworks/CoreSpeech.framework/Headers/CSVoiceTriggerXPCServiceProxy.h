// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSVOICETRIGGERXPCSERVICEPROXY_H
#define CSVOICETRIGGERXPCSERVICEPROXY_H

@class NSMutableSet, NSHashTable;

#import <Foundation/Foundation.h>

#import "CSSiriAssertionMonitor.h"

@interface CSVoiceTriggerXPCServiceProxy : NSObject

@property (retain, nonatomic) NSMutableSet *activationAssertions; // ivar: _activationAssertions
@property (retain, nonatomic) CSSiriAssertionMonitor *assertionMonitor; // ivar: _assertionMonitor
@property (nonatomic) BOOL isPhraseSpotterBypassed; // ivar: _isPhraseSpotterBypassed
@property (nonatomic) BOOL isRaiseToSpeakBypassed; // ivar: _isRaiseToSpeakBypassed
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers


+(id)sharedInstance;
-(id)_fetchAssertionMonitor;
-(id)fetchVoiceTriggerStats;
-(id)init;
-(id)initWithAssertionMonitor:(id)arg0 ;
-(void)enableVoiceTrigger:(BOOL)arg0 withAssertion:(id)arg1 timestamp:(CGFloat)arg2 ;
-(void)notifyServiceConnectionLost;
-(void)notifyVoiceTriggeredSiriSessionCancelled;
-(void)registerObserver:(id)arg0 ;
-(void)setPhraseSpotterBypassing:(BOOL)arg0 timeout:(CGFloat)arg1 ;
-(void)setRaiseToSpeakBypassing:(BOOL)arg0 timeout:(CGFloat)arg1 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif