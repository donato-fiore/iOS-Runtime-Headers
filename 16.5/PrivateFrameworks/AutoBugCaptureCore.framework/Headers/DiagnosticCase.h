// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DIAGNOSTICCASE_H
#define DIAGNOSTICCASE_H

@class NSMutableDictionary, NSDictionary, NSMutableArray, NSString, NSUUID;
@protocol NSCoding;

#import <Foundation/Foundation.h>

#import "DiagnosticCaseStorage.h"
#import "DiagnosticCaseManager.h"

@interface DiagnosticCase : NSObject <NSCoding>

 {
    BOOL eventsDirty;
    BOOL payloadsDirty;
    BOOL attachmentsDirty;
    BOOL _allowIPSFileOutput;
    NSUInteger completedDiagnosticActions;
    NSUInteger expectedDiagnosticActions;
    NSMutableDictionary *_requiredActions;
}


@property (readonly, nonatomic) NSDictionary *actions; // ivar: _actions
@property (readonly, nonatomic) NSMutableArray *attachments; // ivar: _attachments
@property (retain, nonatomic) NSMutableDictionary *attachmentsWithSize; // ivar: _attachmentsWithSize
@property (readonly, nonatomic) CGFloat caseClosedTime;
@property (readonly, nonatomic) NSString *caseDetectedProcess;
@property (readonly, nonatomic) NSString *caseDomain;
@property (readonly, nonatomic) NSString *caseEffectiveProcess;
@property (nonatomic) NSUInteger caseFlags; // ivar: _caseFlags
@property (readonly, nonatomic) NSUUID *caseId; // ivar: _caseId
@property (readonly, nonatomic) CGFloat caseOpenedTime;
@property (readonly, nonatomic) NSMutableArray *caseOutlets; // ivar: _caseOutlets
@property (readonly, nonatomic) NSMutableArray *caseReports; // ivar: _caseReports
@property (readonly, nonatomic) short caseState;
@property (readonly, nonatomic) DiagnosticCaseStorage *caseStorage; // ivar: _caseStorage
@property (readonly, nonatomic) NSString *caseSubType;
@property (readonly, nonatomic) NSString *caseSubTypeContext;
@property (readonly, nonatomic) NSString *caseType;
@property (readonly, nonatomic) short closureType;
@property (readonly, nonatomic) short dampeningType;
@property (readonly, nonatomic) NSMutableArray *events; // ivar: _events
@property (retain, nonatomic) DiagnosticCaseManager *manager; // ivar: _manager
@property (readonly, nonatomic) NSMutableArray *payloads; // ivar: _payloads
@property (nonatomic) CGFloat preferredDuration; // ivar: _preferredDuration
@property (nonatomic) BOOL readyToEndSession; // ivar: _readyToEndSession
@property (readonly, nonatomic, getter=isRemoteTrigger) BOOL remoteTrigger;
@property (readonly, nonatomic) NSDictionary *requiredAttachments; // ivar: _requiredAttachments
@property (readonly, nonatomic) NSMutableDictionary *signature; // ivar: _signature
@property (readonly, nonatomic, getter=isSnapshot) BOOL snapshot;
@property (readonly, nonatomic, getter=wantsRemote) BOOL wantsRemote;
@property (readonly, nonatomic) BOOL writeIPSFile;


+(id)_arrayObjectRepresentationOfJSONString:(id)arg0 ;
+(id)_caseDampeningTypeString:(short)arg0 ;
+(id)_closureTypeString:(short)arg0 ;
+(id)_stringRepresentationOfJSONObject:(id)arg0 prettyPrint:(BOOL)arg1 ;
+(id)attachmentsFromStringRepresentation:(id)arg0 ;
+(id)descriptionForClosureType:(short)arg0 ;
+(id)descriptionForDampeningType:(short)arg0 ;
+(id)generateCaseSummaryDictionaryFromCaseStorage:(id)arg0 ;
+(id)generateCaseSummaryFromCaseStorageDictionary:(id)arg0 ;
+(id)signatureForCaseStorage:(id)arg0 ;
+(id)signatureForCaseStorageDictionary:(id)arg0 ;
+(id)stringRepresentationOfAttachments:(id)arg0 ;
-(BOOL)_parseCaseStorageIntoSignature:(id)arg0 ;
-(BOOL)_parseSignatureIntoCaseStorage:(id)arg0 ;
-(BOOL)matchSignature:(id)arg0 ;
-(BOOL)sendReports;
-(id)_caseSummaryFileName;
-(id)_generateCaseSummaryDictionary;
-(id)_updatedPayloadPathForOriginalPath:(id)arg0 sandboxExtensionToken:(id)arg1 ;
-(id)addSizeInfoForAttachment:(id)arg0 ;
-(id)caseClosureTypeString;
-(id)caseDampeningTypeString;
-(id)caseProcess;
-(id)caseStateString:(short)arg0 ;
-(id)deParametersFromPayloads;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCaseId:(id)arg0 manager:(id)arg1 ;
-(id)initWithCaseStorage:(id)arg0 manager:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSignature:(id)arg0 flags:(NSUInteger)arg1 events:(id)arg2 payload:(id)arg3 actions:(id)arg4 manager:(id)arg5 ;
-(id)stringRepresentationOfAttachmentsWithSize;
-(id)stringRepresentationOfEvents;
-(id)stringRepresentationOfPayloads;
-(id)stringRepresentationOfSignature;
-(short)caseStateFromString:(id)arg0 ;
-(void)_addToAttachments:(id)arg0 ;
-(void)_updatePayloadDictionaryArray:(BOOL)arg0 ;
-(void)addEvent:(id)arg0 ;
-(void)addEvent:(id)arg0 forced:(BOOL)arg1 ;
-(void)addEvents:(id)arg0 ;
-(void)addEvents:(id)arg0 forced:(BOOL)arg1 ;
-(void)addGroupIdentifierToSignature;
-(void)addPayload:(id)arg0 ;
-(void)addRequiredAction:(id)arg0 option:(id)arg1 attachmentType:(id)arg2 pattern:(id)arg3 ;
-(void)addRequiredAttachmentType:(id)arg0 pattern:(id)arg1 ;
-(void)allowIPSFileOutput:(BOOL)arg0 ;
-(void)collectLogs;
-(void)dealloc;
-(void)deserializeDiagnosticCaseStorageAttachments;
-(void)deserializeDiagnosticCaseStorageEvents;
-(void)deserializeDiagnosticCaseStoragePayloads;
-(void)encodeWithCoder:(id)arg0 ;
-(void)finishCase;
-(void)finishedCollectingLogs;
-(void)fixupCaseSummaryFile:(id)arg0 ;
-(void)markAttachemntsAsPurgeable:(BOOL)arg0 urgency:(NSUInteger)arg1 ;
-(void)noteCaseClosedTime;
-(void)noteCaseClosedTime:(CGFloat)arg0 ;
-(void)noteCaseOpenedTime;
-(void)noteCaseOpenedTime:(CGFloat)arg0 ;
-(void)prepareAttachmentsForReporting;
-(void)prepareCase;
-(void)prepareForSaving;
-(void)recordDiagnosticCaseSummary;
-(void)removeRequiredAttachmentType:(id)arg0 pattern:(id)arg1 ;
-(void)reportGeneratorEnded:(id)arg0 reportInfo:(id)arg1 error:(id)arg2 isFinalReportGenerator:(BOOL)arg3 ;
-(void)serializeAttachmentsToDiagnosticCaseStorage;
-(void)serializeEventsToDiagnosticCaseStorage;
-(void)serializePayloadsToDiagnosticCaseStorage;
-(void)startCollectingAllReports;
-(void)startCollectingDiagnosticExtensions:(id)arg0 ;
-(void)summarizeCaseReport;
-(void)validateAttachments;


@end


#endif