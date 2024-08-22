// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLRONDEMANDPLUGIN_H
#define MLRONDEMANDPLUGIN_H


#import <Foundation/Foundation.h>


@interface MLROnDemandPlugin : NSObject



+(id)_createXPCConnection:(id)arg0 error:(*id)arg1 ;
+(id)_locateWithExtensionID:(id)arg0 ;
+(id)onDemandPluginIDs;
+(id)synchronouslyPerformTask:(id)arg0 forPluginID:(id)arg1 error:(*id)arg2 ;
+(void)_performTask:(id)arg0 forPluginID:(id)arg1 isSynchronous:(BOOL)arg2 completionHandler:(id)arg3 ;
+(void)performTask:(id)arg0 forPluginID:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif