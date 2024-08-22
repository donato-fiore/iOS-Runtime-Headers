// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OBONBOARDINGKITPRIVACYUNIFIEDABOUTPRESENTATION_H
#define OBONBOARDINGKITPRIVACYUNIFIEDABOUTPRESENTATION_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface OBOnBoardingKitPrivacyUnifiedAboutPresentation : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *bundleid; // ivar: _bundleid
@property (readonly, nonatomic) BOOL hasBundleid;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif