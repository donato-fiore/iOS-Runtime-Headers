// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIDDYNAMICIMPRESSIONITEM_H
#define AMSUIDDYNAMICIMPRESSIONITEM_H


#import <Foundation/Foundation.h>

#import "AMSUIDDynamicImpressionMetrics.h"

@interface AMSUIDDynamicImpressionItem : NSObject

@property (nonatomic) CGRect frame; // ivar: frame
@property (nonatomic, retain) AMSUIDDynamicImpressionMetrics *impressionMetrics; // ivar: impressionMetrics


-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 impressionMetrics:(id)arg1 ;


@end


#endif