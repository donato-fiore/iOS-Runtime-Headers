// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIPDFPAGERENDERJOB_H
#define UIPDFPAGERENDERJOB_H

@class UIImage;

#import <Foundation/Foundation.h>

#import "UIPDFPage.h"
#import "UIPDFPageRenderOperation.h"

@interface UIPDFPageRenderJob : NSObject {
    UIPDFPage *_page;
    UIImage *_image;
    UIPDFPageRenderOperation *_operation;
    id *_target;
    SEL _callback;
    id *_userData;
    BOOL _sendPending;
    os_unfair_lock_s _lock;
}


@property (readonly, retain) UIImage *image;
@property UIPDFPageRenderOperation *operation;
@property (readonly) NSUInteger pageIndex; // ivar: _pageIndex
@property (readonly) NSInteger priority; // ivar: _priority
@property BOOL releaseWhenDone; // ivar: _releaseWhenDone
@property (readonly) CGSize size; // ivar: _size


-(BOOL)hasPage;
-(id)initWithPage:(id)arg0 maxSize:(struct CGSize )arg1 queuePriority:(NSInteger)arg2 ;
-(void)cancel;
-(void)cancelOperation;
-(void)cancelOperationForTarget:(id)arg0 ;
-(void)dealloc;
-(void)releaseOperation;
-(void)renderImage;
-(void)sendImage;
-(void)sendImageTo:(id)arg0 callback:(SEL)arg1 userData:(id)arg2 ;
-(void)setTarget:(id)arg0 callback:(SEL)arg1 userData:(id)arg2 ;


@end


#endif