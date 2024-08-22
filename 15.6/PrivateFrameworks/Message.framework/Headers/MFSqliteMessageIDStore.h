// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFSQLITEMESSAGEIDSTORE_H
#define MFSQLITEMESSAGEIDSTORE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "MFMailMessageLibrary.h"

@interface MFSqliteMessageIDStore : NSObject {
    NSString *_url;
    NSInteger _mailboxRowid;
    MFMailMessageLibrary *_library;
}




-(NSUInteger)flagsForUID:(id)arg0 ;
-(id)initWithLibrary:(id)arg0 URLString:(id)arg1 ;
-(id)knownMessageIDsFromSet:(id)arg0 ;
-(id)messageIDsAddedBeforeDate:(CGFloat)arg0 ;
-(unsigned int)numberOfMessageIDs;
-(void)_loadMailboxRowidIfNecessary:(id)arg0 ;
-(void)deleteAllUIDs;
-(void)deleteUIDsNotInArray:(id)arg0 ;


@end


#endif