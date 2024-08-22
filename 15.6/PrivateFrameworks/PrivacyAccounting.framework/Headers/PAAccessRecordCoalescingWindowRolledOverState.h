// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PAACCESSRECORDCOALESCINGWINDOWROLLEDOVERSTATE_H
#define PAACCESSRECORDCOALESCINGWINDOWROLLEDOVERSTATE_H

@class NSArray, NSString, NSMutableDictionary;
@protocol PAAccessRecordCoalescingWindowState;

#import <Foundation/Foundation.h>


@interface PAAccessRecordCoalescingWindowRolledOverState : NSObject <PAAccessRecordCoalescingWindowState>

 {
    NSArray *_groupedRecordsToRepublish;
    BOOL _reversed;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger epoch; // ivar: _epoch
@property (readonly, nonatomic) NSMutableDictionary *groupedRecordsByMatcher; // ivar: _groupedRecordsByMatcher
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initByEndingPreviousWindow:(id)arg0 reversed:(BOOL)arg1 withInitialAccessRecord:(id)arg2 forNewEpoch:(NSInteger)arg3 ;
-(id)recordsToRepublish;


@end


#endif