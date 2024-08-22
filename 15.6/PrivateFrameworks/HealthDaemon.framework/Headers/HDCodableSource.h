// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCODABLESOURCE_H
#define HDCODABLESOURCE_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface HDCodableSource : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (nonatomic) BOOL deleted; // ivar: _deleted
@property (readonly, nonatomic) BOOL hasBundleIdentifier;
@property (nonatomic) BOOL hasDeleted;
@property (nonatomic) BOOL hasModificationDate;
@property (readonly, nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasOptions;
@property (readonly, nonatomic) BOOL hasOwningAppBundleIdentifier;
@property (readonly, nonatomic) BOOL hasProductType;
@property (readonly, nonatomic) BOOL hasUuid;
@property (nonatomic) CGFloat modificationDate; // ivar: _modificationDate
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSInteger options; // ivar: _options
@property (retain, nonatomic) NSString *owningAppBundleIdentifier; // ivar: _owningAppBundleIdentifier
@property (retain, nonatomic) NSString *productType; // ivar: _productType
@property (retain, nonatomic) NSData *uuid; // ivar: _uuid


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)decodedModificationDate;
-(id)decodedUUID;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif