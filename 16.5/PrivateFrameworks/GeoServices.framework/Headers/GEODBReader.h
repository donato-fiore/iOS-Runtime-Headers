// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEODBREADER_H
#define GEODBREADER_H

@class NSString, NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface GEODBReader : NSObject {
    BOOL _defunct;
    BOOL _closed;
    int _editionUpdating;
    NSObject<OS_dispatch_queue> *_readQueue;
    NSString *_path;
    NSDictionary *_pragmaOverrides;
    *sqlite3 _db;
    *sqlite3_stmt _tileQuery;
    *sqlite3_stmt _versionQuery;
    *? _expirationRecords;
    NSUInteger _expirationRecordCount;
}


@property BOOL closed;


-(id)_dataForA:(unsigned int)arg0 andB:(unsigned int)arg1 andC:(unsigned int)arg2 andD:(unsigned int)arg3 isCurrent:(*BOOL)arg4 eTag:(*id)arg5 ;
-(id)_dataForKey:(struct _GEOTileKey )arg0 isCurrent:(*BOOL)arg1 eTag:(*id)arg2 ;
-(id)dataForKey:(struct _GEOTileKey *)arg0 isCurrent:(*BOOL)arg1 eTag:(*id)arg2 ;
-(id)initWithPath:(id)arg0 ;
-(id)initWithPath:(id)arg0 pragmaOverrides:(id)arg1 ;
-(void)_closeDB;
-(void)_databaseReset:(id)arg0 ;
-(void)_editionUpdateBegin:(id)arg0 ;
-(void)_editionUpdateEnd:(id)arg0 ;
-(void)_openDB;
-(void)dataForKeys:(id)arg0 callbackQueue:(id)arg1 asyncHandler:(id)arg2 ;
-(void)dealloc;
-(void)setExpirationRecords:(struct ? *)arg0 count:(NSUInteger)arg1 ;


@end


#endif