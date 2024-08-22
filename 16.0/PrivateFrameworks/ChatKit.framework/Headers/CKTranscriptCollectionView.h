// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKTRANSCRIPTCOLLECTIONVIEW_H
#define CKTRANSCRIPTCOLLECTIONVIEW_H



#import "CKEditableCollectionView.h"

@interface CKTranscriptCollectionView : CKEditableCollectionView

@property (nonatomic) BOOL dynamicsDisabled; // ivar: _dynamicsDisabled
@property (nonatomic) BOOL ignoresContentOffsetChanges; // ivar: _ignoresContentOffsetChanges
@property (nonatomic) BOOL ignoresReloadDataRequests; // ivar: _ignoresReloadDataRequests


-(NSUInteger)_edgesPropagatingSafeAreaInsetsToSubviews;
-(id)initWithFrame:(struct CGRect )arg0 collectionViewLayout:(id)arg1 ;
-(void)layoutSubviews;
-(void)reloadData;
-(void)setContentInset:(struct UIEdgeInsets )arg0 ;
-(void)setContentOffset:(struct CGPoint )arg0 ;
-(void)setContentOffset:(struct CGPoint )arg0 animated:(BOOL)arg1 ;
-(void)setContentSize:(struct CGSize )arg0 ;


@end


#endif