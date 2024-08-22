// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSHEADERVIEWCELL_H
#define PKPASSHEADERVIEWCELL_H

@class UICollectionViewListCell, PKPass;
@protocol PKPassLibraryDataProvider;


#import "PKPassHeaderView.h"

@interface PKPassHeaderViewCell : UICollectionViewListCell {
    PKPassHeaderView *_passHeaderView;
}


@property (retain, nonatomic) PKPass *pass; // ivar: _pass
@property (retain, nonatomic) NSObject<PKPassLibraryDataProvider> *passLibraryOverride; // ivar: _passLibraryOverride


-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 isTemplateLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configurePassHeader;
-(void)layoutSubviews;


@end


#endif