// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DRSPROTOENABLEDATAGATHERINGREQUESTRESPONSEBATCH_H
#define DRSPROTOENABLEDATAGATHERINGREQUESTRESPONSEBATCH_H

@class PBCodable, NSString, NSMutableArray;
@protocol CKCodeOperationMessageMutation, NSCopying;



@interface DRSProtoEnableDataGatheringRequestResponseBatch : PBCodable <CKCodeOperationMessageMutation, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *decisionResults; // ivar: _decisionResults
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)decisionResultsAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(void)addDecisionResults:(id)arg0 ;
-(void)clearDecisionResults;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif