// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUNETSERVICEENDPOINT_H
#define CUNETSERVICEENDPOINT_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>

#import "CUBonjourDevice.h"
#import "CUNANEndpoint.h"

@interface CUNetServiceEndpoint : NSObject

@property (retain, nonatomic) CUBonjourDevice *bonjourDevice; // ivar: _bonjourDevice
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) CUNANEndpoint *nanEndpoint; // ivar: _nanEndpoint
@property (readonly, copy, nonatomic) NSDictionary *serviceInfo; // ivar: _serviceInfo
@property (copy, nonatomic) NSString *serviceType; // ivar: _serviceType


-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(unsigned int)updateWithBonjourDevice:(id)arg0 ;
-(unsigned int)updateWithNANEndpoint:(id)arg0 ;


@end


#endif