// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUICONFIGURATIONPRELOADER_H
#define SKUICONFIGURATIONPRELOADER_H

@class NSMutableArray, NSString, NSDictionary, NSOperationQueue;

#import <Foundation/Foundation.h>

#import "SKUIReloadConfigurationOperation.h"

@interface SKUIConfigurationPreloader : NSObject

@property (readonly, nonatomic) NSMutableArray *completionBlocks; // ivar: _completionBlocks
@property (readonly, copy, nonatomic) NSString *configurationCachePath; // ivar: _configurationCachePath
@property (readonly) BOOL hasExistingConfigurationCache;
@property (retain, nonatomic) NSDictionary *loadedConfiguration; // ivar: _loadedConfiguration
@property (retain, nonatomic) SKUIReloadConfigurationOperation *pendingReloadOperation; // ivar: _pendingReloadOperation
@property (readonly, nonatomic) NSOperationQueue *workQueue; // ivar: _workQueue


-(id)init;
-(id)initWithConfigurationCachePath:(id)arg0 ;
-(id)newReloadConfigurationOperation;
-(void)finishPreloadingConfiguration:(id)arg0 error:(id)arg1 ;
-(void)preloadConfigurationForPurpose:(NSInteger)arg0 withCompletionBlock:(id)arg1 ;


@end


#endif