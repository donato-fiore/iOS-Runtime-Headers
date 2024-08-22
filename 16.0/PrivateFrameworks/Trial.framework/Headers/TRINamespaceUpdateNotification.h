// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRINAMESPACEUPDATENOTIFICATION_H
#define TRINAMESPACEUPDATENOTIFICATION_H

@class NSString;
@protocol TRINamespaceUpdateProtocol, TRINotificationToken;

#import <Foundation/Foundation.h>


@interface TRINamespaceUpdateNotification : NSObject <TRINamespaceUpdateProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned int namespaceId;
@property (readonly, nonatomic) NSString *namespaceName; // ivar: _namespaceName
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<TRINotificationToken> *token; // ivar: _token


+(BOOL)notifyUpdateForNamespaceName:(id)arg0 ;
+(id)notificationNameForNamespaceName:(id)arg0 ;
+(id)registerUpdateForNamespaceName:(id)arg0 queue:(id)arg1 usingBlock:(id)arg2 ;
+(void)deregisterUpdateWithToken:(id)arg0 ;
-(id)initWithNamespaceName:(id)arg0 token:(id)arg1 ;


@end


#endif