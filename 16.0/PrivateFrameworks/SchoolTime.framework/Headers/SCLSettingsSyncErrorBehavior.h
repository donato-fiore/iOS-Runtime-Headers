// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCLSETTINGSSYNCERRORBEHAVIOR_H
#define SCLSETTINGSSYNCERRORBEHAVIOR_H


#import <Foundation/Foundation.h>


@interface SCLSettingsSyncErrorBehavior : NSObject

@property (readonly, nonatomic) NSUInteger recoveryType; // ivar: _recoveryType
@property (readonly, nonatomic) NSInteger retryInterval; // ivar: _retryInterval


-(id)initWithRecoveryType:(NSUInteger)arg0 retryInterval:(NSInteger)arg1 ;


@end


#endif