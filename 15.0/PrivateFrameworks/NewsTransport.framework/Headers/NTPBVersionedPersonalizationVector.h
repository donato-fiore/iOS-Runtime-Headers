// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBVERSIONEDPERSONALIZATIONVECTOR_H
#define NTPBVERSIONEDPERSONALIZATIONVECTOR_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;



@interface NTPBVersionedPersonalizationVector : PBCodable <NSCopying>



@property (retain, nonatomic) NSData *bundleSubscribedVector; // ivar: _bundleSubscribedVector
@property (retain, nonatomic) NSString *bundleSubscribedVectorVersion; // ivar: _bundleSubscribedVectorVersion
@property (readonly, nonatomic) BOOL hasBundleSubscribedVector;
@property (readonly, nonatomic) BOOL hasBundleSubscribedVectorVersion;
@property (readonly, nonatomic) BOOL hasPersonalizationVector;
@property (readonly, nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSData *personalizationVector; // ivar: _personalizationVector
@property (retain, nonatomic) NSString *version; // ivar: _version


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif