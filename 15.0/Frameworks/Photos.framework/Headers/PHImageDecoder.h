// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHIMAGEDECODER_H
#define PHIMAGEDECODER_H


#import <Foundation/Foundation.h>


@interface PHImageDecoder : NSObject



+(id)sharedDecoder;
-(id)decodeImageFromData:(id)arg0 orFileURL:(id)arg1 options:(id)arg2 completion:(id)arg3 ;
-(void)cancelInFlightAsyncDecodeForRequestHandle:(id)arg0 ;


@end


#endif