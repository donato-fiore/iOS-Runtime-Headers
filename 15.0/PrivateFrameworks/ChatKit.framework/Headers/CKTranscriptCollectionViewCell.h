// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKTRANSCRIPTCOLLECTIONVIEWCELL_H
#define CKTRANSCRIPTCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, NSString, UILabel;
@protocol CKTranscriptCellProtocol, CKTranscriptCollectionViewCellProtocol;



@interface CKTranscriptCollectionViewCell : UICollectionViewCell <CKTranscriptCellProtocol, CKTranscriptCollectionViewCellProtocol>



@property (nonatomic) CGFloat associatedItemOffset; // ivar: _associatedItemOffset
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UILabel *debugLabel; // ivar: _debugLabel
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat drawerPercentRevealed; // ivar: _drawerPercentRevealed
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isAnimatingInDarkEffect; // ivar: isAnimatingInDarkEffect
@property (nonatomic) BOOL isInReplyContext; // ivar: _isInReplyContext
@property (nonatomic) char orientation; // ivar: _orientation
@property (readonly) Class superclass;
@property (nonatomic) BOOL wantsDrawerLayout; // ivar: _wantsDrawerLayout


+(id)reuseIdentifier;
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