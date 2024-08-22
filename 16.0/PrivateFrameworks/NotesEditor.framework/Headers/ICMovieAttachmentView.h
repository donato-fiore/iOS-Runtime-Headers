// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICMOVIEATTACHMENTVIEW_H
#define ICMOVIEATTACHMENTVIEW_H

@class UIImage, CALayer;


#import "ICImageAttachmentView.h"

@interface ICMovieAttachmentView : ICImageAttachmentView

@property (nonatomic) BOOL icaxIsShowingPlayer; // ivar: _icaxIsShowingPlayer
@property (nonatomic) CGRect playButtonFrame; // ivar: _playButtonFrame
@property (retain, nonatomic) UIImage *playButtonImage; // ivar: playButtonImage
@property (retain, nonatomic) CALayer *playButtonLayer; // ivar: playButtonLayer


-(BOOL)accessibilityIgnoresInvertColors;
-(BOOL)shouldPlayFullscreenOnly;
-(id)accessibilityLabel;
-(id)accessibilityUserInputLabels;
-(id)icaxHintString;
-(void)didChangeAttachment;
-(void)didChangeMedia;
-(void)didTapAttachment:(id)arg0 ;
-(void)sharedInit:(BOOL)arg0 ;
-(void)showLoadingText:(BOOL)arg0 ;
-(void)updateImageSize;
-(void)willDeleteAttachment;


@end


#endif