// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRISHAREDUICONTENTPLATTERSCROLLVIEW_H
#define SIRISHAREDUICONTENTPLATTERSCROLLVIEW_H

@protocol SiriSharedUIContentPlatterScrollViewDelegate;


#import "SiriSharedUIStandardScrollView.h"

@interface SiriSharedUIContentPlatterScrollView : SiriSharedUIStandardScrollView

@property (nonatomic) BOOL adjustContentSizeOnNextLayout; // ivar: _adjustContentSizeOnNextLayout
@property (nonatomic, getter=isAutomaticScrollingEnabled) BOOL automaticScrollingEnabled; // ivar: _automaticScrollingEnabled
@property (weak, nonatomic) NSObject<SiriSharedUIContentPlatterScrollViewDelegate> *platterDelegate; // ivar: _platterDelegate


-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_sharedInit;
-(void)layoutSubviews;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif