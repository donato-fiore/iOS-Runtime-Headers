// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSMODELLOADER_H
#define SSMODELLOADER_H

@class NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SSModelLoader : NSObject

@property (retain, nonatomic) NSMutableSet *pendingUpdates; // ivar: _pendingUpdates
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)assetDirectoryPathForType:(NSUInteger)arg0 forUpdate:(BOOL)arg1 ;
+(id)sharedInstance;
-(BOOL)hasPendingUpdates;
-(id)init;
-(void)moveNewlyPackagedAssets:(id)arg0 ;
-(void)removeAssetsForType:(NSUInteger)arg0 group:(id)arg1 ;
-(void)removeAssetsWithName:(id)arg0 ;
-(void)unpackageModelAssets:(id)arg0 assetName:(id)arg1 completion:(id)arg2 ;
-(void)unpackageModelAssets:(id)arg0 type:(NSUInteger)arg1 group:(id)arg2 completion:(id)arg3 ;
-(void)unpackageModelAssets:(id)arg0 type:(NSUInteger)arg1 intoDirectory:(id)arg2 group:(id)arg3 completion:(id)arg4 ;


@end


#endif