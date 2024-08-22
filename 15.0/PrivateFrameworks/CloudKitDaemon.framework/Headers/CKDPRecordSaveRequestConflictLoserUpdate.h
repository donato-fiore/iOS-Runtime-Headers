// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDPRECORDSAVEREQUESTCONFLICTLOSERUPDATE_H
#define CKDPRECORDSAVEREQUESTCONFLICTLOSERUPDATE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface CKDPRecordSaveRequestConflictLoserUpdate : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *conflictLoserEtags; // ivar: _conflictLoserEtags


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)conflictLoserEtagsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addConflictLoserEtags:(id)arg0 ;
-(void)clearConflictLoserEtags;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif