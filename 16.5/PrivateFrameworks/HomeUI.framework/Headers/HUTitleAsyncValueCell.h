// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUTITLEASYNCVALUECELL_H
#define HUTITLEASYNCVALUECELL_H

@class UIActivityIndicatorView;


#import "HUTitleValueCell.h"

@interface HUTitleAsyncValueCell : HUTitleValueCell

@property (nonatomic) BOOL showSpinner; // ivar: _showSpinner
@property (retain) UIActivityIndicatorView *spinnerView; // ivar: _spinnerView


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)createSpinner;
-(void)prepareForReuse;


@end


#endif