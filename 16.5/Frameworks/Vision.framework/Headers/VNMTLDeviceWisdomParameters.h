// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNMTLDEVICEWISDOMPARAMETERS_H
#define VNMTLDEVICEWISDOMPARAMETERS_H

@class NSString;
@protocol VNMTLDeviceWisdomParametersProviding;

#import <Foundation/Foundation.h>


@interface VNMTLDeviceWisdomParameters : NSObject <VNMTLDeviceWisdomParametersProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_cachedMetalDeviceWisdomParametersAndReturnError:(*id)arg0 ;
-(id)_wisdomResourcesPath;
-(id)wisdomParameterForMTLDevice:(id)arg0 error:(*id)arg1 ;
-(id)wisdomParameterForMTLDeviceWithName:(id)arg0 error:(*id)arg1 ;
-(void)_flushMetalDeviceWisdomParametersCache;


@end


#endif