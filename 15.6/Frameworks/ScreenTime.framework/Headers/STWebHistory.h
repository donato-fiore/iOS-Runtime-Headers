// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STWEBHISTORY_H
#define STWEBHISTORY_H

@class NSString, NSXPCConnection;

#import <Foundation/Foundation.h>


@interface STWebHistory : NSObject

@property (readonly, copy) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


-(id)init;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 error:(*id)arg1 ;
-(void)deleteAllHistory;
-(void)deleteHistoryDuringInterval:(id)arg0 ;
-(void)deleteHistoryForURL:(id)arg0 ;


@end


#endif