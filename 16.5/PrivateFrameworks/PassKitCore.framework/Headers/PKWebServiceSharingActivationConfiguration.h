// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKWEBSERVICESHARINGACTIVATIONCONFIGURATION_H
#define PKWEBSERVICESHARINGACTIVATIONCONFIGURATION_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "PKOSVersionRequirementRange.h"

@interface PKWebServiceSharingActivationConfiguration : NSObject

@property (readonly, nonatomic) NSInteger accessPassType; // ivar: _accessPassType
@property (readonly, nonatomic) NSArray *allowedSharingChannels; // ivar: _allowedSharingChannels
@property (readonly, nonatomic) NSArray *blockedSharingChannels; // ivar: _blockedSharingChannels
@property (readonly, nonatomic) NSString *channelBundleIdentifier; // ivar: _channelBundleIdentifier
@property (readonly, nonatomic) NSInteger channelRiskLevel; // ivar: _channelRiskLevel
@property (readonly, nonatomic) NSInteger codeLength; // ivar: _codeLength
@property (readonly, nonatomic) NSUInteger defaultState; // ivar: _defaultState
@property (readonly, nonatomic) NSString *manufacturerIdentifier; // ivar: _manufacturerIdentifier
@property (readonly, nonatomic) NSInteger trustLevel; // ivar: _trustLevel
@property (readonly, nonatomic) PKOSVersionRequirementRange *versionRange; // ivar: _versionRange


-(id)description;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif