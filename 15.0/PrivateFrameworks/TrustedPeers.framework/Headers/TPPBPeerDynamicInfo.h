// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPPBPEERDYNAMICINFO_H
#define TPPBPEERDYNAMICINFO_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface TPPBPeerDynamicInfo : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger clock; // ivar: _clock
@property (retain, nonatomic) NSMutableArray *dispositions; // ivar: _dispositions
@property (retain, nonatomic) NSMutableArray *excludeds; // ivar: _excludeds
@property (nonatomic) BOOL hasClock;
@property (retain, nonatomic) NSMutableArray *includeds; // ivar: _includeds
@property (retain, nonatomic) NSMutableArray *preapprovals; // ivar: _preapprovals


+(Class)excludedType;
+(Class)includedType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)dispositionsAtIndex:(NSUInteger)arg0 ;
-(id)excludedAtIndex:(NSUInteger)arg0 ;
-(id)includedAtIndex:(NSUInteger)arg0 ;
-(id)preapprovalsAtIndex:(NSUInteger)arg0 ;
-(void)addDispositions:(id)arg0 ;
-(void)addExcluded:(id)arg0 ;
-(void)addIncluded:(id)arg0 ;
-(void)addPreapprovals:(id)arg0 ;
-(void)clearDispositions;
-(void)clearExcludeds;
-(void)clearIncludeds;
-(void)clearPreapprovals;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif