// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKTRANSITLOADINGTABLEVIEWCELL_H
#define MKTRANSITLOADINGTABLEVIEWCELL_H

@class UIActivityIndicatorView;


#import "MKCustomSeparatorCell.h"
#import "_MKUILabel.h"

@interface MKTransitLoadingTableViewCell : MKCustomSeparatorCell {
    _MKUILabel *_loadingLabel;
    UIActivityIndicatorView *_loadingIndicator;
}




-(id)initWithReuseIdentifier:(id)arg0 ;
-(void)dealloc;
-(void)startAnimating;
-(void)stopAnimating;


@end


#endif