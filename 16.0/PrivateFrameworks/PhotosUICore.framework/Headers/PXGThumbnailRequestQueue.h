// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGTHUMBNAILREQUESTQUEUE_H
#define PXGTHUMBNAILREQUESTQUEUE_H


#import <Foundation/Foundation.h>


@interface PXGThumbnailRequestQueue : NSObject {
    NSInteger _capacity;
}


@property (nonatomic) NSInteger count; // ivar: _count
@property (readonly, nonatomic) *PXGThumbnailRequest requests; // ivar: _requests


-(id)description;
-(id)init;
-(void)dealloc;
-(void)enqueueRequestsWithItemRange:(struct _NSRange )arg0 textureRequestIDs:(struct _NSRange )arg1 displayAssetFetchResult:(id)arg2 targetSize:(struct CGSize )arg3 ;
-(void)removeAllRequests;
-(void)sortRequests;


@end


#endif