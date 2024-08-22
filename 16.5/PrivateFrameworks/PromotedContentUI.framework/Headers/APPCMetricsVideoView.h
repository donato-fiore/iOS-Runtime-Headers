// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APPCMETRICSVIDEOVIEW_H
#define APPCMETRICSVIDEOVIEW_H



#import "APPCMetricsView.h"
#import "APPrivacyMarker.h"

@interface APPCMetricsVideoView : APPCMetricsView {
    ? representationFetched;
    ? videoView;
    ? videoIsFullscreen;
}


@property (nonatomic, readonly) APPrivacyMarker *privacyMarker; // ivar: privacyMarker


-(void)beginAction;
-(void)didAddSubview:(id)arg0 ;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)onDidEnterFullscreen:(id)arg0 ;
-(void)onDidLeaveFullscreen:(id)arg0 ;


@end


#endif