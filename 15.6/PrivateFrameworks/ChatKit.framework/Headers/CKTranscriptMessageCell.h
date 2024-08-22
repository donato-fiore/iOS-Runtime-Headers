// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKTRANSCRIPTMESSAGECELL_H
#define CKTRANSCRIPTMESSAGECELL_H

@class UIButton;


#import "CKTranscriptCell.h"

@interface CKTranscriptMessageCell : CKTranscriptCell

@property (nonatomic) BOOL chatEligibleForContactImage; // ivar: _chatEligibleForContactImage
@property (nonatomic) BOOL failed;
@property (retain, nonatomic) UIButton *failureButton; // ivar: _failureButton
@property (readonly, nonatomic) BOOL failureButtonAdjustsContentAlignmentRect;
@property (nonatomic) BOOL isFromMe; // ivar: _isFromMe
@property (nonatomic) BOOL isReply; // ivar: _isReply
@property (nonatomic) BOOL isReplyContextPreview; // ivar: _isReplyContextPreview
@property (nonatomic) BOOL wantsContactImageLayout; // ivar: _wantsContactImageLayout


-(id)contactImageView;
-(id)description;
-(struct CGRect )contactImageViewFrame;
-(struct UIEdgeInsets )safeAreaInsets;
-(void)layoutSubviewsForContents;


@end


#endif