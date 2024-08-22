// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKTRANSCRIPTMESSAGECONTENTCELL_H
#define CKTRANSCRIPTMESSAGECONTENTCELL_H

@class UILabel, NSAttributedString, UIView;


#import "CKPhoneTranscriptMessageCell.h"

@interface CKTranscriptMessageContentCell : CKPhoneTranscriptMessageCell

@property (nonatomic) NSInteger animationPauseReasons; // ivar: _animationPauseReasons
@property (retain, nonatomic) UILabel *drawerLabel; // ivar: _drawerLabel
@property (readonly) CGRect drawerLabelFrame;
@property (copy, nonatomic) NSAttributedString *drawerText; // ivar: _drawerText
@property (nonatomic) BOOL drawerTextChanged; // ivar: _drawerTextChanged
@property (nonatomic) CGSize drawerTextSize; // ivar: _drawerTextSize
@property (nonatomic) BOOL drawerWasVisible; // ivar: _drawerWasVisible
@property (readonly) UIView *messageDisplayView;
@property (nonatomic) CGSize messageDisplayViewRequestedSize; // ivar: _messageDisplayViewRequestedSize


-(CGFloat)layoutOffset;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )messageDisplayViewFrame:(struct CGRect )arg0 inContainerFrame:(struct CGRect )arg1 ;
-(void)configureForChatItem:(id)arg0 context:(id)arg1 ;
-(void)layoutSubviewsForAlignmentContents;
-(void)layoutSubviewsForDrawer;
-(void)willLayoutDrawerLabelFrame:(struct CGRect *)arg0 ;


@end


#endif