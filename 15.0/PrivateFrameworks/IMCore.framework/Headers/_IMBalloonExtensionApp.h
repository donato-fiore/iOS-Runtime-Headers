// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _IMBALLOONEXTENSIONAPP_H
#define _IMBALLOONEXTENSIONAPP_H

@class NSExtension, LSPlugInKitProxy;


#import "IMBalloonApp.h"

@interface _IMBalloonExtensionApp : IMBalloonApp

@property (retain, nonatomic) NSExtension *extension; // ivar: _extension
@property (retain, nonatomic) LSPlugInKitProxy *proxy; // ivar: _proxy


-(BOOL)isBetaPlugin;
-(BOOL)isEnabled;
-(BOOL)isLaunchProhibited;
-(BOOL)isStickerPackOnly;
-(BOOL)showInBrowser;
-(BOOL)showableInBrowser;
-(id)applicationType;
-(id)initWithPluginBundle:(id)arg0 extension:(id)arg1 ;
-(id)initWithPluginBundle:(id)arg0 extension:(id)arg1 pluginKitProxyClass:(Class)arg2 proxy:(id)arg3 ;
-(id)initWithPluginBundle:(id)arg0 pluginKitProxy:(id)arg1 extension:(id)arg2 ;
-(id)itemID;
-(id)plugin;
-(id)version;
-(void)setIsEnabled:(BOOL)arg0 ;


@end


#endif