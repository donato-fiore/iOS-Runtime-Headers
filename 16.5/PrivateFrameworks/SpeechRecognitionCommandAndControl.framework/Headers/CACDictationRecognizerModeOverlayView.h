// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CACDICTATIONRECOGNIZERMODEOVERLAYVIEW_H
#define CACDICTATIONRECOGNIZERMODEOVERLAYVIEW_H

@class UIView, UIColor;



@interface CACDictationRecognizerModeOverlayView : UIView {
    CGRect _imageRect;
    int _dictationRecognizerMode;
}


@property (nonatomic) CGRect boundsForLastReload; // ivar: _boundsForLastReload
@property (nonatomic) BOOL didUpdateItems; // ivar: _didUpdateItems
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor


-(id)_badgeViewContainerWithFrame:(struct CGRect )arg0 usingContrast:(BOOL)arg1 ;
-(id)_createInvertedMaskedImage:(id)arg0 withColor:(id)arg1 ;
-(id)_imageForCurrentDictiationRecognizerMode;
-(id)imageBundle;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_addIconContrasted:(BOOL)arg0 ;
-(void)_updateOverlayImage;
-(void)setDictationRecognizerMode:(int)arg0 ;
-(void)setImageRect:(struct CGRect )arg0 ;
-(void)setImageRect:(struct CGRect )arg0 withColor:(id)arg1 ;


@end


#endif