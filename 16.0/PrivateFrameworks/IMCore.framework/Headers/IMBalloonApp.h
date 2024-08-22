// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMBALLOONAPP_H
#define IMBALLOONAPP_H

@class NSBundle, NSString, NSNumber;
@protocol PKPlugIn;

#import <Foundation/Foundation.h>


@interface IMBalloonApp : NSObject

@property (retain, nonatomic) NSBundle *appBundle; // ivar: _appBundle
@property (retain, nonatomic) Class browserClass; // ivar: _browserClass
@property (retain, nonatomic) NSString *browserDisplayName; // ivar: _browserDisplayName
@property (retain, nonatomic) NSString *browserShortDisplayName; // ivar: _browserShortDisplayName
@property (retain, nonatomic) Class bubbleClass; // ivar: _bubbleClass
@property (nonatomic) BOOL canSendDataPayloads; // ivar: _canSendDataPayloads
@property (retain, nonatomic) Class customTypingIndicatorLayerClass; // ivar: _customTypingIndicatorLayerClass
@property (retain, nonatomic) Class dataSourceClass; // ivar: _dataSourceClass
@property (retain, nonatomic) Class entryClass; // ivar: _entryClass
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isBetaPlugin; // ivar: _isBetaPlugin
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) BOOL isEnabledUnremovableApp;
@property (nonatomic) BOOL isLaunchProhibited; // ivar: _isLaunchProhibited
@property (readonly, nonatomic) BOOL isStickerPackOnly; // ivar: _isStickerPackOnly
@property (retain, nonatomic) NSNumber *itemID; // ivar: _itemID
@property (retain, nonatomic) NSObject<PKPlugIn> *plugin; // ivar: _plugin
@property (retain, nonatomic) NSBundle *pluginBundle; // ivar: _pluginBundle
@property (nonatomic) BOOL pluginLoaded; // ivar: _pluginLoaded
@property (nonatomic) NSUInteger presentationContexts; // ivar: _presentationContexts
@property (nonatomic) BOOL shouldBalloonHideAppIcon; // ivar: _shouldBalloonHideAppIcon
@property (nonatomic) BOOL shouldHideAppSwitcher; // ivar: _shouldHideAppSwitcher
@property (nonatomic) BOOL showInBrowser; // ivar: _showInBrowser
@property (readonly, nonatomic) BOOL showableInBrowser;
@property (readonly, nonatomic) NSString *version; // ivar: _version


+(NSUInteger)presentationContextsForInfoPlistArray:(id)arg0 isStickerPackOnly:(BOOL)arg1 ;
+(id)_unremovableDisabledApps;
+(id)appWithPluginBundle:(id)arg0 ;
+(id)appWithPluginBundle:(id)arg0 appBundle:(id)arg1 ;
+(id)appWithPluginBundle:(id)arg0 extension:(id)arg1 ;
+(id)appWithPluginBundle:(id)arg0 pluginKitProxy:(id)arg1 extension:(id)arg2 ;
+(void)_setUnremovableDisabledApps:(id)arg0 ;
-(id)initWithPluginBundle:(id)arg0 appBundle:(id)arg1 ;
-(void)_loadBundle;


@end


#endif