// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLAIRPLAYSERVICE_H
#define PLAIRPLAYSERVICE_H

@class PLService, PLEntryNotificationOperatorComposition, NSString, NSSet, NSArray;



@interface PLAirplayService : PLService

@property BOOL airplayMirroringOn; // ivar: _airplayMirroringOn
@property (retain) PLEntryNotificationOperatorComposition *audioAppCallback; // ivar: _audioAppCallback
@property (readonly) NSString *entryKeyPLScreenStateAgentScreenState; // ivar: _entryKeyPLScreenStateAgentScreenState
@property (retain) NSSet *excludedAccountingEvents; // ivar: _excludedAccountingEvents
@property (retain) NSArray *screenLayoutEntries; // ivar: _screenLayoutEntries
@property (retain) PLEntryNotificationOperatorComposition *screenstateCallback; // ivar: _screenstateCallback


+(id)defaults;
+(id)entryAggregateDefinitions;
+(void)load;
-(id)buildCallBack:(id)arg0 withGroup:(BOOL)arg1 withHandler:(id)arg2 ;
-(id)init;
-(void)handleAudioAppCallback:(id)arg0 ;
-(void)handleScreenStateCallback:(id)arg0 ;
-(void)initOperatorDependancies;
-(void)testService;


@end


#endif