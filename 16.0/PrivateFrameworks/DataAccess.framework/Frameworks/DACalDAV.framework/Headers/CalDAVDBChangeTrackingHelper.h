// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALDAVDBCHANGETRACKINGHELPER_H
#define CALDAVDBCHANGETRACKINGHELPER_H

@class NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CalDAVDBChangeTrackingHelper : NSObject {
    ? _database;
    NSString *_clientIdentifier;
    int _initialSequenceNumber;
    NSMutableDictionary *_savedChanges;
}




-(?)initWithDatabaseclientIdentifier;
-(BOOL)clearUnconsumedAndUnsavedChanges;
-(void)dealloc;
-(void)saveChange:(int)arg0 forEntityType:(int)arg1 ;


@end


#endif