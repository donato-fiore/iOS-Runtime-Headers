// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DTKTRACETAPCONFIG_H
#define DTKTRACETAPCONFIG_H



#import "DTTapConfig.h"

@interface DTKTraceTapConfig : DTTapConfig

@property (nonatomic) NSUInteger bufferSizeOverride;
@property (nonatomic) BOOL bufferSizeOverrideClamping;
@property (nonatomic) BOOL canUseRawKtraceFile;
@property (nonatomic) unsigned int kdebugTriggerIndex; // ivar: _kdebugTriggerIndex
@property (nonatomic) unsigned char recordingPriority;
@property (copy, nonatomic) id *sessionHandler; // ivar: _sessionHandler
@property (copy, nonatomic) id *stackshotHandler; // ivar: _stackshotHandler


+(BOOL)localMachineSupportsPMC;
+(BOOL)localMachineSupportsPMI;
+(void)initialize;
-(NSUInteger)triggerConfigCount;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(int)_addTriggerConfig:(id)arg0 ;
-(int)addTriggerConfig:(id)arg0 ;
-(void)enumerateTriggerConfigs:(id)arg0 ;


@end


#endif