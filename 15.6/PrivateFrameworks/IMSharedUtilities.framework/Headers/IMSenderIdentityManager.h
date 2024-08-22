// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMSENDERIDENTITYMANAGER_H
#define IMSENDERIDENTITYMANAGER_H

@class CNGeminiManager;

#import <Foundation/Foundation.h>


@interface IMSenderIdentityManager : NSObject

@property (retain, nonatomic) CNGeminiManager *geminiManager; // ivar: _geminiManager


+(BOOL)isTUSenderIdentity:(id)arg0 equalToSubscriptionContext:(id)arg1 ;
+(id)sharedInstance;
-(id)bestSenderIdentityForGeminiHandle:(id)arg0 contact:(id)arg1 ;
-(id)bestSenderIdentityForHandleID:(id)arg0 contact:(id)arg1 ;
-(id)bestSenderIdentityForHandleIDs:(id)arg0 ;
-(id)contactPreferredSenderIdentityForHandleID:(id)arg0 contact:(id)arg1 ;
-(id)init;


@end


#endif