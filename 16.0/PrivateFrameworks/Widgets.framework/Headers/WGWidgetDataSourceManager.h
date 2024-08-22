// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WGWIDGETDATASOURCEMANAGER_H
#define WGWIDGETDATASOURCEMANAGER_H

@class NSArray, NSString;
@protocol WGWidgetVisibilityDelegate, _WGDataSourceManager, _WGParentDataSourceManager;

#import <Foundation/Foundation.h>

#import "WGWidgetDataSource.h"
#import "WGWidgetVisibilityManager.h"

@interface WGWidgetDataSourceManager : NSObject <WGWidgetVisibilityDelegate, _WGDataSourceManager>

 {
    WGWidgetDataSource *_widgetDataSource;
    BOOL _isPublishing;
    id *_didStartBlock;
}


@property (readonly, nonatomic) NSArray *dataSources;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSObject<_WGParentDataSourceManager> *parentDataSourceManager; // ivar: _parentDataSourceManager
@property (retain, nonatomic, getter=_plugInDiscoveryToken, setter=_setPlugInDiscoveryToken:) id *plugInDiscoveryToken; // ivar: _plugInDiscoveryToken
@property (readonly) Class superclass;
@property (retain, nonatomic, getter=_widgetVisbilityManager) WGWidgetVisibilityManager *widgetVisbilityManager; // ivar: _widgetVisbilityManager


+(id)_widgetExtensionsDiscoveryAttributes;
+(id)discoverAvailableWidgetsWithError:(*id)arg0 ;
-(BOOL)_shouldPublishWidgetExtension:(id)arg0 ;
-(id)init;
-(void)_beginContinuousPlugInDiscovery;
-(void)_endContinuousPlugInDiscovery;
-(void)_revokeExtensionWithIdentifier:(id)arg0 ;
-(void)_start:(id)arg0 ;
-(void)_stop:(id)arg0 ;
-(void)_updateDataSourceWithExtension:(id)arg0 ;
-(void)_updatePublishedWidgetExtensions;
-(void)_updatePublishedWidgetExtensions:(id)arg0 ;
-(void)widgetVisibilityDidChange;


@end


#endif