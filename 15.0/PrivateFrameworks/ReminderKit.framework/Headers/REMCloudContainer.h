// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMCLOUDCONTAINER_H
#define REMCLOUDCONTAINER_H


#import <Foundation/Foundation.h>


@interface REMCloudContainer : NSObject



+(BOOL)isSandboxEnvironment;
+(id)defaultCloudContainer;
+(id)defaultCloudContainerName;
+(id)newCloudContainerForAccountID:(id)arg0 ;


@end


#endif