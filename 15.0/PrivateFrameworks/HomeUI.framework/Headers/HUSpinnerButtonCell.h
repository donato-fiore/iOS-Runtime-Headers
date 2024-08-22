// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUSPINNERBUTTONCELL_H
#define HUSPINNERBUTTONCELL_H

@class UIActivityIndicatorView;


#import "HUButtonCell.h"

@interface HUSpinnerButtonCell : HUButtonCell

@property (nonatomic) BOOL showSpinner; // ivar: _showSpinner
@property (retain, nonatomic) UIActivityIndicatorView *spinner; // ivar: _spinner
@property (nonatomic) BOOL useFullWidthSeparator; // ivar: _useFullWidthSeparator


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGRect )_separatorFrame;
-(void)createSpinner;
-(void)prepareForReuse;


@end


#endif