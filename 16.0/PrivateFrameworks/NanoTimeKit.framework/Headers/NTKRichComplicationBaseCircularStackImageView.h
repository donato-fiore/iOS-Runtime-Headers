// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKRICHCOMPLICATIONBASECIRCULARSTACKIMAGEVIEW_H
#define NTKRICHCOMPLICATIONBASECIRCULARSTACKIMAGEVIEW_H



#import "NTKRichComplicationCircularStackContentTextView.h"
#import "NTKRichComplicationImageView.h"

@interface NTKRichComplicationBaseCircularStackImageView : NTKRichComplicationCircularStackContentTextView

@property (retain, nonatomic) NTKRichComplicationImageView *line1ImageView; // ivar: _line1ImageView


-(NSInteger)tritiumUpdateMode;
-(id)line1View;
-(id)line2TextProviderFromTemplate:(id)arg0 ;
-(void)setPaused:(BOOL)arg0 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif