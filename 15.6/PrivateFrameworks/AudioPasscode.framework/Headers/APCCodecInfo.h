// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APCCODECINFO_H
#define APCCODECINFO_H


#import <Foundation/Foundation.h>


@interface APCCodecInfo : NSObject



+(BOOL)isSupportedCodecCapability:(id)arg0 ;
+(BOOL)isSupportedCodecConfiguration:(id)arg0 ;
+(Class)configurationClassForName:(id)arg0 ;
+(id)supportedConfigurationClasses;
+(id)supportedDecoders;
+(id)supportedEncoders;


@end


#endif