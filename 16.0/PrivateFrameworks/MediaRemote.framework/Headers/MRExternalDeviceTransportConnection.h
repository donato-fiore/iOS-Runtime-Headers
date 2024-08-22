// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MREXTERNALDEVICETRANSPORTCONNECTION_H
#define MREXTERNALDEVICETRANSPORTCONNECTION_H

@class NSString, NSError;
@protocol MRExternalDeviceTransportConnectionDelegate;

#import <Foundation/Foundation.h>


@interface MRExternalDeviceTransportConnection : NSObject

@property (weak, nonatomic) NSObject<MRExternalDeviceTransportConnectionDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSString *destinationGroupUID; // ivar: _destinationGroupUID
@property (retain, nonatomic) NSString *destinationOutputDeviceUID; // ivar: _destinationOutputDeviceUID
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) BOOL isValid;
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) unsigned int options; // ivar: _options


-(NSUInteger)sendTransportData:(id)arg0 options:(id)arg1 ;
-(id)exportEndpoint:(id)arg0 ;
-(id)exportEndpoints:(id)arg0 ;
-(id)exportOutputDevice:(id)arg0 endpoint:(id)arg1 ;
-(id)exportOutputDevices:(id)arg0 endpoint:(id)arg1 ;
-(void)_notifyDelegateDidCloseWithError:(id)arg0 ;
-(void)_notifyDelegateDidReceiveData:(id)arg0 ;
-(void)_notifyDelegateHasSpaceAvailable;
-(void)close;
-(void)closeWithError:(id)arg0 ;


@end


#endif