// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISCROLLVIEWFPSHUD_H
#define _UISCROLLVIEWFPSHUD_H



#import "UIView.h"
#import "UILabel.h"
#import "_UIScrollViewFPSHUDGraphView.h"

@interface _UIScrollViewFPSHUD : UIView {
    UILabel *_preferredLabel;
    UILabel *_reportedLabel;
    UILabel *_mismatchesLabel;
    _UIScrollViewFPSHUDGraphView *_preferredGraph;
    _UIScrollViewFPSHUDGraphView *_reportedGraph;
    _UIScrollViewFPSHUDGraphView *_mismatchesGraph;
    unsigned int _previousFramePreferred;
}




-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif