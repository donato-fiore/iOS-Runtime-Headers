// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOZILCHDECODER_H
#define GEOZILCHDECODER_H

@protocol OS_dispatch_queue, GEOMapAccessRestrictions;


#import "GEOMapRequestManager.h"

@interface GEOZilchDecoder : GEOMapRequestManager {
    NSObject<OS_dispatch_queue> *_requestQueue;
    mutex _lock;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *decoderQueue; // ivar: _decoderQueue
@property (weak, nonatomic) NSObject<GEOMapAccessRestrictions> *mapAccessRestrictions; // ivar: _mapAccessRestrictions


+(BOOL)decodingSupported;
// -(id)decodeZilchMessage:(struct shared_ptr<zilch::Message> )arg0 pathHandler:(id)arg1 errorHandler:(unk)arg2  ;
-(id)init;
-(id)requestQueue;
-(void)requestComplete:(id)arg0 ;
-(void)setRequestQueue:(id)arg0 ;
-(void)trackRequest:(id)arg0 ;


@end


#endif