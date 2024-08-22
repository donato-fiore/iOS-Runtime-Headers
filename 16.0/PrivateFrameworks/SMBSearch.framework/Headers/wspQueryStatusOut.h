// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WSPQUERYSTATUSOUT_H
#define WSPQUERYSTATUSOUT_H


#import <Foundation/Foundation.h>

#import "wspHeader.h"

@interface wspQueryStatusOut : NSObject

@property unsigned int qStatus; // ivar: _qStatus
@property (retain) wspHeader *whdr; // ivar: _whdr


-(id)init;
-(int)decodeBuffer:(id)arg0 BufferOffset:(unsigned int)arg1 BytesDecoded:(*unsigned int)arg2 ;


@end


#endif