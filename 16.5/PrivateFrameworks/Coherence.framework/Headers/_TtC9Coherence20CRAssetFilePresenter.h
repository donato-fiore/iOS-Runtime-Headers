// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9COHERENCE20CRASSETFILEPRESENTER_H
#define _TTC9COHERENCE20CRASSETFILEPRESENTER_H

@class NSOperationQueue, NSURL;
@protocol NSFilePresenter;

#import <Foundation/Foundation.h>


@interface _TtC9Coherence20CRAssetFilePresenter : NSObject <NSFilePresenter>

 {
    ? presentedItemURL;
    ? assetManager;
}


@property (nonatomic, readonly) NSOperationQueue *presentedItemOperationQueue; // ivar: presentedItemOperationQueue
@property (nonatomic, readonly) NSURL *presentedItemURL;


-(id)init;
-(void)accommodatePresentedSubitemDeletionAtURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)presentedSubitemDidAppearAtURL:(id)arg0 ;
-(void)presentedSubitemDidChangeAtURL:(id)arg0 ;


@end


#endif