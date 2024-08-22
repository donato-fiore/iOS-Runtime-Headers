// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRXDISCLAIMERCONTENTVIEW_H
#define PRXDISCLAIMERCONTENTVIEW_H

@class UIView, NSArray;


#import "PRXScrollableContentView.h"
#import "PRXLabel.h"
#import "PRXButton.h"

@interface PRXDisclaimerContentView : PRXScrollableContentView {
    UIView *_disclaimerContainerView;
    NSArray *_contentConstraints;
}


@property (readonly, nonatomic) PRXLabel *disclaimerLabel; // ivar: _disclaimerLabel
@property (retain, nonatomic) PRXButton *moreInfoButton; // ivar: _moreInfoButton


-(id)initWithCardStyle:(NSInteger)arg0 ;
-(void)updateConstraints;


@end


#endif