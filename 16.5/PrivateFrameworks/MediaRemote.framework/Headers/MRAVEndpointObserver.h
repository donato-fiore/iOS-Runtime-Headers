// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRAVENDPOINTOBSERVER_H
#define MRAVENDPOINTOBSERVER_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "MRAVRoutingDiscoverySession.h"
#import "MRAVEndpoint.h"

@interface MRAVEndpointObserver : NSObject {
    MRAVRoutingDiscoverySession *_discoverySession;
    NSArray *_endpoints;
    id *_endpointChangedCallback;
    BOOL _didBegin;
}


@property (readonly, nonatomic) MRAVEndpoint *endpoint; // ivar: _endpoint
@property (copy, nonatomic) id *endpointChangedCallback;
@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) NSString *outputDeviceUID; // ivar: _outputDeviceUID


-(id)debugDescription;
-(id)description;
-(id)initWithOutputDeviceUID:(id)arg0 ;
-(id)initWithOutputDeviceUID:(id)arg0 label:(id)arg1 callback:(id)arg2 ;
-(void)_handleOutputContextDidChangeNotification;
-(void)begin;
-(void)dealloc;
-(void)end;


@end


#endif