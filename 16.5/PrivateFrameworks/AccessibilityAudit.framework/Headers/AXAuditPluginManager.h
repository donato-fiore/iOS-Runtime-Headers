// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXAUDITPLUGINMANAGER_H
#define AXAUDITPLUGINMANAGER_H


#import <Foundation/Foundation.h>


@interface AXAuditPluginManager : NSObject

@property (nonatomic) BOOL _didLoadBundles; // ivar: __didLoadBundles


+(id)sharedManager;
-(id)platformPlugin;
-(id)pluginForAuditCategory:(id)arg0 ;
-(void)_loadAuditBundle:(id)arg0 ;
-(void)loadAuditBundles;


@end


#endif