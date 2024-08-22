// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMBALLOONPLUGIN_H
#define IMBALLOONPLUGIN_H

@class NSBundle, NSMutableArray, NSString, NSMutableDictionary;
@protocol PKPlugIn;

#import <Foundation/Foundation.h>

#import "IMBalloonApp.h"

@interface IMBalloonPlugin : NSObject

@property (retain, nonatomic) IMBalloonApp *app; // ivar: _app
@property (readonly, retain, nonatomic) NSBundle *appBundle;
@property (retain, nonatomic) NSMutableArray *balloonControllerPool; // ivar: _balloonControllerPool
@property (readonly, nonatomic, getter=isBetaPlugin) BOOL betaPlugin;
@property (retain, nonatomic) Class browserClass; // ivar: _browserClass
@property (readonly, retain, nonatomic) NSString *browserDisplayName;
@property (nonatomic) NSInteger browserGroup; // ivar: _browserGroup
@property (retain, nonatomic) NSString *browserImageName; // ivar: _browserImageName
@property (retain, nonatomic) NSString *browserImagePath; // ivar: _browserImagePath
@property (readonly, retain, nonatomic) NSString *browserShortDisplayName;
@property (retain, nonatomic) Class bubbleClass; // ivar: _bubbleClass
@property (retain, nonatomic) NSBundle *bundle; // ivar: _bundle
@property (retain, nonatomic) Class customTypingIndicatorLayerClass; // ivar: _customTypingIndicatorLayerClass
@property (retain, nonatomic) Class dataSourceClass; // ivar: _dataSourceClass
@property (retain, nonatomic) Class entryClass; // ivar: _entryClass
@property (readonly, retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isEnabled;
@property (retain, nonatomic) NSMutableDictionary *messageToBalloonControllerMap; // ivar: _messageToBalloonControllerMap
@property (retain, nonatomic) NSMutableDictionary *messageToDatasourceMap; // ivar: _messageToDatasourceMap
@property (retain, nonatomic) NSObject<PKPlugIn> *plugin; // ivar: _plugin
@property (readonly, retain, nonatomic) NSBundle *pluginBundle;
@property (nonatomic) BOOL pluginLoaded; // ivar: _pluginLoaded
@property (readonly, nonatomic) NSUInteger presentationContexts;
@property (readonly, nonatomic) BOOL shouldHideAppSwitcher;
@property (readonly, nonatomic) BOOL showInBrowser;
@property (readonly, nonatomic) BOOL showableInBrowser;
@property (readonly, nonatomic) NSString *version;


-(BOOL)isStickerPackOnly;
-(BOOL)shouldShowForRecipients:(id)arg0 ;
-(BOOL)supportsControllerReuse;
-(id)_getControllerFromReusePoolForChatItem:(id)arg0 contextIdentifier:(id)arg1 ;
-(id)balloonControllerForChatItem:(id)arg0 contextIdentifier:(id)arg1 ;
-(id)balloonControllerKeyForMessageGUID:(id)arg0 contextIdentifier:(id)arg1 ;
-(id)dataSourceForPluginPayload:(id)arg0 ;
-(id)existingBalloonControllerWithMessageGUID:(id)arg0 contextIdentifier:(id)arg1 ;
-(id)existingDataSourceForMessageGUID:(id)arg0 ;
-(id)init;
-(id)initWithBundle:(id)arg0 ;
-(id)initWithBundle:(id)arg0 app:(id)arg1 ;
-(void)dealloc;
-(void)insertDataSource:(id)arg0 forGUID:(id)arg1 ;
-(void)moveController:(id)arg0 toReusePoolFromChatItem:(id)arg1 contextIdentifier:(id)arg2 ;
-(void)removeController:(id)arg0 forChatItem:(id)arg1 contextIdentifier:(id)arg2 ;
-(void)unloadBundle;


@end


#endif