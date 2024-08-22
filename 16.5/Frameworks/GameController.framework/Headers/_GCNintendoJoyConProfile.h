// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GCNINTENDOJOYCONPROFILE_H
#define _GCNINTENDOJOYCONPROFILE_H

@class NSString;
@protocol _GCControllerProfile;

#import <Foundation/Foundation.h>


@interface _GCNintendoJoyConProfile : NSObject <_GCControllerProfile>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSInteger)physicalDeviceGetIndicatedPlayerIndex:(id)arg0 ;
+(id)deviceManager;
+(void)physicalDevice:(id)arg0 getBatteryWithReply:(id)arg1 ;
+(void)physicalDevice:(id)arg0 setIndicatedPlayerIndex:(NSInteger)arg1 ;


@end


#endif