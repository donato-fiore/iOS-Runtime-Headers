// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKARGONPUSHHANDLER_H
#define NTKARGONPUSHHANDLER_H

@class CKDatabase, NSString;
@protocol NTKArgonPushProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NTKArgonPushHandler : NSObject <NTKArgonPushProviding>



@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (readonly, nonatomic) CKDatabase *database; // ivar: _database
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithCloudKitDatabase:(id)arg0 ;
-(void)handleNotificationUserInfo:(id)arg0 completion:(id)arg1 ;
-(void)registerToken:(id)arg0 completion:(id)arg1 ;


@end


#endif