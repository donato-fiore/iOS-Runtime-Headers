// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCLOUDSYNCSEQUENCESTATE_H
#define HDCLOUDSYNCSEQUENCESTATE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface HDCloudSyncSequenceState : NSObject

@property (readonly, copy, nonatomic) NSArray *recordIDsToDelete; // ivar: _recordIDsToDelete
@property (readonly, copy, nonatomic) NSArray *recordsToSave; // ivar: _recordsToSave
@property (readonly, nonatomic) BOOL shouldClearRebaselineDeadline; // ivar: _shouldClearRebaselineDeadline


-(id)initWithRecordsToSave:(id)arg0 recordIDsToDelete:(id)arg1 shouldClearRebaselineDeadline:(BOOL)arg2 ;


@end


#endif