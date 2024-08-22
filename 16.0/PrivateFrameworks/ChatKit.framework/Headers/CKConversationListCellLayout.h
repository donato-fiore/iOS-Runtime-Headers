// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKCONVERSATIONLISTCELLLAYOUT_H
#define CKCONVERSATIONLISTCELLLAYOUT_H


#import <Foundation/Foundation.h>


@interface CKConversationListCellLayout : NSObject

@property (nonatomic) CGRect avatarFrame; // ivar: _avatarFrame
@property (nonatomic) CGFloat cellHeight; // ivar: _cellHeight
@property (nonatomic) CGRect chevronFrame; // ivar: _chevronFrame
@property (nonatomic) CGFloat contentViewWidth; // ivar: _contentViewWidth
@property (nonatomic) CGRect dateFrame; // ivar: _dateFrame
@property (nonatomic) BOOL invalid; // ivar: _invalid
@property (nonatomic) CGFloat lastUsedDisplayScale; // ivar: _lastUsedDisplayScale
@property (nonatomic) CGRect muteIconFrame; // ivar: _muteIconFrame
@property (nonatomic) CGRect senderFrame; // ivar: _senderFrame
@property (nonatomic) BOOL shouldShowAvatarView; // ivar: _shouldShowAvatarView
@property (nonatomic) BOOL shouldShowChevron; // ivar: _shouldShowChevron
@property (nonatomic) BOOL showingEditControl; // ivar: _showingEditControl
@property (nonatomic) CGRect summaryFrameIfMuted; // ivar: _summaryFrameIfMuted
@property (nonatomic) CGRect summaryFrameIfNotMuted; // ivar: _summaryFrameIfNotMuted
@property (nonatomic) CGFloat summaryLabelCapFrameYOrigin; // ivar: _summaryLabelCapFrameYOrigin
@property (nonatomic) CGFloat tableViewWidth; // ivar: _tableViewWidth
@property (nonatomic) CGFloat trailingLayoutMarginSize; // ivar: _trailingLayoutMarginSize
@property (nonatomic) CGRect unreadFrame; // ivar: _unreadFrame
@property (nonatomic) CGFloat widthForDeterminingAvatarVisibility; // ivar: _widthForDeterminingAvatarVisibility


-(BOOL)isValidForContentViewWidth:(CGFloat)arg0 widthForDeterminingAvatarVisibility:(CGFloat)arg1 showingEditControl:(BOOL)arg2 ;
-(CGFloat)cellHeightForDisplayScale:(CGFloat)arg0 ;
-(id)init;
-(void)markAsValidForContentViewWidth:(CGFloat)arg0 widthForDeterminingAvatarVisibility:(CGFloat)arg1 showingEditControl:(BOOL)arg2 ;


@end


#endif