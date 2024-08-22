// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMODELSHIMRESPONSE_H
#define MPMODELSHIMRESPONSE_H



#import "MPResponse.h"
#import "MPModelResponse.h"

@interface MPModelShimResponse : MPResponse

@property (retain, nonatomic) MPModelResponse *modelResponse; // ivar: _modelResponse


+(id)builderProtocol;
-(id)initWithRequest:(id)arg0 middleware:(id)arg1 ;


@end


#endif