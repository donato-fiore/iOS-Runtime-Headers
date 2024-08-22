// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKATTACHMENTCELL_H
#define FBKATTACHMENTCELL_H

@class UITableViewCell, UILabel, UIImageView, NSLayoutConstraint, NSString;
@protocol FBKDiffableCell;


#import "FBKAttachment.h"

@interface FBKAttachmentCell : UITableViewCell <FBKDiffableCell>



@property (retain, nonatomic) UILabel *accessoryLabel; // ivar: _accessoryLabel
@property (retain, nonatomic) FBKAttachment *attachment; // ivar: _attachment
@property (weak, nonatomic) UILabel *attachmentDisplayName; // ivar: _attachmentDisplayName
@property (weak, nonatomic) UIImageView *attachmentIcon; // ivar: _attachmentIcon
@property (weak, nonatomic) NSLayoutConstraint *attachmentLabelSpacingToSuperview; // ivar: _attachmentLabelSpacingToSuperview
@property (nonatomic) NSInteger attachmentType; // ivar: _attachmentType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UILabel *doneLabel; // ivar: _doneLabel
@property (nonatomic) NSInteger gatherState; // ivar: _gatherState
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *itemIdentifier; // ivar: itemIdentifier
@property (nonatomic) BOOL showsFileSize; // ivar: _showsFileSize
@property (nonatomic) BOOL showsIcon; // ivar: _showsIcon
@property (readonly) Class superclass;
@property (weak, nonatomic) NSLayoutConstraint *superviewToImageSpacing; // ivar: _superviewToImageSpacing


+(id)reuseIdentifier;
-(void)awakeFromNib;
-(void)setAccessoryText:(id)arg0 ;
-(void)showButtonState;
-(void)showDeferredState;
-(void)showDownloadNotPermittedState;
-(void)showDownloadUnavailableState;
-(void)showFailedToGatherState;
-(void)showGatheredState;
-(void)showGatheringState;
-(void)showNotGatheredState;
-(void)showUnsatisfiedState;
-(void)updateAccessibilityLabel;
-(void)updateCell;
-(void)updateContentInsetWithValue:(CGFloat)arg0 ;
-(void)updateDeferredStateWith:(id)arg0 ;
-(void)updateSuperviewToAttachmentLabelSpacing:(CGFloat)arg0 ;


@end


#endif