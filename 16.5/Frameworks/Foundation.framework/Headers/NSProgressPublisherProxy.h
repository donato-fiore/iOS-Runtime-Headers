// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSPROGRESSPUBLISHERPROXY_H
#define NSPROGRESSPUBLISHERPROXY_H

@protocol NSProgressPublisher;

#import <Foundation/Foundation.h>

#import "NSFileAccessNode.h"
#import "NSXPCConnection.h"
#import "NSString.h"
#import "NSProgressValues.h"

@interface NSProgressPublisherProxy : NSObject <NSProgressPublisher>

 {
    id<NSProgressPublisher> *_forwarder;
    id *_publisherID;
    NSFileAccessNode *_itemLocation;
    NSXPCConnection *_connection;
}


@property (copy) NSString *category; // ivar: _lowerCaseCategoryName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property NSFileAccessNode *itemLocation;
@property (readonly) Class superclass;
@property (readonly, copy) NSProgressValues *values; // ivar: _values


-(BOOL)isFromConnection:(id)arg0 ;
-(id)descriptionWithIndenting:(id)arg0 ;
-(id)initWithForwarder:(id)arg0 onConnection:(id)arg1 publisherID:(id)arg2 values:(id)arg3 ;
-(id)publisherID;
-(void)appWithBundleID:(id)arg0 didAcknowledgeWithSuccess:(BOOL)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)observeUserInfoValue:(id)arg0 forKey:(id)arg1 ;
-(void)observeValues:(id)arg0 forKeys:(id)arg1 ;
-(void)pause;
-(void)prioritize;
-(void)resume;


@end


#endif