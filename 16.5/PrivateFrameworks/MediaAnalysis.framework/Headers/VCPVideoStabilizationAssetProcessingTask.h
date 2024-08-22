// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPVIDEOSTABILIZATIONASSETPROCESSINGTASK_H
#define VCPVIDEOSTABILIZATIONASSETPROCESSINGTASK_H

@class NSArray, PHPhotoLibrary;
@protocol VCPMADTaskProtocol;

#import <Foundation/Foundation.h>

#import "VCPDatabaseReader.h"

@interface VCPVideoStabilizationAssetProcessingTask : NSObject <VCPMADTaskProtocol>

 {
    id *_completionHandler;
    NSArray *_assets;
    PHPhotoLibrary *_photoLibrary;
    VCPDatabaseReader *_database;
    atomic<bool> _cancel;
    atomic<bool> _started;
    NSUInteger _stabilizationType;
    BOOL _onDemandPixel;
    BOOL _onDemandGyro;
}




+(BOOL)deserializeStabilizationRecipeInAttributes:(id)arg0 ;
+(id)taskWithAssets:(id)arg0 andOptions:(id)arg1 andCompletionHandler:(id)arg2 ;
-(BOOL)autoCancellable;
-(float)resourceRequirement;
-(id)initWithAssets:(id)arg0 andOptions:(id)arg1 andCompletionHandler:(id)arg2 ;
-(int)main;
-(int)run;
-(void)cancel;
-(void)dealloc;


@end


#endif