// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKTRANSCRIPTCELL_H
#define CKTRANSCRIPTCELL_H

@class NSArray;


#import "CKEditableCollectionViewCell.h"

@interface CKTranscriptCell : CKEditableCollectionViewCell

@property (nonatomic) CGFloat associatedItemOffset; // ivar: _associatedItemOffset
@property (nonatomic) CGFloat drawerPercentRevealed; // ivar: _drawerPercentRevealed
@property (nonatomic) BOOL insertingBeforeReplyPreview; // ivar: _insertingBeforeReplyPreview
@property (nonatomic) BOOL insertingWithReplyPreview; // ivar: _insertingWithReplyPreview
@property (nonatomic) CGFloat insertionBeginTime; // ivar: _insertionBeginTime
@property (nonatomic) CGFloat insertionDuration; // ivar: _insertionDuration
@property (nonatomic) NSInteger insertionType; // ivar: _insertionType
@property (nonatomic) BOOL isInReplyContext; // ivar: _isInReplyContext
@property (retain, nonatomic) NSArray *linkInteractions; // ivar: _linkInteractions
@property (nonatomic) char orientation; // ivar: _orientation
@property (nonatomic) BOOL shouldConfigureForDarkFSM; // ivar: _shouldConfigureForDarkFSM
@property (nonatomic, getter=suppressesAnimationsForLineUpdates) BOOL suppressAnimationsForLineUpdates; // ivar: _suppressAnimationsForLineUpdates
@property (nonatomic) BOOL wantsDrawerLayout; // ivar: _wantsDrawerLayout


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)addFilter:(id)arg0 ;
-(void)clearFilters;
-(void)configureForChatItem:(id)arg0 context:(id)arg1 ;
-(void)layoutSubviews;
-(void)layoutSubviewsForAlignmentContents;
-(void)layoutSubviewsForContents;
-(void)layoutSubviewsForDrawer;
-(void)performHide:(id)arg0 ;
-(void)performInsertion:(id)arg0 ;
// -(void)performReload:(id)arg0 completion:(unk)arg1  ;
-(void)performRemoval:(id)arg0 ;
-(void)performReveal:(id)arg0 ;
-(void)prepareForReuse;


@end


#endif