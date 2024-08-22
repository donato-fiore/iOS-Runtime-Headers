// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WSPGETROWSOUT_H
#define WSPGETROWSOUT_H


#import <Foundation/Foundation.h>

#import "searchResults.h"
#import "wspContext.h"
#import "wspHeader.h"

@interface wspGetRowsOut : NSObject

@property (retain) searchResults *results; // ivar: _results
@property unsigned int rowsReturned; // ivar: _rowsReturned
@property (retain) wspContext *wctx; // ivar: _wctx
@property (retain) wspHeader *whdr; // ivar: _whdr


-(id)initWithCtx:(id)arg0 ;
-(int)decodeBuffer:(id)arg0 BufferOffset:(unsigned int)arg1 BytesWritten:(*unsigned int)arg2 ;


@end


#endif