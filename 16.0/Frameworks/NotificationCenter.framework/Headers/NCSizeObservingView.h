// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCSIZEOBSERVINGVIEW_H
#define NCSIZEOBSERVINGVIEW_H

@class UIView;
@protocol NCSizeObservingViewDelegate;



@interface NCSizeObservingView : UIView {
    BOOL _delegateInterestedInSizeChanges;
}


@property (weak, nonatomic) NSObject<NCSizeObservingViewDelegate> *delegate; // ivar: _delegate


-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif