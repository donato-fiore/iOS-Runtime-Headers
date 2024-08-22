// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIFILEPROVIDERAPPLICATIONEXTENSIONACTIVITY_H
#define UIFILEPROVIDERAPPLICATIONEXTENSIONACTIVITY_H

@class NSArray, LSPlugInKitProxy;


#import "UIApplicationExtensionActivity.h"

@interface UIFileProviderApplicationExtensionActivity : UIApplicationExtensionActivity

@property (retain, nonatomic) NSArray *groupContainerURLs; // ivar: _groupContainerURLs
@property (retain, nonatomic) LSPlugInKitProxy *pluginProxy; // ivar: _pluginProxy


-(BOOL)_sharesGroupContainerWithURL:(id)arg0 ;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)initWithApplicationExtension:(id)arg0 ;


@end


#endif