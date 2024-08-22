// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _OSLOGENUMERATOROVERSIZECHUNK_H
#define _OSLOGENUMERATOROVERSIZECHUNK_H


#import <Foundation/Foundation.h>

#import "_OSLogEnumeratorCatalogSubchunk.h"

@interface _OSLogEnumeratorOversizeChunk : NSObject {
    _OSLogEnumeratorCatalogSubchunk *_subchunk;
    *tracev3_chunk_s _chunk;
}


@property (readonly, nonatomic) NSUInteger timestamp;


-(BOOL)matches:(unsigned int)arg0 procinfo:(struct catalog_procinfo_s *)arg1 ;
-(NSInteger)compare:(id)arg0 ;
-(id)initWithSubchunk:(id)arg0 chunk:(struct tracev3_chunk_s *)arg1 ;
-(void)fillMessage:(struct os_log_message_s *)arg0 ;
-(void)fillProxy:(id)arg0 ;


@end


#endif