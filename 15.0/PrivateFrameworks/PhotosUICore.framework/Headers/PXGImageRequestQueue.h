// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXGIMAGEREQUESTQUEUE_H
#define PXGIMAGEREQUESTQUEUE_H

@protocol PXGImageRequestPerformer;

#import <Foundation/Foundation.h>


@interface PXGImageRequestQueue : NSObject {
    *PXGImageRequest _requests;
    NSInteger _capacity;
}


@property (nonatomic) NSInteger count; // ivar: _count
@property (weak, nonatomic) NSObject<PXGImageRequestPerformer> *imageRequestPerformer; // ivar: _imageRequestPerformer


-(void)_discardIndexes:(id)arg0 ;
-(void)_removeAllRequests;
-(void)cancelTextureRequests:(id)arg0 ;
-(void)dealloc;
-(void)enqueueRequestsWithSpriteIndexRange:(struct _PXGSpriteIndexRange )arg0 textureRequestIDs:(struct _NSRange )arg1 displayAssetFetchResult:(id)arg2 observer:(id)arg3 presentationStyles:(NSUInteger)arg4 targetSize:(struct CGSize )arg5 screenScale:(CGFloat)arg6 adjustment:(id)arg7 intent:(NSUInteger)arg8 ;
-(void)performRequestsWithAllowedIDs:(id)arg0 ;


@end


#endif