// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDIAPINFOREQUEST_H
#define ASDIAPINFOREQUEST_H



#import "ASDEphemeralRequest.h"

@interface ASDIAPInfoRequest : ASDEphemeralRequest



+(NSInteger)requestType;
-(id)initWithOptions:(id)arg0 ;
-(void)startWithCompletionBlock:(id)arg0 ;


@end


#endif