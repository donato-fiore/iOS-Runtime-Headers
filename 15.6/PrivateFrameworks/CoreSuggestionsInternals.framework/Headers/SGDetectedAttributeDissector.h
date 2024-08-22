// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGDETECTEDATTRIBUTEDISSECTOR_H
#define SGDETECTEDATTRIBUTEDISSECTOR_H

@class NSSet, NSString;
@protocol SGMailMessageProcessing, SGTextMessageProcessing;


#import "SGPipelineDissector.h"
#import "SGDetectedAttributeML.h"
#import "SGQuickResponsesML.h"
#import "SGContactPipelineHelper.h"
#import "SGHKHealthStore.h"

@interface SGDetectedAttributeDissector : SGPipelineDissector <SGMailMessageProcessing, SGTextMessageProcessing>

 {
    SGDetectedAttributeML *_ml;
    SGQuickResponsesML *_mlQR;
    SGContactPipelineHelper *_contactsHelper;
    SGHKHealthStore *_healthStore;
    BOOL _filterWithAddressBook;
    float _unlikelyPhoneSamplingRate;
    NSSet *_hmmTrustedLanguages;
    NSSet *_ddTrustedLanguages;
    NSSet *_coreNLPTrustedLanguages;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger selfIdentificationMessageCount; // ivar: _selfIdentificationMessageCount
@property (readonly) Class superclass;


+(BOOL)isAddressContext:(id)arg0 ;
+(BOOL)isBirthdayContext:(id)arg0 ;
+(BOOL)isMaybeNameContext:(id)arg0 ;
+(BOOL)isNameRequest:(id)arg0 ;
+(BOOL)isPhoneContext:(id)arg0 ;
+(BOOL)isTwoPersonConversation:(id)arg0 ;
+(id)currentPatterns;
+(id)dissectorWithMockedMLTrainingForTests;
+(id)patterns;
+(void)_logSelfIDForMessage:(id)arg0 detection:(id)arg1 modelType:(struct SGMSelfIdModelType_ )arg2 modelVersion:(NSUInteger)arg3 ;
+(void)clearConversationCache;
-(id)_extractEmailishTokenFromMailHeader:(id)arg0 ;
-(id)_makeAlnum:(id)arg0 ;
-(id)_makeSimplifiedListIdEmail:(id)arg0 ;
-(id)detailTypeFromPrefix:(id)arg0 ;
-(id)detailTypeFromPrefix:(id)arg0 detectedLabelPointer:(struct _NSRange *)arg1 ;
-(id)detectionFromBodyDDMatch:(id)arg0 message:(id)arg1 withSupervisionToFill:(id)arg2 isUnlikelyPhone:(BOOL)arg3 ;
-(id)detectionFromSignatureDDMatch:(id)arg0 message:(id)arg1 detectedLabelRange:(struct _NSRange *)arg2 lastClaimedLabelRange:(struct _NSRange )arg3 isUnlikelyPhone:(BOOL)arg4 ;
-(id)filterDangerousSigAddressDetections:(id)arg0 ;
-(id)filterDangerousSigDetections:(id)arg0 message:(id)arg1 ;
-(id)filterDangerousSigEmailDetections:(id)arg0 message:(id)arg1 ;
-(id)filterDangerousSigPhoneDetections:(id)arg0 message:(id)arg1 ;
-(id)getLineContaining:(struct _NSRange )arg0 inText:(id)arg1 ;
-(id)getResponsesForBirthdayExtractionFromMessage:(id)arg0 withLanguage:(id)arg1 ;
-(id)init;
-(id)initWithML:(id)arg0 withMLQR:(id)arg1 andHealthStore:(id)arg2 ;
-(id)processTextMessageConversation:(id)arg0 threadLength:(NSUInteger)arg1 ;
-(void)_addAuthorContactForMessage:(id)arg0 entity:(id)arg1 ;
-(void)_dissectMessage:(id)arg0 entity:(id)arg1 ;
-(void)_removeUnwantedContactDetails:(id)arg0 entity:(id)arg1 ;
-(void)dissectMailMessage:(id)arg0 entity:(id)arg1 context:(id)arg2 ;
-(void)dissectTextMessage:(id)arg0 entity:(id)arg1 context:(id)arg2 ;
-(void)handleTextMessageBirthdayCongratulation:(id)arg0 entity:(id)arg1 withConversationHistory:(id)arg2 ;
-(void)handleTextMessageSelfIdentification:(id)arg0 entity:(id)arg1 withConversationHistory:(id)arg2 ;
-(void)logBirthdayExtractionMetricForPerson:(id)arg0 forDate:(id)arg1 isFromCongratulation:(unsigned char)arg2 withModelVersion:(id)arg3 didRegexTrigger:(unsigned char)arg4 didResponseKitTrigger:(unsigned char)arg5 ;


@end


#endif