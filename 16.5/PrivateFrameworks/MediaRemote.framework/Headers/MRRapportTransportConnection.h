// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRRAPPORTTRANSPORTCONNECTION_H
#define MRRAPPORTTRANSPORTCONNECTION_H

@class RPCompanionLinkClient, NSString;


#import "MRExternalDeviceTransportConnection.h"

@interface MRRapportTransportConnection : MRExternalDeviceTransportConnection

@property (retain, nonatomic) RPCompanionLinkClient *connection; // ivar: _connection
@property (readonly, nonatomic) NSString *eventID; // ivar: _eventID
@property (readonly, nonatomic) NSString *sessionUID; // ivar: _sessionUID


-(BOOL)_targetDeviceMatch:(id)arg0 deviceUID:(id)arg1 ;
-(BOOL)isValid;
-(NSUInteger)sendTransportData:(id)arg0 options:(id)arg1 ;
-(id)initWithCompanionLinkClient:(id)arg0 device:(id)arg1 sessionUID:(id)arg2 ;
-(id)initWithDeviceUID:(id)arg0 sessionUID:(id)arg1 targetDevice:(*id)arg2 error:(*id)arg3 ;
-(id)runLoop;
-(void)_registerCallbacks;
-(void)closeWithError:(id)arg0 ;
-(void)setRunLoop:(id)arg0 ;


@end


#endif