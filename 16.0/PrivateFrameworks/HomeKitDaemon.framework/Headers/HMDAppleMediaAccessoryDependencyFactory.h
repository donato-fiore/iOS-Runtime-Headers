// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDAPPLEMEDIAACCESSORYDEPENDENCYFACTORY_H
#define HMDAPPLEMEDIAACCESSORYDEPENDENCYFACTORY_H

@protocol HMDAppleMediaAccessoryDependencyFactory;

#import <Foundation/Foundation.h>


@interface HMDAppleMediaAccessoryDependencyFactory : NSObject <HMDAppleMediaAccessoryDependencyFactory>





-(id)deviceController;
-(id)deviceControllerWithDevice:(id)arg0 ;
-(id)deviceControllerWithDeviceIdentifier:(id)arg0 ;
-(id)deviceWithAddress:(id)arg0 ;


@end


#endif