// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APPCMETRICSVIDEOVIEW_H
#define APPCMETRICSVIDEOVIEW_H



#import "APPCMetricsView.h"
#import "APPrivacyMarker.h"

@interface APPCMetricsVideoView : APPCMetricsView {
    ? representationFetched;
    ? videoView;
}


@property (nonatomic, readonly) APPrivacyMarker *privacyMarker; // ivar: privacyMarker


-(void)beginAction;
-(void)didAddSubview:(id)arg0 ;


@end


#endif