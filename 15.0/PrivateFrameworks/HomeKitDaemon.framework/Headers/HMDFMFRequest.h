// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDFMFREQUEST_H
#define HMDFMFREQUEST_H

@class HMFObject, FMFSession, HMFTimer, NSString;



@interface HMDFMFRequest : HMFObject

@property (readonly, nonatomic) FMFSession *fmfSession; // ivar: _fmfSession
@property (readonly, nonatomic) HMFTimer *fmfSessionResponseTimer; // ivar: _fmfSessionResponseTimer
@property (readonly, nonatomic) NSString *requestID; // ivar: _requestID


-(id)description;
-(id)initWithResponseTimerDelegate:(id)arg0 ;


@end


#endif