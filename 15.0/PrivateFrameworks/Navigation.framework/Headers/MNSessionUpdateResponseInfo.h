// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MNSESSIONUPDATERESPONSEINFO_H
#define MNSESSIONUPDATERESPONSEINFO_H

@class NSError, GEOETATrafficUpdateRequest, GEOETATrafficUpdateResponse;

#import <Foundation/Foundation.h>


@interface MNSessionUpdateResponseInfo : NSObject

@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) GEOETATrafficUpdateRequest *request; // ivar: _request
@property (retain, nonatomic) GEOETATrafficUpdateResponse *response; // ivar: _response
@property (nonatomic) CGFloat responseTime; // ivar: _responseTime




@end


#endif