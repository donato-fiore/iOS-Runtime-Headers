// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPCPLAYERSESSIONRESPONSE_H
#define MPCPLAYERSESSIONRESPONSE_H

@class MPResponse, MPSectionedCollection;
@protocol MPCPlayerSessionResponseBuilder;


#import "MPCMediaRemoteController.h"

@interface MPCPlayerSessionResponse : MPResponse

@property (readonly, nonatomic) NSObject<MPCPlayerSessionResponseBuilder> *builder;
@property (readonly, nonatomic) MPCMediaRemoteController *controller; // ivar: _controller
@property (readonly, nonatomic) MPSectionedCollection *items; // ivar: _items


-(id)initWithRequest:(id)arg0 middleware:(id)arg1 ;


@end


#endif