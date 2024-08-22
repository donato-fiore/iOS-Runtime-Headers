// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIDYNAMICIMPRESSIONITEM_H
#define AMSUIDYNAMICIMPRESSIONITEM_H


#import <Foundation/Foundation.h>

#import "AMSUIDynamicImpressionMetrics.h"

@interface AMSUIDynamicImpressionItem : NSObject

@property (nonatomic) CGRect frame; // ivar: _frame
@property (retain, nonatomic) AMSUIDynamicImpressionMetrics *impressionMetrics; // ivar: _impressionMetrics


-(id)initWithFrame:(struct CGRect )arg0 impressionMetrics:(id)arg1 ;


@end


#endif