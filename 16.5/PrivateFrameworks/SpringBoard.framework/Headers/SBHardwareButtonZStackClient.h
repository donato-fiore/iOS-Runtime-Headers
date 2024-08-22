// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHARDWAREBUTTONZSTACKCLIENT_H
#define SBHARDWAREBUTTONZSTACKCLIENT_H

@class NSString, SBFZStackParticipant, SBFZStackResolver;
@protocol SBHardwareButtonServiceObserver, SBFZStackParticipantDelegate, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBHardwareButtonService.h"

@interface SBHardwareButtonZStackClient : NSObject <SBHardwareButtonServiceObserver, SBFZStackParticipantDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<BSInvalidatable> *hardwareButtonObserverAssertion; // ivar: _hardwareButtonObserverAssertion
@property (readonly, weak, nonatomic) SBHardwareButtonService *hardwareButtonService; // ivar: _hardwareButtonService
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) SBFZStackParticipant *zStackParticipant; // ivar: _zStackParticipant
@property (readonly, weak, nonatomic) SBFZStackResolver *zStackResolver; // ivar: _zStackResolver


-(id)initWithZStackResolver:(id)arg0 hardwareButtonService:(id)arg1 ;
-(void)_updateZStackParticipant;
-(void)buttonService:(id)arg0 buttonKind:(NSInteger)arg1 eventsConsumedDidChange:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)zStackParticipant:(id)arg0 updatePreferences:(id)arg1 ;
-(void)zStackParticipantDidChange:(id)arg0 ;


@end


#endif