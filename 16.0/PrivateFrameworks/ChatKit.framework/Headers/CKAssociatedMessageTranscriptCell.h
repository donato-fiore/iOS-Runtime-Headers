// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKASSOCIATEDMESSAGETRANSCRIPTCELL_H
#define CKASSOCIATEDMESSAGETRANSCRIPTCELL_H

@class UIView;
@protocol CKAssociatedMessageTranscriptCellDelegate;


#import "CKTranscriptMessageContentCell.h"

@interface CKAssociatedMessageTranscriptCell : CKTranscriptMessageContentCell

@property (retain, nonatomic) UIView *associatedItemView; // ivar: _associatedItemView
@property (nonatomic) CGFloat cumulativeAssociatedOffset; // ivar: _cumulativeAssociatedOffset
@property (weak, nonatomic) NSObject<CKAssociatedMessageTranscriptCellDelegate> *delegate; // ivar: _delegate
@property (nonatomic) IMAssociatedMessageGeometryDescriptor geometryDescriptor; // ivar: _geometryDescriptor
@property (nonatomic) CGFloat parentRotationOffset; // ivar: _parentRotationOffset
@property (nonatomic) CGSize parentSize; // ivar: _parentSize
@property (nonatomic) CGSize size; // ivar: _size


-(BOOL)failureButtonAdjustsContentAlignmentRect;
-(BOOL)hidesCheckmark;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(struct CGRect )associatedViewFrame:(struct CGRect )arg0 inContainerFrame:(struct CGRect )arg1 ;
-(void)addFilter:(id)arg0 ;
-(void)applyLayoutAttributes:(id)arg0 ;
-(void)clearFilters;
-(void)configureForChatItem:(id)arg0 context:(id)arg1 ;
-(void)layoutSubviewsForAlignmentContents;
// -(void)performReload:(id)arg0 completion:(unk)arg1  ;
-(void)prepareForReuse;


@end


#endif