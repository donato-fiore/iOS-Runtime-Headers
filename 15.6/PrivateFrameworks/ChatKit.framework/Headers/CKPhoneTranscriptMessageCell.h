// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKPHONETRANSCRIPTMESSAGECELL_H
#define CKPHONETRANSCRIPTMESSAGECELL_H

@class UIImageView;


#import "CKTranscriptMessageCell.h"
#import "CKAvatarView.h"

@interface CKPhoneTranscriptMessageCell : CKTranscriptMessageCell

@property (retain, nonatomic) CKAvatarView *avatarView; // ivar: _avatarView
@property (retain, nonatomic) UIImageView *printableAvatarView; // ivar: _printableAvatarView


-(id)contactImageView;
-(void)dealloc;
-(void)layoutSubviewsForContents;
-(void)setShowAvatarView:(BOOL)arg0 withContact:(id)arg1 preferredHandle:(id)arg2 avatarViewDelegate:(id)arg3 ;


@end


#endif