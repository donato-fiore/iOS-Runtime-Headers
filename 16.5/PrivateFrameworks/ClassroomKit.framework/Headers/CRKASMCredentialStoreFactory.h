// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKASMCREDENTIALSTOREFACTORY_H
#define CRKASMCREDENTIALSTOREFACTORY_H


#import <Foundation/Foundation.h>


@interface CRKASMCredentialStoreFactory : NSObject



+(id)instructorCredentialStore;
+(id)makeCredentialStoreWithRole:(id)arg0 ;
+(id)storageKeyWithRole:(id)arg0 suffix:(id)arg1 ;
+(id)studentCredentialStore;


@end


#endif