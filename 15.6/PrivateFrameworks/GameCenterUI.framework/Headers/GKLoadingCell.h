// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKLOADINGCELL_H
#define GKLOADINGCELL_H

@class UICollectionViewCell, UIActivityIndicatorView, UILabel;



@interface GKLoadingCell : UICollectionViewCell

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (retain, nonatomic) UILabel *loading; // ivar: _loading


-(void)awakeFromNib;


@end


#endif