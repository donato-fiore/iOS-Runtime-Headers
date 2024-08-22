// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIPRINTTABLEVIEWHEADERFOOTERVIEW_H
#define UIPRINTTABLEVIEWHEADERFOOTERVIEW_H

@class NSString;


#import "UITableViewHeaderFooterView.h"
#import "UILabel.h"
#import "UIActivityIndicatorView.h"

@interface UIPrintTableViewHeaderFooterView : UITableViewHeaderFooterView

@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (retain, nonatomic) NSString *messageText;
@property (nonatomic) BOOL spinSpinner;
@property (retain, nonatomic) UIActivityIndicatorView *spinner; // ivar: _spinner
@property (nonatomic) BOOL spinnerHidden; // ivar: _spinnerHidden


-(id)initWithReuseIdentifier:(id)arg0 ;
-(void)prepareForReuse;


@end


#endif