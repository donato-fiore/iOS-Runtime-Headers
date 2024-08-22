// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASPROXIMITYSESSIONSHARINGTRANSPORT_H
#define SASPROXIMITYSESSIONSHARINGTRANSPORT_H

@class CUMessageSession;


#import "SASProximitySessionTransport.h"

@interface SASProximitySessionSharingTransport : SASProximitySessionTransport

@property (retain) CUMessageSession *actionMessageSession; // ivar: _actionMessageSession
@property (retain) CUMessageSession *messageSession; // ivar: _messageSession


-(id)initWithMessageSession:(id)arg0 ;
-(void)activate;
-(void)invalidate;
-(void)sendData:(id)arg0 response:(id)arg1 ;


@end


#endif