// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOLOCATIONSHIFTERPERSISTENCE_H
#define GEOLOCATIONSHIFTERPERSISTENCE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "GEOSQLiteDB.h"

@interface GEOLocationShifterPersistence : NSObject {
    NSString *_dbPath;
    GEOSQLiteDB *_db;
}




+(id)sharedPersister;
-(BOOL)_setup:(id)arg0 ;
-(id)init;
-(id)initWithDBFilePath:(id)arg0 ;
-(void)findResponseForCoordinate:(struct ? )arg0 reduceRadius:(CGFloat)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)getAllEntries:(id)arg0 queue:(id)arg1 handler:(id)arg2 ;
-(void)pruneEntriesOlderThan:(id)arg0 maximumEntriesToKeep:(int)arg1 ;
-(void)removeAllEntries;
-(void)removeAllEntriesSync;
-(void)storeResponse:(id)arg0 ;
-(void)tearDown;


@end


#endif