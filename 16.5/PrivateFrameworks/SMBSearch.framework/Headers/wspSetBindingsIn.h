// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WSPSETBINDINGSIN_H
#define WSPSETBINDINGSIN_H


#import <Foundation/Foundation.h>

#import "wspContext.h"

@interface wspSetBindingsIn : NSObject {
    ? msghdr;
}


@property (retain) wspContext *wctx; // ivar: _wctx


-(id)initWithCtx:(id)arg0 ;
-(int)encodeBuffer:(id)arg0 BufferOffset:(unsigned int)arg1 BytesWritten:(*unsigned int)arg2 ;


@end


#endif