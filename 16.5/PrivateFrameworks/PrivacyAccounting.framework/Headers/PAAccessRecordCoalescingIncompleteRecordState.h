// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PAACCESSRECORDCOALESCINGINCOMPLETERECORDSTATE_H
#define PAACCESSRECORDCOALESCINGINCOMPLETERECORDSTATE_H

@class NSString;
@protocol PAAccessRecordCoalescingState, PAAccessRecord;

#import <Foundation/Foundation.h>


@interface PAAccessRecordCoalescingIncompleteRecordState : NSObject <PAAccessRecordCoalescingState>

 {
    id<PAAccessRecord> *_recordToRepublish;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<PAAccessRecordCoalescingState> *previousState; // ivar: _previousState
@property (readonly) Class superclass;


-(id)initWithPreviousState:(id)arg0 recordToRepublish:(id)arg1 ;
-(id)recordsToRepublish;


@end


#endif