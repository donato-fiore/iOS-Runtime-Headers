// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFREPBSINGLEACTIONEXECUTION_H
#define WFREPBSINGLEACTIONEXECUTION_H

@class PBCodable, NSString, NSMutableArray, NSData;
@protocol NSCopying;



@interface WFREPBSingleActionExecution : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *actionIdentifier; // ivar: _actionIdentifier
@property (readonly, nonatomic) BOOL hasSerializedParameters;
@property (retain, nonatomic) NSMutableArray *inputs; // ivar: _inputs
@property (retain, nonatomic) NSMutableArray *processedParameters; // ivar: _processedParameters
@property (retain, nonatomic) NSData *serializedParameters; // ivar: _serializedParameters
@property (retain, nonatomic) NSMutableArray *variables; // ivar: _variables


+(Class)inputType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)inputAtIndex:(NSUInteger)arg0 ;
-(id)processedParametersAtIndex:(NSUInteger)arg0 ;
-(id)variablesAtIndex:(NSUInteger)arg0 ;
-(void)addInput:(id)arg0 ;
-(void)addProcessedParameters:(id)arg0 ;
-(void)addVariables:(id)arg0 ;
-(void)clearInputs;
-(void)clearProcessedParameters;
-(void)clearVariables;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif