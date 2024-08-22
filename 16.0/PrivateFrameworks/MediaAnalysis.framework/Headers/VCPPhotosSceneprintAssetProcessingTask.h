// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPPHOTOSSCENEPRINTASSETPROCESSINGTASK_H
#define VCPPHOTOSSCENEPRINTASSETPROCESSINGTASK_H

@class NSArray;
@protocol VCPMADTaskProtocol;

#import <Foundation/Foundation.h>


@interface VCPPhotosSceneprintAssetProcessingTask : NSObject <VCPMADTaskProtocol>

 {
    id *_completionHandler;
    NSArray *_assets;
    atomic<bool> _started;
    atomic<bool> _cancel;
    NSUInteger _revision;
}




+(NSUInteger)_panoVNRequestMethod;
+(id)taskWithAssets:(id)arg0 options:(id)arg1 andCompletionHandler:(id)arg2 ;
-(BOOL)autoCancellable;
-(BOOL)run:(*id)arg0 ;
-(float)resourceRequirement;
-(id)initWithAssets:(id)arg0 options:(id)arg1 andCompletionHandler:(id)arg2 ;
-(int)run;
-(void)cancel;
-(void)dealloc;


@end


#endif