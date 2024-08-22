// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPFULLANALYSISURLPROCESSINGTASK_H
#define VCPFULLANALYSISURLPROCESSINGTASK_H

@class NSURL;
@protocol VCPMADTaskProtocol;

#import <Foundation/Foundation.h>


@interface VCPFullAnalysisURLProcessingTask : NSObject <VCPMADTaskProtocol>

 {
    BOOL _cancel;
    BOOL _noResultStrip;
    NSURL *_assetURL;
    NSURL *_pairedAssetURL;
    NSUInteger _analysisTypes;
    id *_progressHandler;
    id *_completionHandler;
}




// +(id)taskForURLAsset:(id)arg0 withOptions:(id)arg1 analysisTypes:(NSUInteger)arg2 progressHandler:(id)arg3 completionHandler:(unk)arg4  ;
-(BOOL)autoCancellable;
-(float)resourceRequirement;
// -(id)initWithURLAsset:(id)arg0 withOptions:(id)arg1 analysisTypes:(NSUInteger)arg2 progressHandler:(id)arg3 completionHandler:(unk)arg4  ;
-(int)run;
-(void)cancel;


@end


#endif