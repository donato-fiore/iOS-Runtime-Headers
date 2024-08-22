// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FADEVICEINFO_H
#define FADEVICEINFO_H

@class NSString;
@protocol FADeviceInfoProtocol;

#import <Foundation/Foundation.h>


@interface FADeviceInfo : NSObject <FADeviceInfoProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)unlockedSinceBoot;


@end


#endif