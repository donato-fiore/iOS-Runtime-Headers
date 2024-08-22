// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXSUGGESTEDPAGESSERVER_H
#define ATXSUGGESTEDPAGESSERVER_H

@class NSXPCListener, NSString;
@protocol NSXPCListenerDelegate, ATXSuggestedPagesInterface;

#import <Foundation/Foundation.h>

#import "_ATXInternalUninstallNotification.h"

@interface ATXSuggestedPagesServer : NSObject <NSXPCListenerDelegate, ATXSuggestedPagesInterface>

 {
    NSXPCListener *_listener;
    _ATXInternalUninstallNotification *_uninstallNotification;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(NSInteger)_fetchPageTypeForModeUUID:(id)arg0 ;
-(id)init;
-(void)prewarmCachedSuggestedPages;
-(void)suggestedPagesWithFilter:(id)arg0 layoutOptions:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif