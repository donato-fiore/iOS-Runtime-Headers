// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASORIENTATIONDATA_H
#define ICASORIENTATIONDATA_H

@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASDeviceOrientation.h"
#import "ICASInterfaceOrientation.h"

@interface ICASOrientationData : NSObject <AADataEventType>



@property (readonly, nonatomic) ICASDeviceOrientation *deviceOrientation; // ivar: _deviceOrientation
@property (readonly, nonatomic) ICASInterfaceOrientation *interfaceOrientation; // ivar: _interfaceOrientation


+(id)dataName;
-(id)initWithDeviceOrientation:(id)arg0 interfaceOrientation:(id)arg1 ;
-(id)toDict;


@end


#endif