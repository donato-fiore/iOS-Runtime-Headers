// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFCOLLABORATIONUSERDEFAULTSMANAGER_H
#define SFCOLLABORATIONUSERDEFAULTSMANAGER_H


#import <Foundation/Foundation.h>


@interface SFCollaborationUserDefaultsManager : NSObject



+(id)_createRemoteDataProxyWithErrorHandler:(id)arg0 ;
+(void)requestCollaborativeModeForContentIdentifier:(id)arg0 completionHandler:(id)arg1 ;
+(void)saveCollaborativeMode:(id)arg0 forContentIdentifier:(id)arg1 ;


@end


#endif