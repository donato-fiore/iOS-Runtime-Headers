// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKCOLLECTIONBATCHCELL_H
#define MKCOLLECTIONBATCHCELL_H

@class UICollectionViewCell, UIActivityIndicatorView;



@interface MKCollectionBatchCell : UICollectionViewCell {
    UIActivityIndicatorView *_loadingView;
}




+(id)reuseIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)finishedLoadingBatch;
-(void)setupConstraitns;
-(void)setupSubviews;
-(void)startedLoadingBatch;


@end


#endif