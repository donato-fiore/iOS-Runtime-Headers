// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGCOMPONENT_H
#define PXGCOMPONENT_H

@protocol PXGComponentObserver;

#import <Foundation/Foundation.h>

#import "PXGComponentDataStore.h"
#import "PXGMutableComponentDataStore.h"

@interface PXGComponent : NSObject {
    NSInteger _nestedChanges;
}


@property (readonly, nonatomic) PXGComponentDataStore *dataStore;
@property (readonly, nonatomic) PXGMutableComponentDataStore *mutableDataStore; // ivar: _mutableDataStore
@property (weak, nonatomic) NSObject<PXGComponentObserver> *observer; // ivar: _observer
@property (readonly, nonatomic) PXGMutableComponentDataStore *previousDataStore; // ivar: _previousDataStore


+(BOOL)shouldDiffForChanges;
+(NSUInteger)elementSize;
-(id)init;
-(id)initWithDataStore:(id)arg0 ;
-(void)cleanupUnusedObjects;
-(void)performChanges:(id)arg0 ;
-(void)willDestroyEntities:(struct ? *)arg0 count:(NSInteger)arg1 ;


@end


#endif