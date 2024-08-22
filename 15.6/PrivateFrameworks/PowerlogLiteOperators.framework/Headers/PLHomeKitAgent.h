// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLHOMEKITAGENT_H
#define PLHOMEKITAGENT_H

@class PLAgent, PLXPCListenerOperatorComposition, PLEntryNotificationOperatorComposition, PLTimer;



@interface PLHomeKitAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *cameraConfigurationListener; // ivar: _cameraConfigurationListener
@property (retain) PLEntryNotificationOperatorComposition *deviceWake; // ivar: _deviceWake
@property BOOL enablelog; // ivar: _enablelog
@property (retain) PLXPCListenerOperatorComposition *homeConfigurationListener; // ivar: _homeConfigurationListener
@property (retain) PLXPCListenerOperatorComposition *homeKitEventsListener; // ivar: _homeKitEventsListener
@property (retain) PLXPCListenerOperatorComposition *homeKitRegistrationListener; // ivar: _homeKitRegistrationListener
@property CGFloat lastapwake; // ivar: _lastapwake
@property NSUInteger numBTConnections; // ivar: _numBTConnections
@property NSUInteger numBTPushes; // ivar: _numBTPushes
@property NSUInteger numBTWakeAdvt; // ivar: _numBTWakeAdvt
@property NSUInteger numBTWakes; // ivar: _numBTWakes
@property NSUInteger numBTlines; // ivar: _numBTlines
@property NSUInteger numBonjour; // ivar: _numBonjour
@property NSUInteger numCloudPushes; // ivar: _numCloudPushes
@property NSUInteger numConnections; // ivar: _numConnections
@property NSUInteger numIDSPushes; // ivar: _numIDSPushes
@property NSUInteger numIPConnections; // ivar: _numIPConnections
@property NSUInteger numIPEvents; // ivar: _numIPEvents
@property NSUInteger numPrevBTPushes; // ivar: _numPrevBTPushes
@property NSUInteger numPrevConnections; // ivar: _numPrevConnections
@property NSUInteger numaggregatelines; // ivar: _numaggregatelines
@property (retain) PLTimer *runTimeAggregatorTimer; // ivar: _runTimeAggregatorTimer
@property (retain) PLEntryNotificationOperatorComposition *sbcLevelChanged; // ivar: _sbcLevelChanged


+(id)defaults;
+(id)entryAggregateDefinitionIDSPushMessageTypes;
+(id)entryAggregateDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventForwardDefinitionCameraConfiguration;
+(id)entryEventForwardDefinitionHomeConfiguration;
+(id)entryEventForwardDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitionHomeKitAdvt;
+(id)entryEventPointDefinitionHomeKitEvents;
+(id)entryEventPointDefinitionHomeKitRegistration;
+(id)entryEventPointDefinitionHomeKitSummary;
+(id)entryEventPointDefinitions;
+(void)load;
-(NSInteger)eventTypeStringToEnum:(id)arg0 ;
-(NSInteger)messageTypeStringToEnum:(id)arg0 ;
-(NSInteger)registrationTypeStringToEnum:(id)arg0 ;
-(id)init;
-(void)initOperatorDependancies;
-(void)log;
-(void)logAggregateIDSPushMessageTypes:(id)arg0 ;
-(void)logEventForwardCameraConfiguration:(id)arg0 ;
-(void)logEventForwardHomeConfiguration:(id)arg0 ;
-(void)logEventPointHomeKitEvents:(id)arg0 ;
-(void)logEventPointHomeKitRegistration:(id)arg0 ;
-(void)writeAggregateCounters:(id)arg0 ;


@end


#endif