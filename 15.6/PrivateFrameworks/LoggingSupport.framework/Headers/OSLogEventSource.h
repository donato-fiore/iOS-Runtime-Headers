// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OSLOGEVENTSOURCE_H
#define OSLOGEVENTSOURCE_H

@class NSMutableArray, NSDate, NSUUID;

#import <Foundation/Foundation.h>

#import "_OSLogCollectionReference.h"
#import "_OSLogEventStoreMetadata.h"
#import "_OSLogEventStoreTimeRef.h"

@interface OSLogEventSource : NSObject

@property (retain, nonatomic) NSMutableArray *_fileRefs; // ivar: _fileRefs
@property (readonly, nonatomic) _OSLogCollectionReference *lcr; // ivar: _lcr
@property (readonly, nonatomic) _OSLogEventStoreMetadata *lesm; // ivar: _lesm
@property (readonly, nonatomic) NSDate *newestDate;
@property (readonly, nonatomic) _OSLogEventStoreTimeRef *newestTimeRef;
@property (readonly, nonatomic) NSDate *oldestDate;
@property (readonly, nonatomic) _OSLogEventStoreTimeRef *oldestTimeRef; // ivar: _oldestTimeRef
@property (readonly, nonatomic) *_os_timesync_db_s tsdb; // ivar: _tsdb
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;


-(id)initWithCollection:(id)arg0 metadata:(id)arg1 timesync:(struct _os_timesync_db_s *)arg2 ;
-(void)_enumerateIndexFiles:(id)arg0 ;
-(void)_insertIndexFile:(id)arg0 ;
-(void)dealloc;


@end


#endif