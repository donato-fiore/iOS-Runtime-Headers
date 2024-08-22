// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC7VFXCOREP33_04FAA53CB72A1AD8A5C9D12D73F465CD17MTLLIBRARYWATCHER_H
#define _TTC7VFXCOREP33_04FAA53CB72A1AD8A5C9D12D73F465CD17MTLLIBRARYWATCHER_H

@class NSOperationQueue, NSURL;
@protocol NSFilePresenter;

#import <Foundation/Foundation.h>


@interface _TtC7VFXCoreP33_04FAA53CB72A1AD8A5C9D12D73F465CD17MTLLibraryWatcher : NSObject <NSFilePresenter>

 {
    ? libraryURL;
    ? watchingFolderQueue;
    ? block;
}


@property (nonatomic, readonly) NSOperationQueue *presentedItemOperationQueue;
@property (nonatomic, readonly) NSURL *presentedItemURL;


-(id)init;
-(void)presentedItemDidChange;


@end


#endif