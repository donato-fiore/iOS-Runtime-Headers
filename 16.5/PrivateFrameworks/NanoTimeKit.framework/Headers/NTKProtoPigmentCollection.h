// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKPROTOPIGMENTCOLLECTION_H
#define NTKPROTOPIGMENTCOLLECTION_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "NTKProtoPigmentCollectionConfig.h"
#import "NTKProtoPigment.h"

@interface NTKProtoPigmentCollection : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *collections; // ivar: _collections
@property (retain, nonatomic) NTKProtoPigmentCollectionConfig *config; // ivar: _config
@property (retain, nonatomic) NSMutableArray *defaultGalleryColors; // ivar: _defaultGalleryColors
@property (retain, nonatomic) NTKProtoPigment *defaultOption; // ivar: _defaultOption
@property (readonly, nonatomic) BOOL hasConfig;
@property (readonly, nonatomic) BOOL hasDefaultOption;
@property (nonatomic) BOOL hasIsShared;
@property (nonatomic) BOOL hasIsStub;
@property (readonly, nonatomic) BOOL hasName;
@property (nonatomic) BOOL isShared; // ivar: _isShared
@property (nonatomic) BOOL isStub; // ivar: _isStub
@property (retain, nonatomic) NSMutableArray *items; // ivar: _items
@property (retain, nonatomic) NSString *name; // ivar: _name


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)collectionsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)defaultGalleryColorsAtIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)itemsAtIndex:(NSUInteger)arg0 ;
-(void)addCollections:(id)arg0 ;
-(void)addDefaultGalleryColors:(id)arg0 ;
-(void)addItems:(id)arg0 ;
-(void)clearCollections;
-(void)clearDefaultGalleryColors;
-(void)clearItems;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif