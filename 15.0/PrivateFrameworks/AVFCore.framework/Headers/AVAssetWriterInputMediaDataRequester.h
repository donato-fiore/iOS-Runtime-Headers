// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVASSETWRITERINPUTMEDIADATAREQUESTER_H
#define AVASSETWRITERINPUTMEDIADATAREQUESTER_H

@protocol OS_dispatch_queue, AVAssetWriterInputMediaDataRequesterDelegate;

#import <Foundation/Foundation.h>

#import "AVWeakReference.h"

@interface AVAssetWriterInputMediaDataRequester : NSObject {
    id *_requestBlock;
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
    AVWeakReference *_weakReferenceToDelegate;
}


@property (weak) NSObject<AVAssetWriterInputMediaDataRequesterDelegate> *delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *requestQueue; // ivar: _requestQueue


-(id)init;
-(id)initWithRequestQueue:(id)arg0 requestBlock:(id)arg1 ;
-(void)_collectUncollectables_invokedFromDeallocAndFinalize;
-(void)dealloc;
-(void)requestMediaDataIfNecessary;


@end


#endif