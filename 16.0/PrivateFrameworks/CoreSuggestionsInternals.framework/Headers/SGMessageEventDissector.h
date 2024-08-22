// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGMESSAGEEVENTDISSECTOR_H
#define SGMESSAGEEVENTDISSECTOR_H

@class _PASLock, NSDictionary, NSString;
@protocol SGTextMessageProcessing;


#import "SGPipelineDissector.h"

@interface SGMessageEventDissector : SGPipelineDissector <SGTextMessageProcessing>

 {
    _PASLock *_lock;
    NSDictionary *_dissectorConfig;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)allowMessageEventDissector;
+(BOOL)featureEnabled;
+(BOOL)mobileAssetsEnabled;
+(id)dateFromString:(id)arg0 ;
+(id)describeCategory:(unsigned char)arg0 ;
+(id)enrichmentsFromSchema:(id)arg0 forMessage:(id)arg1 forEntity:(id)arg2 category:(id)arg3 ;
+(id)fallbackSchemaForGenericEventWithTitle:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 ;
+(id)getFlightInformationForFlightEventData:(id)arg0 ;
+(id)loadEventClassifierModelFromPath:(id)arg0 ;
+(id)loadLazyPlistWithBasename:(id)arg0 ;
+(id)nilEntities:(id)arg0 ;
+(id)schemaOrgAndMissingEntitiesForExtractedEvent:(id)arg0 ;
+(id)tupleWithEntity:(id)arg0 label:(id)arg1 ;
+(unsigned char)messageEventCategoryForCategoryString:(id)arg0 ;
+(void)logMLMessageEventExtractionInteractions:(id)arg0 context:(id)arg1 ;
-(BOOL)isDissectorProcessingWithinRateLimit;
-(BOOL)isMessageOfTypeEvent:(id)arg0 ;
-(BOOL)shouldProcessTextMessage:(id)arg0 entity:(id)arg1 ;
-(id)eventClassifierMobileAssetsPath;
-(id)eventExtractionMobileAssetsPath;
-(id)eventsFromMessage:(id)arg0 eventExtractionAssetsPath:(id)arg1 ;
-(id)init;
-(id)initWithoutSharedInstance;
-(id)loadEventClassifierModel;
-(id)schemaOrgAndMissingEntitiesForMessage:(id)arg0 withMLModelParameters:(id)arg1 ;
-(void)addEnrichmentForEvents:(id)arg0 toEntity:(id)arg1 message:(id)arg2 context:(id)arg3 timingProcessingInMs:(NSUInteger)arg4 ;
-(void)dissectTextMessage:(id)arg0 entity:(id)arg1 context:(id)arg2 ;
-(void)logFailedEventExtractionForMessage:(id)arg0 category:(id)arg1 missingEntities:(id)arg2 timingProcessingInMs:(NSUInteger)arg3 ;
-(void)logFailedEventExtractionForMessage:(id)arg0 failureCode:(NSInteger)arg1 ;
-(void)logMLMessageEventExtractionForSchema:(id)arg0 message:(id)arg1 category:(id)arg2 timingProcessingInMs:(NSUInteger)arg3 ;


@end


#endif