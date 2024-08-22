// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGDPOWERLOG_H
#define SGDPOWERLOG_H


#import <Foundation/Foundation.h>


@interface SGDPowerLog : NSObject



+(void)endDissectionOfMessage:(id)arg0 inContext:(NSUInteger)arg1 ;
+(void)endIngestOfMessages:(NSUInteger)arg0 ;
+(void)logPrewarmWithLastPrewarmTime:(CGFloat)arg0 ;
+(void)pluginEndDeletion:(id)arg0 ;
+(void)pluginEndProcessingSearchableItem:(id)arg0 ;
+(void)pluginEndSetup:(id)arg0 ;
+(void)pluginStartDeletion:(id)arg0 ;
+(void)pluginStartProcessingSearchableItem:(id)arg0 ;
+(void)pluginStartSetup:(id)arg0 ;
+(void)startDissectionOfMessage:(id)arg0 inContext:(NSUInteger)arg1 ;
+(void)startIngestOfMessages:(NSUInteger)arg0 ;


@end


#endif