// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CACDICTATIONRECOGNIZERMODEOVERLAYVIEWCONTROLLER_H
#define CACDICTATIONRECOGNIZERMODEOVERLAYVIEWCONTROLLER_H

@class UIViewController;
@protocol CACViewController;



@interface CACDictationRecognizerModeOverlayViewController : UIViewController <CACViewController>



@property (readonly, nonatomic) BOOL isOverlay;
@property (readonly, nonatomic) NSInteger zOrder;


-(BOOL)_canShowWhileLocked;
-(void)loadView;
-(void)setDictationRecognizerMode:(int)arg0 ;
-(void)setImageRect:(struct CGRect )arg0 ;


@end


#endif