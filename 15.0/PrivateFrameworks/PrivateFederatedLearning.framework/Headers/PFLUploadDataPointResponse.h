// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFLUPLOADDATAPOINTRESPONSE_H
#define PFLUPLOADDATAPOINTRESPONSE_H

@class PBCodable, NSString;
@protocol CKCodeOperationMessageMutation, NSCopying;



@interface PFLUploadDataPointResponse : PBCodable <CKCodeOperationMessageMutation, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasSuccess;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL success; // ivar: _success
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif