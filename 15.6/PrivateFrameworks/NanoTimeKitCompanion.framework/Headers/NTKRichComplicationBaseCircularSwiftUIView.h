// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKRICHCOMPLICATIONBASECIRCULARSWIFTUIVIEW_H
#define NTKRICHCOMPLICATIONBASECIRCULARSWIFTUIVIEW_H

@class CDComplicationHostingView;


#import "NTKRichComplicationCircularBaseView.h"

@interface NTKRichComplicationBaseCircularSwiftUIView : NTKRichComplicationCircularBaseView {
    CDComplicationHostingView *_swiftUIView;
}




-(id)initWithFamily:(NSInteger)arg0 ;
-(void)_editingDidEnd;
-(void)_handleTemplate:(id)arg0 reason:(NSInteger)arg1 ;
-(void)layoutSubviews;
-(void)setPaused:(BOOL)arg0 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif