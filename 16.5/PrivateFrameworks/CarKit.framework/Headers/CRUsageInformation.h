// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRUSAGEINFORMATION_H
#define CRUSAGEINFORMATION_H


#import <Foundation/Foundation.h>

#import "CRCarKitServiceClient.h"

@interface CRUsageInformation : NSObject

@property (retain, nonatomic) CRCarKitServiceClient *serviceClient; // ivar: _serviceClient
@property (readonly, nonatomic) BOOL shouldSuggestCarPlayTips;


-(id)init;


@end


#endif