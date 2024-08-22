// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WSPQUERYOUT_H
#define WSPQUERYOUT_H


#import <Foundation/Foundation.h>

#import "wspHeader.h"

@interface wspQueryOut : NSObject

@property unsigned int cursor; // ivar: _cursor
@property unsigned int trueSequential; // ivar: _trueSequential
@property (retain) wspHeader *whdr; // ivar: _whdr
@property unsigned int workID; // ivar: _workID


-(id)init;
-(int)decodeBuffer:(id)arg0 BufferOffset:(unsigned int)arg1 BytesDecoded:(*unsigned int)arg2 ;


@end


#endif