// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPKTIPCONTENTCOLLECTIONHEADERVIEW_H
#define TPKTIPCONTENTCOLLECTIONHEADERVIEW_H

@class UICollectionReusableView;
@protocol TPKTipContentReusableView;


#import "TPKContentView.h"

@interface TPKTipContentCollectionHeaderView : UICollectionReusableView <TPKTipContentReusableView>



@property (nonatomic, readonly) TPKContentView *tipContentView;
@property (nonatomic, retain) TPKContentView *tipView; // ivar: tipView


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)prepareForReuse;
-(void)setContent:(id)arg0 contentController:(id)arg1 ;


@end


#endif