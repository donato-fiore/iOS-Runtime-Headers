// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKACKNOWLEDGMENTVOTECOUNTCOLLECTIONREUSABLEVIEW_H
#define CKACKNOWLEDGMENTVOTECOUNTCOLLECTIONREUSABLEVIEW_H

@class UICollectionReusableView, UILabel;



@interface CKAcknowledgmentVoteCountCollectionReusableView : UICollectionReusableView

@property (retain, nonatomic) UILabel *countLabel; // ivar: _countLabel


+(id)reuseIdentifier;
+(id)supplementaryViewKind;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)configureWithAcknowledgmentTally:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif