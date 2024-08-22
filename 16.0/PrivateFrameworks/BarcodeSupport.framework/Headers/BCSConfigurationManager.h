// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCSCONFIGURATIONMANAGER_H
#define BCSCONFIGURATIONMANAGER_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface BCSConfigurationManager : NSObject

@property (retain, nonatomic) NSXPCConnection *serviceConnection; // ivar: _serviceConnection


-(void)processAppClipImageWithURL:(id)arg0 scale:(CGFloat)arg1 completion:(id)arg2 ;
-(void)setUpQRCodeControlCenterModuleWithCompletionHandler:(id)arg0 ;


@end


#endif