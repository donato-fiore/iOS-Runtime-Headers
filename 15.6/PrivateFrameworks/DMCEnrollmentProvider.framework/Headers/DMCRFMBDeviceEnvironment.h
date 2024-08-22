// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMCRFMBDEVICEENVIRONMENT_H
#define DMCRFMBDEVICEENVIRONMENT_H

@class NSString;
@protocol DMCRFDeviceEnvironment;

#import <Foundation/Foundation.h>


@interface DMCRFMBDeviceEnvironment : NSObject <DMCRFDeviceEnvironment>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shouldIncludeApp:(id)arg0 ;
-(id)installedAppBundleIdentifiers;


@end


#endif