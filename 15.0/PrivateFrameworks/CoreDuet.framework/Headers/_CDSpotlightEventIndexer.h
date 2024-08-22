// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CDSPOTLIGHTEVENTINDEXER_H
#define _CDSPOTLIGHTEVENTINDEXER_H

@class CSSearchableIndex;

#import <Foundation/Foundation.h>

#import "_CDSpotlightEventIndexerDataSource.h"
#import "_CDEventIndexerContext.h"

@interface _CDSpotlightEventIndexer : NSObject {
    CSSearchableIndex *_index;
    _CDSpotlightEventIndexerDataSource *_dataSource;
}


@property (retain, nonatomic) _CDEventIndexerContext *context; // ivar: _context
@property (readonly, nonatomic, getter=isIndexing) BOOL indexing;


-(id)initWithDataSource:(id)arg0 ;
-(void)beginIndexingWithBatchSize:(NSUInteger)arg0 completion:(id)arg1 ;


@end


#endif