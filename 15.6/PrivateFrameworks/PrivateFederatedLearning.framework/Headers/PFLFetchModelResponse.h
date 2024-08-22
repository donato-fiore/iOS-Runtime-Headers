// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFLFETCHMODELRESPONSE_H
#define PFLFETCHMODELRESPONSE_H

@class PBCodable, NSString, CKCodeRecordTransport;
@protocol CKCodeOperationMessageMutation, NSCopying;



@interface PFLFetchModelResponse : PBCodable <CKCodeOperationMessageMutation, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasModelAsset;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CKCodeRecordTransport *modelAsset; // ivar: _modelAsset
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)extractRecordTransports;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)substituteRecordTransports:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif