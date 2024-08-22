// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WSPFREECURSOROUT_H
#define WSPFREECURSOROUT_H


#import <Foundation/Foundation.h>

#import "wspHeader.h"

@interface wspFreeCursorOut : NSObject

@property unsigned int cursorsRemaining; // ivar: _cursorsRemaining
@property (retain) wspHeader *whdr; // ivar: _whdr


-(id)init;
-(int)decodeBuffer:(id)arg0 BufferOffset:(unsigned int)arg1 BytesDecoded:(*unsigned int)arg2 ;


@end


#endif