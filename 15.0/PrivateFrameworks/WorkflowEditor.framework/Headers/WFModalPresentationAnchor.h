// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFMODALPRESENTATIONANCHOR_H
#define WFMODALPRESENTATIONANCHOR_H

@class UIView, UIViewController;

#import <Foundation/Foundation.h>


@interface WFModalPresentationAnchor : NSObject

@property (readonly, nonatomic) CGRect sourceRect; // ivar: _sourceRect
@property (readonly, nonatomic) UIView *sourceView; // ivar: _sourceView
@property (readonly, nonatomic) UIViewController *sourceViewController; // ivar: _sourceViewController


-(id)initWithSourceViewController:(id)arg0 sourceView:(id)arg1 sourceRect:(struct CGRect )arg2 ;


@end


#endif