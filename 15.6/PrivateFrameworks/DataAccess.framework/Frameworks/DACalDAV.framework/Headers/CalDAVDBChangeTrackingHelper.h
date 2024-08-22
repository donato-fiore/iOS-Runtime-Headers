// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALDAVDBCHANGETRACKINGHELPER_H
#define CALDAVDBCHANGETRACKINGHELPER_H

@class NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CalDAVDBChangeTrackingHelper : NSObject {
    NSString *_clientIdentifier;
    int _initialSequenceNumber;
    NSMutableDictionary *_savedChanges;
}




-(BOOL)clearUnconsumedAndUnsavedChanges;
-(id)initWithClientIdentifier:(id)arg0 ;
-(void)saveChange:(int)arg0 forEntityType:(int)arg1 ;


@end


#endif