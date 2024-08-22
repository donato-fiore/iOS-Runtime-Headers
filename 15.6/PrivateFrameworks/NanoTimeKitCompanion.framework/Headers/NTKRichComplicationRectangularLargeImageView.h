// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKRICHCOMPLICATIONRECTANGULARLARGEIMAGEVIEW_H
#define NTKRICHCOMPLICATIONRECTANGULARLARGEIMAGEVIEW_H



#import "NTKRichComplicationRectangularHeadlineLargeBodyView.h"
#import "NTKRichComplicationImageView.h"

@interface NTKRichComplicationRectangularLargeImageView : NTKRichComplicationRectangularHeadlineLargeBodyView {
    NTKRichComplicationImageView *_imageView;
}




+(BOOL)handlesComplicationTemplate:(id)arg0 ;
+(BOOL)supportsComplicationFamily:(NSInteger)arg0 ;
-(NSInteger)tritiumUpdateMode;
-(id)body;
-(id)headerTextProviderFromTemplate:(id)arg0 ;
-(void)_handleTemplate:(id)arg0 reason:(NSInteger)arg1 ;
-(void)renderSynchronouslyWithImageQueueDiscard:(BOOL)arg0 inGroup:(id)arg1 ;
-(void)setPaused:(BOOL)arg0 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif