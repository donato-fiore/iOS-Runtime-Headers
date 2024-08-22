// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DDSTRIALCLIENT_H
#define DDSTRIALCLIENT_H

@class NSString;
@protocol DDSTrialClient, DDSTrialClientDelegate, TRINotificationToken, DDSTRIClient, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DDSTrialClient : NSObject <DDSTrialClient>



@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<DDSTrialClientDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSObject<TRINotificationToken> *notificationToken; // ivar: _notificationToken
@property (readonly) Class superclass;
@property (readonly) NSObject<DDSTRIClient> *triClient; // ivar: _triClient
@property (readonly, copy) NSString *triNamespaceName; // ivar: _triNamespaceName
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)createWithWorkQueue:(id)arg0 query:(id)arg1 ;
-(id)initWithWorkQueue:(id)arg0 triClient:(id)arg1 triNamespaceName:(id)arg2 ;
-(void)dealloc;
-(void)fetchAssetWithCallback:(id)arg0 ;
-(void)start;


@end


#endif