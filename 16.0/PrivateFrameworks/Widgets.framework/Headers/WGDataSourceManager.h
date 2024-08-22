// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WGDATASOURCEMANAGER_H
#define WGDATASOURCEMANAGER_H

@class NSMutableDictionary, NSString;
@protocol _WGParentDataSourceManager;

#import <Foundation/Foundation.h>

#import "WGWidgetDataSourceManager.h"

@interface WGDataSourceManager : NSObject <_WGParentDataSourceManager>

 {
    BOOL _didBegin;
    NSMutableDictionary *_identifiersToWidgetChangeHandlers;
    WGWidgetDataSourceManager *_widgetDataSourceManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)__sharedInstance;
+(void)requestSharedDataSourceManager:(id)arg0 ;
-(id)discoverAvailableWidgetsWithError:(*id)arg0 ;
-(void)_begin:(id)arg0 ;
-(void)_start:(id)arg0 ;
-(void)_stop:(id)arg0 ;
// -(void)addWidgetDataSourceChangeHandler:(id)arg0 forIdentifier:(unk)arg1  ;
-(void)childDataSourceManagerDataSourcesDidChange:(id)arg0 ;
-(void)removeChangeHandlersWithIdentifier:(id)arg0 ;


@end


#endif