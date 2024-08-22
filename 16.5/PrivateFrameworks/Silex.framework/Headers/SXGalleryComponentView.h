// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXGALLERYCOMPONENTVIEW_H
#define SXGALLERYCOMPONENTVIEW_H

@protocol SXDragManagerDataSource;


#import "SXMediaComponentView.h"
#import "SXDragManager.h"

@interface SXGalleryComponentView : SXMediaComponentView <SXDragManagerDataSource>



@property (retain, nonatomic) SXDragManager *dragManager; // ivar: _dragManager


-(id)dragManager:(id)arg0 dragableAtLocation:(struct CGPoint )arg1 ;
-(id)hostingView;
-(id)imageViewForLocation:(struct CGPoint )arg0 ;
-(id)initWithDOMObjectProvider:(id)arg0 viewport:(id)arg1 presentationDelegate:(id)arg2 componentStyleRendererFactory:(id)arg3 analyticsReporting:(id)arg4 appStateMonitor:(id)arg5 mediaSharingPolicyProvider:(id)arg6 ;
-(id)viewForDragManager:(id)arg0 ;
-(void)forceImageViewFullscreen:(id)arg0 ;


@end


#endif