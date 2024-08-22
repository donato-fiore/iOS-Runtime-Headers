// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKCURRENTPLATFORMIPADDRESSPROVIDER_H
#define CRKCURRENTPLATFORMIPADDRESSPROVIDER_H

@class NSString;
@protocol CRKIPAddressProviding, CRKNetworkPathMonitor;

#import <Foundation/Foundation.h>


@interface CRKCurrentPlatformIPAddressProvider : NSObject <CRKIPAddressProviding>



@property (readonly, copy, nonatomic) NSString *IPAddress;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CRKNetworkPathMonitor> *pathMonitor; // ivar: _pathMonitor
@property (readonly) Class superclass;


+(id)makePathMonitorWithPrimitives:(id)arg0 ;
-(id)init;
-(id)initWithNetworkPrimitives:(id)arg0 ;


@end


#endif