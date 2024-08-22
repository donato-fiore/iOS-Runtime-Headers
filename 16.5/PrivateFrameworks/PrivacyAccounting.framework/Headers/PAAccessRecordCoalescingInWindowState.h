// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PAACCESSRECORDCOALESCINGINWINDOWSTATE_H
#define PAACCESSRECORDCOALESCINGINWINDOWSTATE_H

@class NSString, NSMutableDictionary;
@protocol PAAccessRecordCoalescingWindowState;

#import <Foundation/Foundation.h>


@interface PAAccessRecordCoalescingInWindowState : NSObject <PAAccessRecordCoalescingWindowState>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger epoch; // ivar: _epoch
@property (readonly, nonatomic) NSMutableDictionary *groupedRecordsByMatcher; // ivar: _groupedRecordsByMatcher
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initByContinuingWindow:(id)arg0 withAccessRecord:(id)arg1 ;
-(id)initWithFirstAccessRecord:(id)arg0 forEpoch:(NSInteger)arg1 ;
-(id)recordsToRepublish;


@end


#endif