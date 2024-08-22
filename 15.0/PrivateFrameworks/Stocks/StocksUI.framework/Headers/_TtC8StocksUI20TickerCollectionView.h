// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8STOCKSUI20TICKERCOLLECTIONVIEW_H
#define _TTC8STOCKSUI20TICKERCOLLECTIONVIEW_H

@class UICollectionView;



@interface _TtC8StocksUI20TickerCollectionView : UICollectionView {
    ? autoScrolling;
    ? delta;
    ? minimumScrollDelta;
    ? displayLink;
    ? tickerCollectionModel;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 collectionViewLayout:(id)arg1 ;
-(void)autoScrollWithDisplayWithDisplayLink:(id)arg0 ;
-(void)handleAccessibilitySettingsChangedWithNotification:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif