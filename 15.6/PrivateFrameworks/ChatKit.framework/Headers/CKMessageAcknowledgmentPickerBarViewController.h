// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKMESSAGEACKNOWLEDGMENTPICKERBARVIEWCONTROLLER_H
#define CKMESSAGEACKNOWLEDGMENTPICKERBARVIEWCONTROLLER_H

@class UIViewController;
@protocol CKMessageAcknowledgmentPickerBarItemViewDelegate, CKMessageAcknowledgmentPickerBarDelegate;


#import "CKMessagePartChatItem.h"

@interface CKMessageAcknowledgmentPickerBarViewController : UIViewController <CKMessageAcknowledgmentPickerBarItemViewDelegate>



@property (nonatomic) char balloonAnchorVerticalOrientation; // ivar: _balloonAnchorVerticalOrientation
@property (retain, nonatomic) CKMessagePartChatItem *chatItem; // ivar: _chatItem
@property (weak, nonatomic) NSObject<CKMessageAcknowledgmentPickerBarDelegate> *delegate; // ivar: _delegate
@property (nonatomic) char forcedOrientation; // ivar: _forcedOrientation
@property (nonatomic) BOOL useForcedOrientation; // ivar: _useForcedOrientation


-(BOOL)isAnchoredToTop;
-(id)initWithChatItem:(id)arg0 ;
-(id)pickerView;
-(struct CGRect )calculateFrameRelativeToSiblingViewFrame:(struct CGRect )arg0 withinBounds:(struct CGRect )arg1 ;
-(void)adjustTailRelativeSiblingViewFrame:(struct CGRect )arg0 ;
-(void)adjustTailRelativeSiblingViewFrame:(struct CGRect )arg0 pickerFrame:(struct CGRect )arg1 ;
-(void)loadView;
-(void)performCancelAnimation:(id)arg0 ;
-(void)performSendAnimation:(id)arg0 ;
-(void)performShowAnimation:(id)arg0 ;
-(void)pickerBarItemViewSelectionDidChange:(id)arg0 ;


@end


#endif