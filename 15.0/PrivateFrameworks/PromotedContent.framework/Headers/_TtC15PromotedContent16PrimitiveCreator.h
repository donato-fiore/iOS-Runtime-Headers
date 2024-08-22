// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC15PROMOTEDCONTENT16PRIMITIVECREATOR_H
#define _TTC15PROMOTEDCONTENT16PRIMITIVECREATOR_H

@protocol APMetricPrimitiveCreating;

#import <Foundation/Foundation.h>


@interface _TtC15PromotedContent16PrimitiveCreator : NSObject <APMetricPrimitiveCreating>

 {
    ? promotedContentIdentifier;
    ? contextIdentifier;
    ? journeyIdentifier;
    ? placeholder;
    ? receiver;
    ? pendingMetrics;
}




-(id)init;
-(void)recordMetric:(NSInteger)arg0 forRoute:(NSInteger)arg1 properties:(id)arg2 internalProperties:(id)arg3 options:(NSInteger)arg4 ;


@end


#endif