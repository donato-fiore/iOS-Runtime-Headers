// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FUERRORVIEW_H
#define FUERRORVIEW_H

@class UIView;


#import "FULabel.h"

@interface FUErrorView : UIView

@property (retain) FULabel *errorLabel; // ivar: _errorLabel


-(id)init;
-(void)setStyleProvider:(id)arg0 ;


@end


#endif