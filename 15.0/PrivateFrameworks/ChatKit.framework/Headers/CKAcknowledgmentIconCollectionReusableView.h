// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKACKNOWLEDGMENTICONCOLLECTIONREUSABLEVIEW_H
#define CKACKNOWLEDGMENTICONCOLLECTIONREUSABLEVIEW_H

@class UICollectionReusableView, UIImageView;



@interface CKAcknowledgmentIconCollectionReusableView : UICollectionReusableView

@property (retain, nonatomic) UIImageView *glyphImageView; // ivar: _glyphImageView


+(id)reuseIdentifier;
+(id)supplementaryViewKind;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)configureWithAcknowledgmentTally:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif