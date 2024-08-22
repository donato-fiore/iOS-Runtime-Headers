// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUIMESSAGECARDSECTIONVIEW_H
#define SEARCHUIMESSAGECARDSECTIONVIEW_H

@class CKAudioController, CKBalloonView, NUIContainerBoxView, NSString, CKVibrantBalloonContainerView;
@protocol CKBalloonViewDelegate, CKAudioControllerDelegate;


#import "SearchUICardSectionView.h"

@interface SearchUIMessageCardSectionView : SearchUICardSectionView <CKBalloonViewDelegate, CKAudioControllerDelegate>



@property (retain, nonatomic) CKAudioController *audioController; // ivar: _audioController
@property (retain, nonatomic) CKBalloonView *balloonView; // ivar: _balloonView
@property (retain, nonatomic) NUIContainerBoxView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) CKVibrantBalloonContainerView *vibrantBalloon; // ivar: _vibrantBalloon


+(BOOL)supportsRecyclingForCardSection:(id)arg0 ;
-(id)audioBalloonViewWithFileURL:(id)arg0 ;
-(id)setupContentView;
-(id)textBalloonView;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)audioController:(id)arg0 mediaObjectDidFinishPlaying:(id)arg1 ;
-(void)audioController:(id)arg0 mediaObjectProgressDidChange:(id)arg1 currentTime:(CGFloat)arg2 duration:(CGFloat)arg3 ;
-(void)balloonView:(id)arg0 userDidDragOutsideBalloonWithPoint:(struct CGPoint )arg1 ;
-(void)balloonViewDoubleTapped:(id)arg0 ;
-(void)balloonViewLongTouched:(id)arg0 ;
-(void)balloonViewRequestsDeselection:(id)arg0 ;
-(void)balloonViewSelected:(id)arg0 toggleSelection:(BOOL)arg1 ;
-(void)balloonViewSelected:(id)arg0 withModifierFlags:(NSInteger)arg1 selectedText:(id)arg2 ;
-(void)balloonViewShouldCopyToPasteboard:(id)arg0 ;
-(void)balloonViewShowInlineReply:(id)arg0 ;
-(void)balloonViewTapped:(id)arg0 withModifierFlags:(NSInteger)arg1 selectedText:(id)arg2 ;
-(void)balloonViewTextViewDidChangeSelection:(id)arg0 selectedText:(id)arg1 textView:(id)arg2 ;
-(void)didMoveToWindow;
-(void)interactionStartedFromPreviewItemControllerInBalloonView:(id)arg0 ;
-(void)interactionStoppedFromPreviewItemControllerInBalloonView:(id)arg0 ;
-(void)liveBalloonTouched:(id)arg0 ;
-(void)tlk_updateForAppearance:(id)arg0 ;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif