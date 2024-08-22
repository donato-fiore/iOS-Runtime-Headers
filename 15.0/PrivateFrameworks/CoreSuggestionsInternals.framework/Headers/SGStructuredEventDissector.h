// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGSTRUCTUREDEVENTDISSECTOR_H
#define SGSTRUCTUREDEVENTDISSECTOR_H

@class NSString;
@protocol SGMailMessageProcessing;


#import "SGPipelineDissector.h"

@interface SGStructuredEventDissector : SGPipelineDissector <SGMailMessageProcessing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)eventEnrichmentContainsReverseMappedTags:(id)arg0 ;
+(NSUInteger)tokenCount:(id)arg0 ;
+(NSUInteger)tokenCountForPostalAddressComponents:(id)arg0 ;
+(id)addressDictionaryForAddressComponents:(id)arg0 ;
+(id)annotateContent:(id)arg0 withLabel:(id)arg1 forMatchingString:(id)arg2 ;
+(id)annotationMatchingStringsForSubject:(id)arg0 ;
+(id)eventEnrichmentFromEntity:(id)arg0 ;
+(id)jsMessageLogsDictionaryForMailMessage:(id)arg0 ;
+(id)jsMessageLogsDictionaryForPrivacyAwareLogs:(id)arg0 ;
+(id)labelsWithMatchingStringsForMailMessage:(id)arg0 ;
+(id)mergeFallbackSchema:(id)arg0 parentEntity:(id)arg1 ;
+(id)nilEntities:(id)arg0 ;
+(id)outputLogsForClassification:(id)arg0 ;
+(id)plainTextStringsByLabelInTaggedCharacterRanges:(id)arg0 inPlainText:(id)arg1 ;
+(id)preprocessDomParserResult:(id)arg0 subject:(id)arg1 epoch:(CGFloat)arg2 category:(id)arg3 labelsWithMatchingStrings:(id)arg4 ;
+(id)preprocessWithoutXPCForHTML:(id)arg0 subject:(id)arg1 epoch:(CGFloat)arg2 category:(id)arg3 labelsWithMatchingStrings:(id)arg4 ;
+(id)schemaOrgAndMissingEntitiesForPreprocessed:(id)arg0 eventClassification:(id)arg1 fromSuggestTool:(BOOL)arg2 ;
+(id)schemaOrgAndMissingEntitiesForPreprocessed:(id)arg0 eventClassification:(id)arg1 fromSuggestTool:(BOOL)arg2 addressThreshold:(NSUInteger)arg3 pflTrainable:(BOOL)arg4 hasEvent:(BOOL)arg5 ;
+(id)schemaPostalAddressForPostalAddressExtraction:(id)arg0 addressThreshold:(NSUInteger)arg1 ;
+(id)schemaStringForDateComponents:(id)arg0 ;
+(id)schemaStringForEventStatus:(unsigned char)arg0 ;
+(id)schemaStringForReservationStatus:(unsigned char)arg0 ;
+(id)sharedInstance;
+(id)tupleWithEntity:(id)arg0 label:(id)arg1 ;
+(id)tupleWithError:(id)arg0 label:(id)arg1 ;
+(void)addSchemaAsEnrichment:(id)arg0 inMessage:(id)arg1 parentEntity:(id)arg2 eventClassification:(id)arg3 mlDefaultExtraction:(BOOL)arg4 ;
+(void)logFailedExtractionWithClassification:(id)arg0 missingEntities:(id)arg1 mlSummary:(id)arg2 shadowExtraction:(BOOL)arg3 timingProcessingInMs:(NSUInteger)arg4 forMessage:(id)arg5 parentEntity:(id)arg6 ;
+(void)logMLExtractionForSchema:(id)arg0 mergedSchemaAndDiff:(id)arg1 parentEntity:(id)arg2 timingProcessingInMs:(NSUInteger)arg3 eventClassification:(id)arg4 mailMessage:(id)arg5 shadowExtraction:(BOOL)arg6 mlDefaultExtraction:(BOOL)arg7 ;
+(void)logMLInteractions:(id)arg0 context:(id)arg1 mlDefaultExtraction:(BOOL)arg2 ;
-(id)preprocessHTML:(id)arg0 subject:(id)arg1 epoch:(CGFloat)arg2 category:(id)arg3 labelsWithMatchingStrings:(id)arg4 ;
-(id)tagsWithModelOutputFromEnrichedTaggedCharacterRanges:(id)arg0 ;
-(void)dissectMailMessage:(id)arg0 entity:(id)arg1 context:(id)arg2 ;


@end


#endif