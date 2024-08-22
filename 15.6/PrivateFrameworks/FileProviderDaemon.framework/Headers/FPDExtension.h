// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPDEXTENSION_H
#define FPDEXTENSION_H

@class NSString, NSExtension, NSUUID;
@protocol FPDPushMessageDelegate, OS_dispatch_queue;


#import "FPDProvider.h"

@interface FPDExtension : FPDProvider <FPDPushMessageDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSExtension *extension; // ivar: _extension
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedSessionQueue; // ivar: _sharedSessionQueue
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uuid;


+(id)instanceWithExtension:(id)arg0 queue:(id)arg1 server:(id)arg2 ;
-(BOOL)isAppExtensionReachable;
-(BOOL)isEqual:(id)arg0 ;
-(id)asAppExtensionBackedProvider;
-(id)customPushTopics;
-(id)initWithExtension:(id)arg0 queue:(id)arg1 server:(id)arg2 ;
-(void)_test_callFileProviderManagerAPIs:(id)arg0 ;
-(void)didReceiveMessage:(id)arg0 ;
-(void)reindexAllSearchableItemsForRequest:(id)arg0 acknowledgementHandler:(id)arg1 ;
-(void)removeTrashedItemsOlderThanDate:(id)arg0 request:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif