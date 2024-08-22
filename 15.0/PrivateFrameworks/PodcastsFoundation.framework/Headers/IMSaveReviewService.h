// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMSAVEREVIEWSERVICE_H
#define IMSAVEREVIEWSERVICE_H

@class NSData, NSURL;


#import "IMBaseStoreService.h"

@interface IMSaveReviewService : IMBaseStoreService

@property (retain, nonatomic) NSData *bodyData; // ivar: _bodyData
@property (retain, nonatomic) NSURL *endpointURL; // ivar: _endpointURL


-(id)generatedEndpointURLForBaseURL:(id)arg0 ;
-(id)initWithEndpointURL:(id)arg0 bodyData:(id)arg1 ;
-(id)urlRequest;
-(void)performDataRequestWithCompletion:(id)arg0 ;


@end


#endif