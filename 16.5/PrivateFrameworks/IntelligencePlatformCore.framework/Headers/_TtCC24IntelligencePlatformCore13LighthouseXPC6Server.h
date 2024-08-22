// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCC24INTELLIGENCEPLATFORMCORE13LIGHTHOUSEXPC6SERVER_H
#define _TTCC24INTELLIGENCEPLATFORMCORE13LIGHTHOUSEXPC6SERVER_H

@protocol GDLighthouseXPCProtocol;

#import <Foundation/Foundation.h>


@interface _TtCC24IntelligencePlatformCore13LighthouseXPC6Server : NSObject <GDLighthouseXPCProtocol>





-(id)init;
-(void)collectDBStatsWithCompletion:(id)arg0 ;
-(void)collectDBStatusWithCompletion:(id)arg0 ;


@end


#endif