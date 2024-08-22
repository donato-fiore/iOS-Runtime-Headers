// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSMETRICSIDENTIFIER_H
#define AMSMETRICSIDENTIFIER_H

@class ACAccount, NSString;

#import <Foundation/Foundation.h>

#import "AMSMetricsIdentifierStore.h"
#import "AMSProcessInfo.h"

@interface AMSMetricsIdentifier : NSObject {
    AMSMetricsIdentifierStore *_store;
}


@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (retain, nonatomic) NSString *domain;
@property (nonatomic) CGFloat duration;


+(id)clientIdKey;
+(void)cleanupIdentifiers;
+(void)removeIdentifiersForAccount:(id)arg0 ;
-(id)generateEventFields;
-(id)generateIdentifier;
-(id)init;


@end


#endif