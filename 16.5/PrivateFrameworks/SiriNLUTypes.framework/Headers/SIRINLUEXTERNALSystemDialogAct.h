// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRINLUEXTERNALSYSTEMDIALOGACT_H
#define SIRINLUEXTERNALSYSTEMDIALOGACT_H

@class PBCodable;
@protocol NSCopying;


#import "SIRINLUEXTERNALSystemGaveOptions.h"
#import "SIRINLUEXTERNALUUID.h"
#import "SIRINLUEXTERNALSystemInformed.h"
#import "SIRINLUEXTERNALSystemOffered.h"
#import "SIRINLUEXTERNALSystemPrompted.h"
#import "SIRICOMMONStringValue.h"
#import "SIRINLUEXTERNALSystemReportedFailure.h"
#import "SIRINLUEXTERNALSystemReportedSuccess.h"

@interface SIRINLUEXTERNALSystemDialogAct : PBCodable <NSCopying>



@property (retain, nonatomic) SIRINLUEXTERNALSystemGaveOptions *gaveOptions; // ivar: _gaveOptions
@property (readonly, nonatomic) BOOL hasGaveOptions;
@property (readonly, nonatomic) BOOL hasIdA;
@property (readonly, nonatomic) BOOL hasInformed;
@property (readonly, nonatomic) BOOL hasOffered;
@property (readonly, nonatomic) BOOL hasPrompted;
@property (readonly, nonatomic) BOOL hasRenderedText;
@property (readonly, nonatomic) BOOL hasReportedFailure;
@property (readonly, nonatomic) BOOL hasReportedSuccess;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *idA; // ivar: _idA
@property (retain, nonatomic) SIRINLUEXTERNALSystemInformed *informed; // ivar: _informed
@property (retain, nonatomic) SIRINLUEXTERNALSystemOffered *offered; // ivar: _offered
@property (retain, nonatomic) SIRINLUEXTERNALSystemPrompted *prompted; // ivar: _prompted
@property (retain, nonatomic) SIRICOMMONStringValue *renderedText; // ivar: _renderedText
@property (retain, nonatomic) SIRINLUEXTERNALSystemReportedFailure *reportedFailure; // ivar: _reportedFailure
@property (retain, nonatomic) SIRINLUEXTERNALSystemReportedSuccess *reportedSuccess; // ivar: _reportedSuccess


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif