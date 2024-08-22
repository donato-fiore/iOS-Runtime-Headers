// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDOCUMENTPICKERDOCUMENTCOLLECTIONVIEW_H
#define _UIDOCUMENTPICKERDOCUMENTCOLLECTIONVIEW_H

@class UICollectionView;



@interface _UIDocumentPickerDocumentCollectionView : UICollectionView {
    BOOL _avoidNegativeContentOffset;
}


@property (nonatomic) CGFloat contentSizeAdjustment; // ivar: _contentSizeAdjustment


-(struct CGPoint )_updatedContentOffsetForOffset:(struct CGPoint )arg0 avoidNegativeContentOffset:(BOOL)arg1 ;
-(void)_performWhileAvoidingNegativeContentOffset:(id)arg0 ;
-(void)setAdjustedContentSize:(struct CGSize )arg0 withFrameSize:(struct CGSize )arg1 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setContentOffset:(struct CGPoint )arg0 ;
-(void)setContentSize:(struct CGSize )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif