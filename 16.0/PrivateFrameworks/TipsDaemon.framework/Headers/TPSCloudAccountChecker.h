// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSCLOUDACCOUNTCHECKER_H
#define TPSCLOUDACCOUNTCHECKER_H


#import <Foundation/Foundation.h>


@interface TPSCloudAccountChecker : NSObject



+(BOOL)isiCloudAccountEnabled;
+(BOOL)isiCloudDataClassEnabled:(id)arg0 ;
+(id)_primaryCloudAccount;


@end


#endif