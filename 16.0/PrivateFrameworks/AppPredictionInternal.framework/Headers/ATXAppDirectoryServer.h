// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXAPPDIRECTORYSERVER_H
#define ATXAPPDIRECTORYSERVER_H

@class NSXPCListener, NSString;
@protocol NSXPCListenerDelegate, ATXAppDirectoryInterface;

#import <Foundation/Foundation.h>


@interface ATXAppDirectoryServer : NSObject <NSXPCListenerDelegate, ATXAppDirectoryInterface>

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
-(void)appLaunchDatesWithReply:(id)arg0 ;
-(void)categoriesWithReply:(id)arg0 ;
-(void)notifyBookmarksDidChange;
-(void)requestNotificationWhenCategoriesAreReady;


@end


#endif