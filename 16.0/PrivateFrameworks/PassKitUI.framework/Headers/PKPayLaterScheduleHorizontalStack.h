// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERSCHEDULEHORIZONTALSTACK_H
#define PKPAYLATERSCHEDULEHORIZONTALSTACK_H

@class NSString, NSMutableArray, UILabel;

#import <Foundation/Foundation.h>

#import "PKConnectedCircleView.h"

@interface PKPayLaterScheduleHorizontalStack : NSObject {
    NSString *_leadingText;
    NSString *_trailingText;
    NSUInteger _stackIndex;
    NSMutableArray *_allViews;
}


@property (retain, nonatomic) PKConnectedCircleView *circleView; // ivar: _circleView
@property (retain, nonatomic) UILabel *leadingLabel; // ivar: _leadingLabel
@property (retain, nonatomic) UILabel *trailingLabel; // ivar: _trailingLabel


-(CGFloat)minimumLeadingLabelWidth;
-(id)_greyGradientConnector;
-(id)allViews;
-(id)initWithLeadingText:(id)arg0 trailingText:(id)arg1 stackIndex:(NSUInteger)arg2 ;
-(void)_configureViews;


@end


#endif