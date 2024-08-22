// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKRICHCOMPLICATIONRECTANGULARFULLSWIFTUIVIEW_H
#define NTKRICHCOMPLICATIONRECTANGULARFULLSWIFTUIVIEW_H

@class CDComplicationHostingView;


#import "NTKRichComplicationRectangularFullBaseView.h"

@interface NTKRichComplicationRectangularFullSwiftUIView : NTKRichComplicationRectangularFullBaseView {
    CDComplicationHostingView *_swiftUIView;
}




+(BOOL)handlesComplicationTemplate:(id)arg0 ;
-(id)content;
-(void)_editingDidEnd;
-(void)_handleTemplate:(id)arg0 reason:(NSInteger)arg1 ;
-(void)setPaused:(BOOL)arg0 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif