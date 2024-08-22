// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRSERVERCONNECTION_H
#define TRSERVERCONNECTION_H

@class SFService;


#import "TRConnection.h"

@interface TRServerConnection : TRConnection

@property (weak, nonatomic) SFService *service; // ivar: _service


-(id)initWithService:(id)arg0 ;
-(void)invalidate;
-(void)sendEvent:(id)arg0 ;
-(void)sendRequest:(id)arg0 ;
-(void)sendResponse:(id)arg0 ;


@end


#endif