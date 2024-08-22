// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _OSLOGENUMERATORCATALOGSUBCHUNK_H
#define _OSLOGENUMERATORCATALOGSUBCHUNK_H

@class NSMutableDictionary, NSString;
@protocol _OSLogIndexTimeRangable;

#import <Foundation/Foundation.h>

#import "_OSLogEnumeratorCatalog.h"

@interface _OSLogEnumeratorCatalogSubchunk : NSObject <_OSLogIndexTimeRangable>

 {
    NSMutableDictionary *_decompressedChunks;
    ? _subchunk;
    _NSRange _range;
}


@property (readonly, nonatomic) _OSLogEnumeratorCatalog *catalog; // ivar: _catalog
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger endTime; // ivar: _et
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger oldestTime; // ivar: _ot
@property (readonly) Class superclass;


-(?)initWithCatalog:(?)arg0 subchunk:(?)arg1 range:(?)arg2 oldestTimeendTime;
-(?)initWithCatalog:(?)arg0 subchunkrange;
-(NSInteger)endTimeCompare:(id)arg0 ;
-(NSInteger)oldestTimeCompare:(id)arg0 ;
-(id)_decompressedBufferForChunk:(struct tracev3_chunk_s *)arg0 subchunk:(struct catalog_subchunk_s *)arg1 ;
-(void)enumerateChunksUsingBlock:(id)arg0 ;


@end


#endif