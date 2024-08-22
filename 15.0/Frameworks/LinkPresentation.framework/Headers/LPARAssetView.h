// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LPARASSETVIEW_H
#define LPARASSETVIEW_H

@class UIView, NSURL;


#import "LPComponentView.h"
#import "LPARAsset.h"

@interface LPARAssetView : LPComponentView {
    LPARAsset *_arAsset;
    UIView *_arAssetView;
    UIEdgeInsets _contentInset;
}


@property (readonly, retain, nonatomic) NSURL *URL; // ivar: _URL


-(id)initWithHost:(id)arg0 ;
-(id)initWithHost:(id)arg0 ARAsset:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;


@end


#endif