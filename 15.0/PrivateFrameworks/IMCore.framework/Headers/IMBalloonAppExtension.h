// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMBALLOONAPPEXTENSION_H
#define IMBALLOONAPPEXTENSION_H

@class NSExtension, NSNumber, LSPlugInKitProxy, NSUUID;
@protocol PKPlugIn;


#import "IMBalloonPlugin.h"

@interface IMBalloonAppExtension : IMBalloonPlugin

@property (nonatomic) BOOL canSendDataPayloads; // ivar: _canSendDataPayloads
@property (readonly, retain, nonatomic) NSExtension *extension; // ivar: _extension
@property (readonly, nonatomic) BOOL isLaunchProhibited;
@property (readonly, retain, nonatomic) NSNumber *itemID;
@property (readonly, retain, nonatomic) NSObject<PKPlugIn> *plugin;
@property (retain, nonatomic) LSPlugInKitProxy *proxy; // ivar: _proxy
@property NSUUID *requestIdentifier; // ivar: _requestIdentifier
@property (nonatomic) BOOL shouldBalloonHideAppIcon; // ivar: _shouldBalloonHideAppIcon


-(BOOL)isBetaPlugin;
-(id)_initWithPluginBundle:(id)arg0 extension:(id)arg1 pluginKitProxyClass:(Class)arg2 ;
-(id)initWithPluginBundle:(id)arg0 appBundle:(id)arg1 ;
-(id)initWithPluginBundle:(id)arg0 extension:(id)arg1 ;
-(id)initWithPluginBundle:(id)arg0 pluginKitProxy:(id)arg1 extension:(id)arg2 ;
-(id)version;


@end


#endif