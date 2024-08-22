// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ABCPBSUMMARYSIGNATUREREQUEST_H
#define ABCPBSUMMARYSIGNATUREREQUEST_H

@class PBRequest, NSMutableArray, NSString;
@protocol NSCopying;



@interface ABCPbSummarySignatureRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *attachments; // ivar: _attachments
@property (retain, nonatomic) NSString *build; // ivar: _build
@property (retain, nonatomic) NSString *buildVariant; // ivar: _buildVariant
@property (nonatomic) CGFloat caseClosedTime; // ivar: _caseClosedTime
@property (retain, nonatomic) NSString *caseClosureType; // ivar: _caseClosureType
@property (retain, nonatomic) NSString *caseContext; // ivar: _caseContext
@property (retain, nonatomic) NSString *caseDampeningType; // ivar: _caseDampeningType
@property (retain, nonatomic) NSString *caseEffectiveProcess; // ivar: _caseEffectiveProcess
@property (retain, nonatomic) NSString *caseGroupIdentifier; // ivar: _caseGroupIdentifier
@property (retain, nonatomic) NSString *caseIdentifier; // ivar: _caseIdentifier
@property (retain, nonatomic) NSString *caseRelatedProcesses; // ivar: _caseRelatedProcesses
@property (nonatomic) CGFloat caseStartTime; // ivar: _caseStartTime
@property (retain, nonatomic) NSString *caseThresholdValues; // ivar: _caseThresholdValues
@property (retain, nonatomic) NSString *domain; // ivar: _domain
@property (readonly, nonatomic) BOOL hasBuild;
@property (readonly, nonatomic) BOOL hasBuildVariant;
@property (nonatomic) BOOL hasCaseClosedTime;
@property (readonly, nonatomic) BOOL hasCaseClosureType;
@property (readonly, nonatomic) BOOL hasCaseContext;
@property (readonly, nonatomic) BOOL hasCaseDampeningType;
@property (readonly, nonatomic) BOOL hasCaseEffectiveProcess;
@property (readonly, nonatomic) BOOL hasCaseGroupIdentifier;
@property (readonly, nonatomic) BOOL hasCaseIdentifier;
@property (readonly, nonatomic) BOOL hasCaseRelatedProcesses;
@property (nonatomic) BOOL hasCaseStartTime;
@property (readonly, nonatomic) BOOL hasCaseThresholdValues;
@property (readonly, nonatomic) BOOL hasDomain;
@property (nonatomic) BOOL hasLogSizeTotal;
@property (readonly, nonatomic) BOOL hasProcess;
@property (nonatomic) BOOL hasRemoteTrigger;
@property (readonly, nonatomic) BOOL hasSubtype;
@property (readonly, nonatomic) BOOL hasSubtypeContext;
@property (readonly, nonatomic) BOOL hasType;
@property (nonatomic) unsigned int logSizeTotal; // ivar: _logSizeTotal
@property (retain, nonatomic) NSString *process; // ivar: _process
@property (nonatomic) BOOL remoteTrigger; // ivar: _remoteTrigger
@property (retain, nonatomic) NSString *subtype; // ivar: _subtype
@property (retain, nonatomic) NSString *subtypeContext; // ivar: _subtypeContext
@property (retain, nonatomic) NSString *type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)attachmentsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addAttachments:(id)arg0 ;
-(void)clearAttachments;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif