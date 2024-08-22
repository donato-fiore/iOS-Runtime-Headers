// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CONTEXTUALACTIONPREDICTIONSDATACOMMONFILEFEATURES_H
#define CONTEXTUALACTIONPREDICTIONSDATACOMMONFILEFEATURES_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ContextualActionPredictionsDataCommonFileFeatures : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasIsMultipleFileSelection;
@property (nonatomic) BOOL hasSize;
@property (nonatomic) BOOL hasTimeSinceCreation;
@property (nonatomic) BOOL hasTimeSinceLastAdded;
@property (nonatomic) BOOL hasTimeSinceLastOpened;
@property (nonatomic) BOOL hasTimeSinceModified;
@property (readonly, nonatomic) BOOL hasUTI;
@property (nonatomic) BOOL isMultipleFileSelection; // ivar: _isMultipleFileSelection
@property (nonatomic) int size; // ivar: _size
@property (nonatomic) int timeSinceCreation; // ivar: _timeSinceCreation
@property (nonatomic) int timeSinceLastAdded; // ivar: _timeSinceLastAdded
@property (nonatomic) int timeSinceLastOpened; // ivar: _timeSinceLastOpened
@property (nonatomic) int timeSinceModified; // ivar: _timeSinceModified
@property (retain, nonatomic) NSString *uTI; // ivar: _uTI


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)sizeAsString:(int)arg0 ;
-(id)timeSinceCreationAsString:(int)arg0 ;
-(id)timeSinceLastAddedAsString:(int)arg0 ;
-(id)timeSinceLastOpenedAsString:(int)arg0 ;
-(id)timeSinceModifiedAsString:(int)arg0 ;
-(int)StringAsSize:(id)arg0 ;
-(int)StringAsTimeSinceCreation:(id)arg0 ;
-(int)StringAsTimeSinceLastAdded:(id)arg0 ;
-(int)StringAsTimeSinceLastOpened:(id)arg0 ;
-(int)StringAsTimeSinceModified:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif