// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLSTORAGEOPERATOR_H
#define PLSTORAGEOPERATOR_H



#import "PLOperator.h"

@interface PLStorageOperator : PLOperator



+(id)entryEventForwardDefinitionActivityStates;
+(id)entryEventForwardDefinitionConfiguration;
+(id)entryEventForwardDefinitionSchemaChange;
+(id)entryEventForwardDefinitionSubmissionTag;
+(id)entryEventForwardDefinitionTaskingMode;
+(id)entryEventForwardDefinitionTimeOffset;
+(id)entryEventForwardDefinitions;
+(id)entryEventIntervalDefinitionCacheSize;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitionActivity;
+(id)entryEventNoneDefinitionAdditionalTablesTurnedOn;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitionArchive;
+(id)entryEventPointDefinitionCacheFlush;
+(id)entryEventPointDefinitionOTA;
+(id)entryEventPointDefinitionPLLog;
+(id)entryEventPointDefinitionTimeCorrection;
+(id)entryEventPointDefinitions;
+(id)eventIntervalCacheSizeWithPayload:(id)arg0 withEntryDate:(id)arg1 ;
+(id)eventPointCacheFlushWithPayload:(id)arg0 ;
-(id)trimConditionsForEntryKey:(id)arg0 forTrimDate:(id)arg1 ;
-(void)initOperatorDependancies;
-(void)log;
-(void)logEventForwardConfiguration:(id)arg0 ;
-(void)logEventForwardSchemaChange:(id)arg0 ;
-(void)logEventForwardTaskingMode:(id)arg0 ;
-(void)logEventForwardTimeOffset:(id)arg0 ;
-(void)logEventNoneAdditionalTablesTurnedOn:(id)arg0 ;
-(void)logEventPointArchive:(id)arg0 ;
-(void)logEventPointCacheFlush:(id)arg0 ;
-(void)logEventPointOTA:(id)arg0 ;
-(void)logEventPointPLLog:(id)arg0 ;
-(void)logEventPointTimeCorrection:(id)arg0 ;


@end


#endif