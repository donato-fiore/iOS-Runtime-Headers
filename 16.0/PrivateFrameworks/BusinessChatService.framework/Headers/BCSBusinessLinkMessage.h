// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCSBUSINESSLINKMESSAGE_H
#define BCSBUSINESSLINKMESSAGE_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface BCSBusinessLinkMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int action; // ivar: _action
@property (retain, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (retain, nonatomic) NSMutableArray *businessLinkContents; // ivar: _businessLinkContents
@property (retain, nonatomic) NSMutableArray *categoryStyleAttributes; // ivar: _categoryStyleAttributes
@property (nonatomic) BOOL hasAction;
@property (readonly, nonatomic) BOOL hasBundleId;
@property (readonly, nonatomic) BOOL hasHeroImage;
@property (readonly, nonatomic) BOOL hasIconImage;
@property (nonatomic) BOOL hasIsPoweredBy;
@property (readonly, nonatomic) BOOL hasLink;
@property (readonly, nonatomic) BOOL hasMuid;
@property (readonly, nonatomic) BOOL hasRedirectUrl;
@property (retain, nonatomic) NSString *heroImage; // ivar: _heroImage
@property (retain, nonatomic) NSString *iconImage; // ivar: _iconImage
@property (nonatomic) BOOL isPoweredBy; // ivar: _isPoweredBy
@property (retain, nonatomic) NSString *link; // ivar: _link
@property (retain, nonatomic) NSString *muid; // ivar: _muid
@property (retain, nonatomic) NSString *redirectUrl; // ivar: _redirectUrl


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)actionAsString:(int)arg0 ;
-(id)businessLinkContentsAtIndex:(NSUInteger)arg0 ;
-(id)categoryStyleAttributesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsAction:(id)arg0 ;
-(void)addBusinessLinkContents:(id)arg0 ;
-(void)addCategoryStyleAttributes:(id)arg0 ;
-(void)clearBusinessLinkContents;
-(void)clearCategoryStyleAttributes;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif