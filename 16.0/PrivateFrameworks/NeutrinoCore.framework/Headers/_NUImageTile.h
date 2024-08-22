// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NUIMAGETILE_H
#define _NUIMAGETILE_H

@class NSString;
@protocol NUSharableImage, OS_dispatch_queue, NUPurgeableStorage;

#import <Foundation/Foundation.h>


@interface _NUImageTile : NSObject <NUSharableImage>

 {
    NSObject<OS_dispatch_queue> *_queue;
    id<NUPurgeableStorage> *_storage;
    NSUInteger _accessCount;
    BOOL _wasPurged;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_decrementAccessCount;
-(BOOL)_incrementAccessCount;
-(BOOL)_markAsUnpurgeable;
-(BOOL)decrementAccessCount;
-(BOOL)decrementUseCount;
-(BOOL)incrementAccessCount;
-(BOOL)isInUse;
-(BOOL)isShared;
-(BOOL)isValid;
-(NSInteger)copyFromTile:(id)arg0 region:(id)arg1 ;
-(NSInteger)readStorageInRegion:(id)arg0 block:(id)arg1 ;
-(NSInteger)writeStorageInRegion:(id)arg0 block:(id)arg1 ;
-(NSUInteger)accessCount;
-(id)initWithStorage:(id)arg0 ;
-(int)useCount;
-(void)_markAsPurgeable;
-(void)_visitRead:(id)arg0 ;
-(void)dealloc;
-(void)decrementAccessCountButLeaveAccessedIfLastUse;
-(void)incrementUseCount;
-(void)returnToStorageFactory:(id)arg0 ;


@end


#endif