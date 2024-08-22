// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9COHERENCE19CRFILESYNCPRESENTER_H
#define _TTC9COHERENCE19CRFILESYNCPRESENTER_H

@class NSOperationQueue, NSURL;
@protocol NSFilePresenter;

#import <Foundation/Foundation.h>


@interface _TtC9Coherence19CRFileSyncPresenter : NSObject <NSFilePresenter>

 {
    ? fileURL;
    ? queue;
    ? manager;
}


@property (nonatomic, readonly) NSOperationQueue *presentedItemOperationQueue;
@property (nonatomic, readonly) NSURL *presentedItemURL;


-(id)init;
-(void)presentedItemDidChange;
-(void)presentedItemDidGainVersion:(id)arg0 ;


@end


#endif