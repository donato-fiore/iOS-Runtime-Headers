// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHFIGDECODER_H
#define PHFIGDECODER_H



#import "PHImageDecoder.h"

@interface PHFigDecoder : PHImageDecoder



+(id)sharedDecoder;
-(id)decodeImageFromData:(id)arg0 orFileURL:(id)arg1 options:(id)arg2 completion:(id)arg3 ;
-(void)cancelInFlightAsyncDecodeForRequestHandle:(id)arg0 ;


@end


#endif