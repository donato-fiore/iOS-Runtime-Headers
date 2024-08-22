// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSXGPTPNETWORKPORTEXPORTED_H
#define TSXGPTPNETWORKPORTEXPORTED_H

@class NSString;
@protocol TSXgPTPNetworkPortClientProtocol;

#import <Foundation/Foundation.h>

#import "TSXgPTPNetworkPort.h"

@interface TSXgPTPNetworkPortExported : NSObject <TSXgPTPNetworkPortClientProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) TSXgPTPNetworkPort *object; // ivar: _object
@property (readonly) Class superclass;


-(void)announceTimeout;
-(void)changedASCapable:(BOOL)arg0 ;
-(void)changedAdministrativeEnable:(BOOL)arg0 ;
-(void)syncTimeoutWithMean:(NSInteger)arg0 median:(NSInteger)arg1 standardDeviation:(NSUInteger)arg2 minimum:(NSInteger)arg3 maximum:(NSInteger)arg4 numberOfSamples:(unsigned int)arg5 ;
-(void)terminatedService;
-(void)timedoutMACLookup;
-(void)updatedPortProperties:(id)arg0 ;


@end


#endif