// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSVARTWORKSERVICEOPERATION_H
#define MSVARTWORKSERVICEOPERATION_H

@class NSOperation, NSError, NSString;


#import "MSVArtworkServiceRequest.h"

@interface MSVArtworkServiceOperation : NSOperation {
    NSError *_operationError;
    NSString *_debugMessage;
}


@property (readonly, copy, nonatomic) NSString *debugMessage;
@property (readonly, nonatomic) NSError *operationError;
@property (readonly, nonatomic) MSVArtworkServiceRequest *request; // ivar: _request


-(id)initWithArtworkRequest:(id)arg0 ;


@end


#endif