// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CACDICTATIONRECOGNIZERMODEOVERLAYMANAGER_H
#define CACDICTATIONRECOGNIZERMODEOVERLAYMANAGER_H

@protocol CACDictationRecognizerModeOverlayManagerDelegate;


#import "CACSimpleContentViewManager.h"

@interface CACDictationRecognizerModeOverlayManager : CACSimpleContentViewManager

@property (weak, nonatomic) NSObject<CACDictationRecognizerModeOverlayManagerDelegate> *delegate; // ivar: _delegate


-(BOOL)isOverlay;
-(void)showOverlayForDictiationRecognizerMode;


@end


#endif