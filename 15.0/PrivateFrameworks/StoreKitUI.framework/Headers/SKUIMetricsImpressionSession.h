// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIMETRICSIMPRESSIONSESSION_H
#define SKUIMETRICSIMPRESSIONSESSION_H

@class NSMutableOrderedSet, NSMapTable, NSArray, NSString;

#import <Foundation/Foundation.h>


@interface SKUIMetricsImpressionSession : NSObject {
    NSMutableOrderedSet *_impressionableViewElements;
    NSMapTable *_impressionableViewElementsTimerMap;
}


@property (readonly, copy, nonatomic) NSArray *impressionIdentifiers; // ivar: _impressionIdentifiers
@property (readonly, copy, nonatomic) NSArray *impressionableViewElements;
@property (readonly, copy, nonatomic) NSString *impressionsString; // ivar: _impressionsString


-(id)_allViewElementsInTimerMap;
-(id)_getTimerForViewElement:(id)arg0 ;
-(id)init;
-(void)_clearTimerForViewElement:(id)arg0 ;
-(void)_setTimer:(id)arg0 forViewElement:(id)arg1 ;
-(void)addItemIdentifier:(NSInteger)arg0 ;
-(void)addItemViewElement:(id)arg0 ;
-(void)beginActiveImpressionForViewElement:(id)arg0 ;
-(void)endActiveImpressionForViewElement:(id)arg0 ;
-(void)endAllPendingActiveImpression;


@end


#endif