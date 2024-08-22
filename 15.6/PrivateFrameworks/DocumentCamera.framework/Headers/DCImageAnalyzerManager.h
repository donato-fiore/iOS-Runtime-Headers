// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DCIMAGEANALYZERMANAGER_H
#define DCIMAGEANALYZERMANAGER_H

@class VKImageAnalyzer, NSCache;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DCImageAnalyzerManager : NSObject {
    VKImageAnalyzer *_imageAnalyzer;
    NSCache *_cachedAnalyses;
    NSObject<OS_dispatch_queue> *_operationQueue;
}




+(BOOL)isImageAnalysisEnabled;
+(id)sharedInstance;
-(id)init;
-(void)analysisForImage:(id)arg0 completionHandler:(id)arg1 ;
-(void)cleanup;


@end


#endif