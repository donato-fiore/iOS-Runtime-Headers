// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXDEFAULTWIDGETSUGGESTERSERVER_H
#define ATXDEFAULTWIDGETSUGGESTERSERVER_H

@class NSXPCListener, NSString;
@protocol NSXPCListenerDelegate, ATXDefaultWidgetSuggesterInterface;

#import <Foundation/Foundation.h>


@interface ATXDefaultWidgetSuggesterServer : NSObject <NSXPCListenerDelegate, ATXDefaultWidgetSuggesterInterface>

 {
    NSXPCListener *_listener;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)shouldSuggestTVWithCompletionHandler:(id)arg0 ;
-(void)updateCachedValuesWithActivity:(id)arg0 ;


@end


#endif