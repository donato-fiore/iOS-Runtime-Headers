// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPPBMUSICDATACOLLECTIONARRAY_H
#define PPPBMUSICDATACOLLECTIONARRAY_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface PPPBMusicDataCollectionArray : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *assetVersion; // ivar: _assetVersion
@property (retain, nonatomic) NSMutableArray *experimentalGroups; // ivar: _experimentalGroups
@property (readonly, nonatomic) BOOL hasAssetVersion;
@property (nonatomic) BOOL hasHasMusicSubscription;
@property (nonatomic) BOOL hasMusicSubscription; // ivar: _hasMusicSubscription
@property (retain, nonatomic) NSMutableArray *records; // ivar: _records


+(id)options;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)experimentalGroupsAtIndex:(NSUInteger)arg0 ;
-(id)recordsAtIndex:(NSUInteger)arg0 ;
-(void)addExperimentalGroups:(id)arg0 ;
-(void)addRecords:(id)arg0 ;
-(void)clearExperimentalGroups;
-(void)clearRecords;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif