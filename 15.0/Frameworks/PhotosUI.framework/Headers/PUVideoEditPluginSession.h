// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUVIDEOEDITPLUGINSESSION_H
#define PUVIDEOEDITPLUGINSESSION_H



#import "PUEditPluginSession.h"

@interface PUVideoEditPluginSession : PUEditPluginSession

@property (nonatomic) BOOL allowLoopingVideoExtensions; // ivar: _allowLoopingVideoExtensions


-(NSUInteger)pluginManagerMediaType;
-(id)videoDataSource;
-(void)loadItemProviderWithSupportedAdjustmentData:(id)arg0 loadHandler:(id)arg1 ;


@end


#endif