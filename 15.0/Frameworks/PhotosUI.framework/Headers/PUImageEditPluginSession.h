// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUIMAGEEDITPLUGINSESSION_H
#define PUIMAGEEDITPLUGINSESSION_H



#import "PUEditPluginSession.h"

@interface PUImageEditPluginSession : PUEditPluginSession

@property (nonatomic) BOOL allowLivePhotoExtensions; // ivar: _allowLivePhotoExtensions


-(NSUInteger)pluginManagerMediaType;
-(id)imageDataSource;
-(void)loadItemProviderWithSupportedAdjustmentData:(id)arg0 loadHandler:(id)arg1 ;
-(void)shouldLaunchPlugin:(id)arg0 completion:(id)arg1 ;


@end


#endif