// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKFACEPIGMENTSET_H
#define NTKFACEPIGMENTSET_H

@class NSDictionary, NSArray, NSString;

#import <Foundation/Foundation.h>


@interface NTKFacePigmentSet : NSObject

@property (copy, nonatomic) NSDictionary *collectionBySlots; // ivar: _collectionBySlots
@property (readonly, nonatomic) NSArray *defaultGalleryColors;
@property (copy, nonatomic) NSString *domain; // ivar: _domain
@property (readonly, nonatomic) BOOL hasMultipleSlots;
@property (readonly, nonatomic) NSInteger numberOfSlots;


+(id)facePigmentSetFromProtoBuffer:(id)arg0 sharedCollections:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)numberOfItemsForAllSlots;
-(id)collectionForSlot:(id)arg0 ;
-(id)description;
-(id)pigmentSet;
-(id)pigmentsFromMostRecentAddableCollectionForSlot:(id)arg0 ;
-(id)pigmentsFromMostRecentAddableCollectionsForSlot:(id)arg0 ;
-(id)protoBuffer;


@end


#endif