// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDBACKGROUNDLAYOUTANDRENDERSTATE_H
#define TSDBACKGROUNDLAYOUTANDRENDERSTATE_H

@protocol TSDBackgroundLayoutAndRenderStateDelegate;

#import <Foundation/Foundation.h>


@interface TSDBackgroundLayoutAndRenderState : NSObject {
    id<TSDBackgroundLayoutAndRenderStateDelegate> *mDelegate;
    BOOL mNeedsLayoutAndRender;
    BOOL mNeedsLayoutForTilingLayers;
}




-(id)initWithDelegate:(id)arg0 ;
-(void)clearDelegate;
-(void)p_didBackgroundLayoutAndRender;
-(void)setNeedsLayoutAndRender;
-(void)setNeedsLayoutForTilingLayers;


@end


#endif