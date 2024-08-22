// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ESDMETAFILEBLIPCONTEXT_H
#define ESDMETAFILEBLIPCONTEXT_H



#import "ESDBlipContext.h"

@interface ESDMetafileBlipContext : ESDBlipContext {
    unsigned int mCb;
}


@property unsigned int defaultHeaderSize; // ivar: defaultHeaderSize


-(BOOL)loadDelayedNode:(id)arg0 ;
-(id)initWithOffset:(unsigned int)arg0 byteCount:(unsigned int)arg1 uncompressed:(unsigned int)arg2 stream:(struct SsrwOOStream *)arg3 streamID:(unsigned int)arg4 ;


@end


#endif