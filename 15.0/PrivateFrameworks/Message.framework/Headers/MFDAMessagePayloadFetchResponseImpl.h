// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFDAMESSAGEPAYLOADFETCHRESPONSEIMPL_H
#define MFDAMESSAGEPAYLOADFETCHRESPONSEIMPL_H

@class NSData;
@protocol MFDAMessagePayloadFetchResponse;

#import <Foundation/Foundation.h>


@interface MFDAMessagePayloadFetchResponseImpl : NSObject <MFDAMessagePayloadFetchResponse>

 {
    BOOL streaming;
    BOOL streamingDone;
    NSData *data;
}




-(BOOL)streaming;
-(BOOL)streamingDone;
-(id)data;
-(id)initWithData:(id)arg0 streaming:(BOOL)arg1 streamingDone:(BOOL)arg2 ;


@end


#endif