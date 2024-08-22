// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCSIDENTITYSERVICE_H
#define BCSIDENTITYSERVICE_H

@class NSMutableDictionary, NSString;
@protocol BCSIdentityServiceProtocol, BCSIdentityAccountProtocol, OS_dispatch_queue, BCSIDSServiceFactoryProtocol, BCSIDSQueryControllerProtocol;

#import <Foundation/Foundation.h>


@interface BCSIdentityService : NSObject <BCSIdentityServiceProtocol>

 {
    id<BCSIdentityAccountProtocol> *_businessChatAccount;
    NSObject<OS_dispatch_queue> *_serialDispatchQueue;
    NSMutableDictionary *_idStatusCompletionBlocks;
    id<BCSIDSServiceFactoryProtocol> *_IDSServiceFactory;
    id<BCSIDSQueryControllerProtocol> *_IDSQueryController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)businessChatAccount;
-(void)refreshIDStatusForBizID:(id)arg0 completion:(id)arg1 ;


@end


#endif