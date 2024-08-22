// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DRSPROTODIAGNOSTICREQUESTSTATSBATCHREPLY_H
#define DRSPROTODIAGNOSTICREQUESTSTATSBATCHREPLY_H

@class PBCodable, NSString;
@protocol CKCodeOperationMessageMutation, NSCopying;



@interface DRSProtoDiagnosticRequestStatsBatchReply : PBCodable <CKCodeOperationMessageMutation, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
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