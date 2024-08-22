// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKPIGMENTCOLLECTION_H
#define NTKPIGMENTCOLLECTION_H

@class NSMutableDictionary, NSOrderedSet, NSString, NSArray, NSDictionary;

#import <Foundation/Foundation.h>

#import "NTKPigmentCollectionConfig.h"
#import "NTKPigmentEditOption.h"

@interface NTKPigmentCollection : NSObject {
    NSMutableDictionary *_itemsByName;
    NSMutableDictionary *_collectionsByName;
    NSOrderedSet *_allItems;
}


@property (readonly) NSOrderedSet *allItems;
@property (copy) NSString *collectionName; // ivar: _collectionName
@property (copy) NSArray *collections; // ivar: _collections
@property (readonly) NSDictionary *collectionsByName;
@property (retain) NTKPigmentCollectionConfig *config; // ivar: _config
@property (copy) NSArray *defaultGalleryColors; // ivar: _defaultGalleryColors
@property (retain) NTKPigmentEditOption *defaultOption; // ivar: _defaultOption
@property (retain) NSMutableDictionary *faceSpecificPigmentsByFullname; // ivar: _faceSpecificPigmentsByFullname
@property (retain) NSOrderedSet *items; // ivar: _items
@property (nonatomic, getter=isShared) BOOL shared; // ivar: _shared
@property (nonatomic, getter=isStub) BOOL stub; // ivar: _stub


+(id)collectionFromProtoBuffer:(id)arg0 ;
+(id)collectionFromProtoBuffer:(id)arg0 sharedCollections:(id)arg1 ;
+(id)stubCollectionWithName:(id)arg0 ;
-(BOOL)hasAddableCollection;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isRootCollection;
-(NSUInteger)count;
-(id)_pigmentForName:(id)arg0 ;
-(id)buildNamesMappingWithPigments:(id)arg0 ;
-(id)defaultOptionWithName:(id)arg0 ;
-(id)description;
-(id)initWithName:(id)arg0 ;
-(id)migration;
-(id)pigmentWithFullname:(id)arg0 ;
-(id)pigmentsFromMostRecentAddableCollection;
-(id)protoBuffer;
-(id)protoBufferIgnoringSharedCollections:(BOOL)arg0 ;
-(void)appendCollection:(id)arg0 ;
-(void)fulfillWithSharedCollections:(id)arg0 ;
-(void)mergeWithCollection:(id)arg0 ;
-(void)setDefaultGalleryColorWithNames:(id)arg0 ;


@end


#endif