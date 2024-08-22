// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDISCOVERYARTICLELAYOUTCELL_H
#define PKDISCOVERYARTICLELAYOUTCELL_H

@class UICollectionViewCell;


#import "PKDiscoveryShelfView.h"

@interface PKDiscoveryArticleLayoutCell : UICollectionViewCell

@property (retain, nonatomic) PKDiscoveryShelfView *shelfView; // ivar: _shelfView


-(id)preferredLayoutAttributesFittingAttributes:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif