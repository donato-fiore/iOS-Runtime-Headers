// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKRICHCOMPLICATIONRECTANGULARFULLIMAGEVIEW_H
#define NTKRICHCOMPLICATIONRECTANGULARFULLIMAGEVIEW_H



#import "NTKRichComplicationRectangularFullBaseView.h"
#import "NTKRichComplicationImageView.h"

@interface NTKRichComplicationRectangularFullImageView : NTKRichComplicationRectangularFullBaseView {
    NTKRichComplicationImageView *_imageView;
}




+(BOOL)handlesComplicationTemplate:(id)arg0 ;
-(NSInteger)tritiumUpdateMode;
-(id)content;
-(void)_handleTemplate:(id)arg0 reason:(NSInteger)arg1 ;
-(void)renderSynchronouslyWithImageQueueDiscard:(BOOL)arg0 inGroup:(id)arg1 ;
-(void)setPaused:(BOOL)arg0 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif