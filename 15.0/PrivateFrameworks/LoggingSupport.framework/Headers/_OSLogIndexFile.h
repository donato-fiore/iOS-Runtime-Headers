// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _OSLOGINDEXFILE_H
#define _OSLOGINDEXFILE_H

@class NSString;
@protocol _OSLogIndexTimeRangable;

#import <Foundation/Foundation.h>

#import "_OSLogChunkFileReference.h"
#import "_OSLogChunkStore.h"

@interface _OSLogIndexFile : NSObject <_OSLogIndexTimeRangable>

 {
    _OSLogChunkFileReference *_cfr;
    _OSLogChunkStore *_cs;
    unsigned char _bootu;
    BOOL _timespanDetermined;
    NSUInteger _cot_header;
    NSUInteger _cot;
    NSUInteger _cet;
}


@property (readonly, nonatomic) char * bootUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger endTime; // ivar: _et
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger oldestTime; // ivar: _ot
@property (readonly, nonatomic) char * path; // ivar: _path
@property (readonly) Class superclass;


-(BOOL)_determineTimespan;
-(BOOL)_loadCatalogMetadataForTimespan;
-(BOOL)_loadHeaderMetadata:(id)arg0 ;
-(id)copyMappedChunkStore:(*id)arg0 ;
-(id)initWithChunkStore:(id)arg0 error:(*id)arg1 ;
-(id)initWithTraceFile:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;


@end


#endif