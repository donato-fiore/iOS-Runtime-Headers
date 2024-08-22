// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTHUDVIEW_H
#define AVTHUDVIEW_H

@class UIView, UILabel, CALayer, NSMutableArray;



@interface AVTHUDView : UIView {
    UILabel *_totalLatencyLabel;
    UILabel *_arKitLatencyLabel;
    UILabel *_updateSyncLatencyLabel;
    UILabel *_metalLatencyLabel;
    UILabel *_fpsLabel;
    UILabel *_audioTimeLabel;
    UILabel *_timeBetweenARFrameLabel;
    UILabel *_droppedFrameLabel;
    UILabel *_shaderCompilationLabel;
    ? _lastFrameData;
    CALayer *_arKitLatencyBar;
    CALayer *_updateLatencyBar;
    CALayer *_metalLatencyBar;
    NSMutableArray *_totalLatencyGraphLayers;
    int _selectedGraphIndex;
}




-(id)_label;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_loadSubviews;
-(void)_tapAction:(id)arg0 ;
-(void)_updateLatencyBar:(struct ? *)arg0 ;
-(void)_updateLatencyGraph:(struct ? *)arg0 ;
-(void)layoutSubviews;
-(void)updateWithData:(struct ? )arg0 ;


@end


#endif