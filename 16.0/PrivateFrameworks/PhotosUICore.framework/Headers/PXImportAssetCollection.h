// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXIMPORTASSETCOLLECTION_H
#define PXIMPORTASSETCOLLECTION_H

@class NSMutableArray, NSArray, NSMutableSet, NSString;
@protocol NSCopying, OS_dispatch_queue;


#import "PXBaseDisplayCollection.h"

@interface PXImportAssetCollection : PXBaseDisplayCollection <NSCopying>

 {
    NSObject<OS_dispatch_queue> *_assetQueue;
    NSMutableArray *_assetList;
    NSArray *_arrangedAssetList;
    NSMutableSet *_assetUUIDs;
    BOOL _needsSorting;
}


@property (nonatomic) BOOL alreadyImportedGroup; // ivar: _alreadyImportedGroup
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier


+(id)dayFormatter;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)indexOfItem:(id)arg0 ;
-(NSInteger)numberOfItems;
-(id)arrangedObjects;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)itemAtIndex:(NSUInteger)arg0 ;
-(id)localizedTitle;
-(id)unsortedObjects;
-(void)addObject:(id)arg0 ;
-(void)addObjectsFromArray:(id)arg0 ;
-(void)arrangedObjects:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeObject:(id)arg0 ;
-(void)removeObjectsInRange:(struct _NSRange )arg0 ;


@end


#endif