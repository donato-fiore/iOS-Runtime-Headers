// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PAACCESSRECORDCOALESCINGINITIALSTATE_H
#define PAACCESSRECORDCOALESCINGINITIALSTATE_H

@class NSString;
@protocol PAAccessRecordCoalescingState;

#import <Foundation/Foundation.h>


@interface PAAccessRecordCoalescingInitialState : NSObject <PAAccessRecordCoalescingState>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)recordsToRepublish;


@end


#endif