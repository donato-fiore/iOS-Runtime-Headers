// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRINAMESPACEOPTIONALPARAMS_H
#define TRINAMESPACEOPTIONALPARAMS_H

@class NSURL, NSString, NSSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TRIAppContainer.h"

@interface TRINamespaceOptionalParams : NSObject <NSCopying>



@property (copy, nonatomic) TRIAppContainer *appContainer; // ivar: _appContainer
@property (nonatomic) int cloudKitContainerId; // ivar: _cloudKitContainerId
@property (nonatomic) BOOL enableFetchDuringSetupAssistant; // ivar: _enableFetchDuringSetupAssistant
@property (nonatomic) BOOL expensiveNetworkingAllowed; // ivar: _expensiveNetworkingAllowed
@property (copy, nonatomic) NSURL *factorsURL; // ivar: _factorsURL
@property (nonatomic) int purgeabilityLevel; // ivar: _purgeabilityLevel
@property (copy, nonatomic) NSString *resourceAttributionIdentifier; // ivar: _resourceAttributionIdentifier
@property (copy, nonatomic) NSSet *upgradeNCVs; // ivar: _upgradeNCVs


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif