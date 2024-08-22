// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUIMPRESSIONSCALCULATORCONFIGURATION_H
#define MUIMPRESSIONSCALCULATORCONFIGURATION_H

@class UIView, UIScrollView;

#import <Foundation/Foundation.h>

#import "MUImpressionsLogger.h"

@interface MUImpressionsCalculatorConfiguration : NSObject {
    id *_containerViewProvider;
    UIView *_cachedContainerView;
}


@property (readonly, nonatomic) UIView *hostingContainerView;
@property (readonly, nonatomic) MUImpressionsLogger *logger; // ivar: _logger
@property (readonly, weak, nonatomic) UIScrollView *scrollView; // ivar: _scrollView


-(id)initWithLogger:(id)arg0 contentScrollView:(id)arg1 containerViewProvider:(id)arg2 ;


@end


#endif