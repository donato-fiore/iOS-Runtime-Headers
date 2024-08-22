// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCPOLICYEVALUATION_H
#define MPCPOLICYEVALUATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MPCPolicyEvaluation : NSObject

@property (nonatomic) BOOL canBeOverriden; // ivar: _canBeOverriden
@property (nonatomic, getter=shouldDisableVocalAttenuation) BOOL disableVocalAttenuation; // ivar: _disableVocalAttenuation
@property (copy, nonatomic) NSString *explanation; // ivar: _explanation
@property (nonatomic) NSInteger policyType; // ivar: _policyType


-(BOOL)isEqual:(id)arg0 ;


@end


#endif