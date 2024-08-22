// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RMBUNDLE_H
#define RMBUNDLE_H


#import <Foundation/Foundation.h>


@interface RMBundle : NSObject



+(NSInteger)managementScope;
+(id)remoteManagementBundle;
+(void)setManagementScope:(NSInteger)arg0 ;


@end


#endif