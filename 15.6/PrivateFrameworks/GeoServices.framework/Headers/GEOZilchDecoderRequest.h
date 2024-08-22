// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOZILCHDECODERREQUEST_H
#define GEOZILCHDECODERREQUEST_H

@class NSError;
@protocol OS_dispatch_semaphore;


#import "GEOMapRequest.h"
#import "GEOZilchDecoder.h"

@interface GEOZilchDecoderRequest : GEOMapRequest {
    unique_ptr<geo::ZilchMapModel, std::default_delete<geo::ZilchMapModel>> _mapModel;
    GEOZilchDecoder *_decoder;
    ? _message;
    NSError *_firstTileLoadingError;
    NSObject<OS_dispatch_semaphore> *_finishedSemaphore;
}


@property (copy) id *errorHandler; // ivar: _errorHandler
@property (copy) id *pathHandler; // ivar: _pathHandler


-(?)initWithDecodermessage;
-(void)_finishedDecodingWithPath:(struct Path<std::shared_ptr<geo::MapEdge>> )arg0 ;
-(void)cancel;
// -(void)decodeWithPathHandler:(id)arg0 errorHandler:(unk)arg1  ;


@end


#endif