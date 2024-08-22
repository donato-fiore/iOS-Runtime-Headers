// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GRPSCHEMASIRIEVENTTYPEUNION_H
#define GRPSCHEMASIRIEVENTTYPEUNION_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "ANCSchemaANCClientEvent.h"
#import "ASRSchemaASRClientEvent.h"
#import "CAARSchemaCAARClientEvent.h"
#import "CAMSchemaCAMClientEvent.h"
#import "CDASchemaCDAClientEvent.h"
#import "CLPInstSchemaCLPClientEvent.h"
#import "CNVSchemaCNVClientEvent.h"
#import "DIMSchemaDIMClientEvent.h"
#import "DODMLSchemaDODMLClientEvent.h"
#import "EXPSearchSchemaEXPSearchClientEvent.h"
#import "EXPSiriSchemaEXPSiriClientEvent.h"
#import "FLOWSchemaFLOWClientEvent.h"
#import "FLOWLINKSchemaFLOWLINKClientEvent.h"
#import "SISchemaGradingOptInStateChange.h"
#import "HALSchemaHALClientEvent.h"
#import "HOMESchemaHOMEClientEvent.h"
#import "HomeKitSchemaHKClientEvent.h"
#import "IHSchemaIHClientEvent.h"
#import "INFERENCESchemaINFERENCEClientEvent.h"
#import "LRSchemaLRClientEvent.h"
#import "MHSchemaMHClientEvent.h"
#import "MWTSchemaMWTClientEvent.h"
#import "NETSchemaNETClientEvent.h"
#import "NLXSchemaNLXClientEvent.h"
#import "OPTINSchemaOPTINClientEvent.h"
#import "OPTINSchemaOPTINStatePropagationEvent.h"
#import "ORCHSchemaORCHClientEvent.h"
#import "PETSchemaPETUpload.h"
#import "PLUSSchemaPLUSClientEvent.h"
#import "POMMESSchemaPOMMESClientEvent.h"
#import "SISchemaProvisionalEvent.h"
#import "SISchemaRequestLink.h"
#import "RFSchemaRFClientEvent.h"
#import "RFGSchemaRFGClientEvent.h"
#import "RRSchemaRRClientEvent.h"
#import "RSSSchemaRSSClientEvent.h"
#import "SADSchemaSADClientEvent.h"
#import "SCSchemaSCClientEvent.h"
#import "SICSchemaSICClientEvent.h"
#import "SIRISETUPSchemaSIRISETUPClientEvent.h"
#import "SRSTSchemaSRSTClientEvent.h"
#import "SUGSchemaSUGClientEvent.h"
#import "SUTSchemaTestExecutionEvent.h"
#import "TTSSchemaTTSClientEvent.h"
#import "SISchemaClientEvent.h"
#import "USPSchemaUSPClientEvent.h"

@interface GRPSchemaSiriEventTypeUnion : SISchemaInstrumentationMessage

@property (retain, nonatomic) ANCSchemaANCClientEvent *ancClientEvent; // ivar: _ancClientEvent
@property (retain, nonatomic) ASRSchemaASRClientEvent *asrClientEvent; // ivar: _asrClientEvent
@property (retain, nonatomic) CAARSchemaCAARClientEvent *caarClientEvent; // ivar: _caarClientEvent
@property (retain, nonatomic) CAMSchemaCAMClientEvent *camClientEvent; // ivar: _camClientEvent
@property (retain, nonatomic) CDASchemaCDAClientEvent *cdaClientEvent; // ivar: _cdaClientEvent
@property (retain, nonatomic) CLPInstSchemaCLPClientEvent *clpClientEvent; // ivar: _clpClientEvent
@property (retain, nonatomic) CNVSchemaCNVClientEvent *cnvClientEvent; // ivar: _cnvClientEvent
@property (retain, nonatomic) DIMSchemaDIMClientEvent *dimClientEvent; // ivar: _dimClientEvent
@property (retain, nonatomic) DODMLSchemaDODMLClientEvent *dodmlClientEvent; // ivar: _dodmlClientEvent
@property (retain, nonatomic) EXPSearchSchemaEXPSearchClientEvent *expSearchClientEvent; // ivar: _expSearchClientEvent
@property (retain, nonatomic) EXPSiriSchemaEXPSiriClientEvent *expSiriClientEvent; // ivar: _expSiriClientEvent
@property (retain, nonatomic) FLOWSchemaFLOWClientEvent *flowClientEvent; // ivar: _flowClientEvent
@property (retain, nonatomic) FLOWLINKSchemaFLOWLINKClientEvent *flowLinkClientEvent; // ivar: _flowLinkClientEvent
@property (retain, nonatomic) SISchemaGradingOptInStateChange *gradingOptInStateChange; // ivar: _gradingOptInStateChange
@property (retain, nonatomic) HALSchemaHALClientEvent *halClientEvent; // ivar: _halClientEvent
@property (nonatomic) BOOL hasAncClientEvent; // ivar: _hasAncClientEvent
@property (nonatomic) BOOL hasAsrClientEvent; // ivar: _hasAsrClientEvent
@property (nonatomic) BOOL hasCaarClientEvent; // ivar: _hasCaarClientEvent
@property (nonatomic) BOOL hasCamClientEvent; // ivar: _hasCamClientEvent
@property (nonatomic) BOOL hasCdaClientEvent; // ivar: _hasCdaClientEvent
@property (nonatomic) BOOL hasClpClientEvent; // ivar: _hasClpClientEvent
@property (nonatomic) BOOL hasCnvClientEvent; // ivar: _hasCnvClientEvent
@property (nonatomic) BOOL hasDimClientEvent; // ivar: _hasDimClientEvent
@property (nonatomic) BOOL hasDodmlClientEvent; // ivar: _hasDodmlClientEvent
@property (nonatomic) BOOL hasExpSearchClientEvent; // ivar: _hasExpSearchClientEvent
@property (nonatomic) BOOL hasExpSiriClientEvent; // ivar: _hasExpSiriClientEvent
@property (nonatomic) BOOL hasFlowClientEvent; // ivar: _hasFlowClientEvent
@property (nonatomic) BOOL hasFlowLinkClientEvent; // ivar: _hasFlowLinkClientEvent
@property (nonatomic) BOOL hasGradingOptInStateChange; // ivar: _hasGradingOptInStateChange
@property (nonatomic) BOOL hasHalClientEvent; // ivar: _hasHalClientEvent
@property (nonatomic) BOOL hasHomeClientEvent; // ivar: _hasHomeClientEvent
@property (nonatomic) BOOL hasHomeKitClientEvent; // ivar: _hasHomeKitClientEvent
@property (nonatomic) BOOL hasIhClientEvent; // ivar: _hasIhClientEvent
@property (nonatomic) BOOL hasInferenceClientEvent; // ivar: _hasInferenceClientEvent
@property (nonatomic) BOOL hasLrClientEvent; // ivar: _hasLrClientEvent
@property (nonatomic) BOOL hasMhClientEvent; // ivar: _hasMhClientEvent
@property (nonatomic) BOOL hasMwtClientEvent; // ivar: _hasMwtClientEvent
@property (nonatomic) BOOL hasNetClientEvent; // ivar: _hasNetClientEvent
@property (nonatomic) BOOL hasNlxClientEvent; // ivar: _hasNlxClientEvent
@property (nonatomic) BOOL hasOptInClientEvent; // ivar: _hasOptInClientEvent
@property (nonatomic) BOOL hasOptinStatePropagationEvent; // ivar: _hasOptinStatePropagationEvent
@property (nonatomic) BOOL hasOrchClientEvent; // ivar: _hasOrchClientEvent
@property (nonatomic) BOOL hasPetUploadEvent; // ivar: _hasPetUploadEvent
@property (nonatomic) BOOL hasPlusClientEvent; // ivar: _hasPlusClientEvent
@property (nonatomic) BOOL hasPommmesClientEvent; // ivar: _hasPommmesClientEvent
@property (nonatomic) BOOL hasProvisionalEvent; // ivar: _hasProvisionalEvent
@property (nonatomic) BOOL hasRequestLinkEvent; // ivar: _hasRequestLinkEvent
@property (nonatomic) BOOL hasRfClientEvent; // ivar: _hasRfClientEvent
@property (nonatomic) BOOL hasRfgClientEvent; // ivar: _hasRfgClientEvent
@property (nonatomic) BOOL hasRrClientEvent; // ivar: _hasRrClientEvent
@property (nonatomic) BOOL hasRssClientEvent; // ivar: _hasRssClientEvent
@property (nonatomic) BOOL hasSadClientEvent; // ivar: _hasSadClientEvent
@property (nonatomic) BOOL hasScClientEvent; // ivar: _hasScClientEvent
@property (nonatomic) BOOL hasSicClientEvent; // ivar: _hasSicClientEvent
@property (nonatomic) BOOL hasSiriSetupClientEvent; // ivar: _hasSiriSetupClientEvent
@property (nonatomic) BOOL hasSrstClientEvent; // ivar: _hasSrstClientEvent
@property (nonatomic) BOOL hasSugClientEvent; // ivar: _hasSugClientEvent
@property (nonatomic) BOOL hasTestExecutionEvent; // ivar: _hasTestExecutionEvent
@property (nonatomic) BOOL hasTtsClientEvent; // ivar: _hasTtsClientEvent
@property (nonatomic) BOOL hasUeiClientEvent; // ivar: _hasUeiClientEvent
@property (nonatomic) BOOL hasUspClientEvent; // ivar: _hasUspClientEvent
@property (retain, nonatomic) HOMESchemaHOMEClientEvent *homeClientEvent; // ivar: _homeClientEvent
@property (retain, nonatomic) HomeKitSchemaHKClientEvent *homeKitClientEvent; // ivar: _homeKitClientEvent
@property (retain, nonatomic) IHSchemaIHClientEvent *ihClientEvent; // ivar: _ihClientEvent
@property (retain, nonatomic) INFERENCESchemaINFERENCEClientEvent *inferenceClientEvent; // ivar: _inferenceClientEvent
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) LRSchemaLRClientEvent *lrClientEvent; // ivar: _lrClientEvent
@property (retain, nonatomic) MHSchemaMHClientEvent *mhClientEvent; // ivar: _mhClientEvent
@property (retain, nonatomic) MWTSchemaMWTClientEvent *mwtClientEvent; // ivar: _mwtClientEvent
@property (retain, nonatomic) NETSchemaNETClientEvent *netClientEvent; // ivar: _netClientEvent
@property (retain, nonatomic) NLXSchemaNLXClientEvent *nlxClientEvent; // ivar: _nlxClientEvent
@property (retain, nonatomic) OPTINSchemaOPTINClientEvent *optInClientEvent; // ivar: _optInClientEvent
@property (retain, nonatomic) OPTINSchemaOPTINStatePropagationEvent *optinStatePropagationEvent; // ivar: _optinStatePropagationEvent
@property (retain, nonatomic) ORCHSchemaORCHClientEvent *orchClientEvent; // ivar: _orchClientEvent
@property (retain, nonatomic) PETSchemaPETUpload *petUploadEvent; // ivar: _petUploadEvent
@property (retain, nonatomic) PLUSSchemaPLUSClientEvent *plusClientEvent; // ivar: _plusClientEvent
@property (retain, nonatomic) POMMESSchemaPOMMESClientEvent *pommmesClientEvent; // ivar: _pommmesClientEvent
@property (retain, nonatomic) SISchemaProvisionalEvent *provisionalEvent; // ivar: _provisionalEvent
@property (retain, nonatomic) SISchemaRequestLink *requestLinkEvent; // ivar: _requestLinkEvent
@property (retain, nonatomic) RFSchemaRFClientEvent *rfClientEvent; // ivar: _rfClientEvent
@property (retain, nonatomic) RFGSchemaRFGClientEvent *rfgClientEvent; // ivar: _rfgClientEvent
@property (retain, nonatomic) RRSchemaRRClientEvent *rrClientEvent; // ivar: _rrClientEvent
@property (retain, nonatomic) RSSSchemaRSSClientEvent *rssClientEvent; // ivar: _rssClientEvent
@property (retain, nonatomic) SADSchemaSADClientEvent *sadClientEvent; // ivar: _sadClientEvent
@property (retain, nonatomic) SCSchemaSCClientEvent *scClientEvent; // ivar: _scClientEvent
@property (retain, nonatomic) SICSchemaSICClientEvent *sicClientEvent; // ivar: _sicClientEvent
@property (retain, nonatomic) SIRISETUPSchemaSIRISETUPClientEvent *siriSetupClientEvent; // ivar: _siriSetupClientEvent
@property (retain, nonatomic) SRSTSchemaSRSTClientEvent *srstClientEvent; // ivar: _srstClientEvent
@property (retain, nonatomic) SUGSchemaSUGClientEvent *sugClientEvent; // ivar: _sugClientEvent
@property (retain, nonatomic) SUTSchemaTestExecutionEvent *testExecutionEvent; // ivar: _testExecutionEvent
@property (retain, nonatomic) TTSSchemaTTSClientEvent *ttsClientEvent; // ivar: _ttsClientEvent
@property (retain, nonatomic) SISchemaClientEvent *ueiClientEvent; // ivar: _ueiClientEvent
@property (retain, nonatomic) USPSchemaUSPClientEvent *uspClientEvent; // ivar: _uspClientEvent
@property (readonly, nonatomic) NSUInteger whichEvent_Type; // ivar: _whichEvent_Type


+(Class)getEventTypeClassForTag:(int)arg0 ;
+(id)getTagForEventTypeClass:(Class)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)getEventType;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAncClientEvent;
-(void)deleteAsrClientEvent;
-(void)deleteCaarClientEvent;
-(void)deleteCamClientEvent;
-(void)deleteCdaClientEvent;
-(void)deleteClpClientEvent;
-(void)deleteCnvClientEvent;
-(void)deleteDimClientEvent;
-(void)deleteDodmlClientEvent;
-(void)deleteExpSearchClientEvent;
-(void)deleteExpSiriClientEvent;
-(void)deleteFlowClientEvent;
-(void)deleteFlowLinkClientEvent;
-(void)deleteGradingOptInStateChange;
-(void)deleteHalClientEvent;
-(void)deleteHomeClientEvent;
-(void)deleteHomeKitClientEvent;
-(void)deleteIhClientEvent;
-(void)deleteInferenceClientEvent;
-(void)deleteLrClientEvent;
-(void)deleteMhClientEvent;
-(void)deleteMwtClientEvent;
-(void)deleteNetClientEvent;
-(void)deleteNlxClientEvent;
-(void)deleteOptInClientEvent;
-(void)deleteOptinStatePropagationEvent;
-(void)deleteOrchClientEvent;
-(void)deletePetUploadEvent;
-(void)deletePlusClientEvent;
-(void)deletePommmesClientEvent;
-(void)deleteProvisionalEvent;
-(void)deleteRequestLinkEvent;
-(void)deleteRfClientEvent;
-(void)deleteRfgClientEvent;
-(void)deleteRrClientEvent;
-(void)deleteRssClientEvent;
-(void)deleteSadClientEvent;
-(void)deleteScClientEvent;
-(void)deleteSicClientEvent;
-(void)deleteSiriSetupClientEvent;
-(void)deleteSrstClientEvent;
-(void)deleteSugClientEvent;
-(void)deleteTestExecutionEvent;
-(void)deleteTtsClientEvent;
-(void)deleteUeiClientEvent;
-(void)deleteUspClientEvent;
-(void)setEventType:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif