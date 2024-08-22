// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBUISIZEOBSERVINGVIEW_H
#define SBUISIZEOBSERVINGVIEW_H

@class SBFView;
@protocol SBUISizeObservingViewDelegate;



@interface SBUISizeObservingView : SBFView {
    BOOL _delegateInterestedInSizeChanges;
}


@property (weak, nonatomic) NSObject<SBUISizeObservingViewDelegate> *delegate; // ivar: _delegate


-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif