// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSPROGRESSSUBSCRIBERPROXY_H
#define NSPROGRESSSUBSCRIBERPROXY_H

@protocol NSProgressSubscriber;

#import <Foundation/Foundation.h>

#import "NSString.h"
#import "NSFileAccessNode.h"
#import "NSXPCConnection.h"

@interface NSProgressSubscriberProxy : NSObject <NSProgressSubscriber>

 {
    id<NSProgressSubscriber> *_forwarder;
    id *_subscriberID;
    NSString *_bundleID;
    NSFileAccessNode *_itemLocation;
    NSXPCConnection *_connection;
}


@property (copy) NSString *category; // ivar: _lowerCaseCategoryName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property NSFileAccessNode *itemLocation;
@property (readonly) Class superclass;


-(BOOL)isFromConnection:(id)arg0 ;
-(id)appBundleID;
-(id)descriptionWithIndenting:(id)arg0 ;
-(id)initWithForwarder:(id)arg0 onConnection:(id)arg1 subscriberID:(id)arg2 appBundleID:(id)arg3 ;
-(void)addPublisher:(id)arg0 forID:(id)arg1 withValues:(id)arg2 isOld:(BOOL)arg3 ;
-(void)dealloc;
-(void)observePublisherForID:(id)arg0 values:(id)arg1 forKeys:(id)arg2 ;
-(void)observePublisherUserInfoForID:(id)arg0 value:(id)arg1 forKey:(id)arg2 ;
-(void)removePublisherForID:(id)arg0 ;


@end


#endif