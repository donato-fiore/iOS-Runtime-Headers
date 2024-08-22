// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCCHANNELUPSELLCONFIG_H
#define FCCHANNELUPSELLCONFIG_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>

#import "FCEmailSignupConfig.h"
#import "FCHideMyEmailSignupConfig.h"
#import "FCSIWAPurchaseConfig.h"

@interface FCChannelUpsellConfig : NSObject

@property (copy, nonatomic) NSString *channelID; // ivar: _channelID
@property (retain, nonatomic) FCEmailSignupConfig *emailSignupConfiguration; // ivar: _emailSignupConfiguration
@property (nonatomic) NSInteger engagedUserQuiescenceInterval; // ivar: _engagedUserQuiescenceInterval
@property (retain, nonatomic) FCHideMyEmailSignupConfig *hideMyEmailSignupConfiguration; // ivar: _hideMyEmailSignupConfiguration
@property (nonatomic) NSInteger presentationCap; // ivar: _presentationCap
@property (nonatomic) NSInteger presentationCountResetInterval; // ivar: _presentationCountResetInterval
@property (nonatomic) NSInteger quiescenceInterval; // ivar: _quiescenceInterval
@property (retain, nonatomic) FCSIWAPurchaseConfig *siwaPurchaseConfiguration; // ivar: _siwaPurchaseConfiguration
@property (retain, nonatomic) NSDictionary *triggersByMethod; // ivar: _triggersByMethod


-(id)initWithChannelID:(id)arg0 configDictionary:(id)arg1 ;


@end


#endif