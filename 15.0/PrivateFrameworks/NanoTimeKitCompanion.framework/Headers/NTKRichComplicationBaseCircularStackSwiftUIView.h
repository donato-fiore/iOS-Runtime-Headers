// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKRICHCOMPLICATIONBASECIRCULARSTACKSWIFTUIVIEW_H
#define NTKRICHCOMPLICATIONBASECIRCULARSTACKSWIFTUIVIEW_H

@class CDComplicationHostingView;


#import "NTKRichComplicationCircularStackContentTextView.h"

@interface NTKRichComplicationBaseCircularStackSwiftUIView : NTKRichComplicationCircularStackContentTextView {
    CDComplicationHostingView *_line1SwiftUIView;
}




-(id)line1View;
-(id)line2TextProviderFromTemplate:(id)arg0 ;
-(void)_handleTemplate:(id)arg0 reason:(NSInteger)arg1 ;
-(void)setPaused:(BOOL)arg0 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif