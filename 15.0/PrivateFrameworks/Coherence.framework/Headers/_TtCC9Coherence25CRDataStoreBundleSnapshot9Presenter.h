// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTCC9COHERENCE25CRDATASTOREBUNDLESNAPSHOT9PRESENTER_H
#define _TTCC9COHERENCE25CRDATASTOREBUNDLESNAPSHOT9PRESENTER_H

@class NSOperationQueue, NSURL;
@protocol NSFilePresenter;

#import <Foundation/Foundation.h>


@interface _TtCC9Coherence25CRDataStoreBundleSnapshot9Presenter : NSObject <NSFilePresenter>

 {
    ? presentedItemURL;
    ? snapshot;
}


@property (nonatomic, readonly) NSOperationQueue *presentedItemOperationQueue; // ivar: presentedItemOperationQueue
@property (nonatomic, readonly) NSURL *presentedItemURL;


-(id)init;
-(void)accommodatePresentedSubitemDeletionAtURL:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif