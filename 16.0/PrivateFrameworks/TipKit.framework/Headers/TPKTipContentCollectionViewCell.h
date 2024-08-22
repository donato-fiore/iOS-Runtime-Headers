// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPKTIPCONTENTCOLLECTIONVIEWCELL_H
#define TPKTIPCONTENTCOLLECTIONVIEWCELL_H

@class UICollectionViewCell;
@protocol TPKTipContentReusableView;


#import "TPKContentView.h"

@interface TPKTipContentCollectionViewCell : UICollectionViewCell <TPKTipContentReusableView>



@property (nonatomic, readonly) TPKContentView *tipContentView;
@property (nonatomic, retain) TPKContentView *tipView; // ivar: tipView


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)prepareForReuse;
-(void)setContent:(id)arg0 contentController:(id)arg1 ;


@end


#endif