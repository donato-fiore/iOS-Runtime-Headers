// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBSHARDWAREBUTTONSERVICE_H
#define SBSHARDWAREBUTTONSERVICE_H

@class BSMutableIntegerMap;


#import "SBSAbstractSystemService.h"

@interface SBSHardwareButtonService : SBSAbstractSystemService

@property (retain, nonatomic) BSMutableIntegerMap *buttonConfigurationsPerKind; // ivar: _buttonConfigurationsPerKind
@property (retain, nonatomic) BSMutableIntegerMap *consumersPerKind; // ivar: _consumersPerKind
@property (retain, nonatomic) BSMutableIntegerMap *requestHIDAssertionsPerKind; // ivar: _requestHIDAssertionsPerKind


+(id)sharedInstance;
-(NSInteger)toggleStateForButtonKind:(NSInteger)arg0 ;
-(id)_viableConsumerForButtonKind:(NSInteger)arg0 event:(NSInteger)arg1 priority:(NSInteger)arg2 ;
-(id)beginConsumingPressesForButtonKind:(NSInteger)arg0 eventConsumer:(id)arg1 priority:(NSInteger)arg2 ;
-(id)deferHIDEventsForButtonKind:(NSInteger)arg0 toToken:(id)arg1 ;
-(id)description;
-(void)_addEventConsumerInfo:(id)arg0 ;
-(void)_mainQueue_handleButtonPressMessage:(NSInteger)arg0 forButtonKind:(NSInteger)arg1 priority:(NSInteger)arg2 ;
-(void)_resetEventMaskForButtonKind:(NSInteger)arg0 ;
-(void)_setApplicationClientEventMask:(NSUInteger)arg0 buttonKind:(NSInteger)arg1 priority:(NSInteger)arg2 ;
-(void)acquireHomeHardwareButtonHintSuppressionAssertionForReason:(id)arg0 completion:(id)arg1 ;
-(void)consumerInfoWillInvalidate:(id)arg0 ;
-(void)fetchHapticTypeForButtonKind:(NSInteger)arg0 completion:(id)arg1 ;
-(void)handleButtonPressMessage:(NSInteger)arg0 forButtonKind:(NSInteger)arg1 priority:(NSInteger)arg2 ;
-(void)setHapticType:(NSInteger)arg0 forButtonKind:(NSInteger)arg1 ;


@end


#endif