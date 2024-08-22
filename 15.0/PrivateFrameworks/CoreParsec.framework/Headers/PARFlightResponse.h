// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PARFLIGHTRESPONSE_H
#define PARFLIGHTRESPONSE_H

@class NSArray;


#import "PARResponse.h"

@interface PARFlightResponse : PARResponse

@property (retain, nonatomic) NSArray *flightResults; // ivar: _flightResults


+(id)_debugResponseFromReply:(id)arg0 ;
+(id)responseFromReply:(id)arg0 ;
-(id)description;


@end


#endif