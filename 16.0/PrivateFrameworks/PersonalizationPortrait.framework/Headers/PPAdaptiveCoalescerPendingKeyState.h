// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPADAPTIVECOALESCERPENDINGKEYSTATE_H
#define PPADAPTIVECOALESCERPENDINGKEYSTATE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface PPAdaptiveCoalescerPendingKeyState : NSObject {
    id *_key;
    NSMutableArray *_handlers;
    NSMutableArray *_dates;
}




-(BOOL)shouldGarbageCollectForNowDate:(id)arg0 ;
-(CGFloat)currentDelayForNowDate:(id)arg0 ;
-(CGFloat)currentQPSForNowDate:(id)arg0 ;
-(id)init;
-(id)initWithKey:(id)arg0 ;
-(void)addDate:(id)arg0 ;


@end


#endif