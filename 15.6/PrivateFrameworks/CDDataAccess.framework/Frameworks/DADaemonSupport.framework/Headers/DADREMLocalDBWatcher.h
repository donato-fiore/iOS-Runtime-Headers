// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DADREMLOCALDBWATCHER_H
#define DADREMLOCALDBWATCHER_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface DADREMLocalDBWatcher : NSObject {
    NSMapTable *_concernedRemindersPartyToBlockMap;
}




+(id)sharedDBWatcher;
-(id)init;
-(void)registerConcernedRemindersParty:(id)arg0 withChangedBlock:(id)arg1 ;
-(void)remindersDatabaseDidChange;
-(void)removeConcernedRemindersParty:(id)arg0 ;


@end


#endif