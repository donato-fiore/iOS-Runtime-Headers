// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPM2NAMEDENTITYNEWITEMDONATION_H
#define PPM2NAMEDENTITYNEWITEMDONATION_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface PPM2NamedEntityNewItemDonation : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *activeTreatments; // ivar: _activeTreatments
@property (nonatomic) int algorithm; // ivar: _algorithm
@property (nonatomic) int category; // ivar: _category
@property (nonatomic) int donationSource; // ivar: _donationSource
@property (retain, nonatomic) NSString *dynamicCategory; // ivar: _dynamicCategory
@property (retain, nonatomic) NSString *groupId; // ivar: _groupId
@property (readonly, nonatomic) BOOL hasActiveTreatments;
@property (nonatomic) BOOL hasAlgorithm;
@property (nonatomic) BOOL hasCategory;
@property (nonatomic) BOOL hasDonationSource;
@property (readonly, nonatomic) BOOL hasDynamicCategory;
@property (readonly, nonatomic) BOOL hasGroupId;
@property (nonatomic) BOOL hasNewItem;
@property (nonatomic) BOOL hasRank;
@property (nonatomic) BOOL hasUserCreated;
@property (nonatomic) BOOL newItem; // ivar: _newItem
@property (nonatomic) NSInteger rank; // ivar: _rank
@property (nonatomic) BOOL userCreated; // ivar: _userCreated


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)algorithmAsString:(int)arg0 ;
-(id)categoryAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)donationSourceAsString:(int)arg0 ;
-(int)StringAsAlgorithm:(id)arg0 ;
-(int)StringAsCategory:(id)arg0 ;
-(int)StringAsDonationSource:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif