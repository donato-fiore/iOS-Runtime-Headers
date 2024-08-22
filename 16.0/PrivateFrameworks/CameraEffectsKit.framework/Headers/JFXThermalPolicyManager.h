// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef JFXTHERMALPOLICYMANAGER_H
#define JFXTHERMALPOLICYMANAGER_H

@protocol JFXThermalPolicy;

#import <Foundation/Foundation.h>

#import "JFXThreadSafeArray.h"

@interface JFXThermalPolicyManager : NSObject

@property (readonly, nonatomic) JFXThreadSafeArray *activePolicies; // ivar: _activePolicies
@property (readonly, nonatomic) NSObject<JFXThermalPolicy> *highestPriorityPolicy;


-(id)description;
-(id)init;
-(id)initWithDefaultPolicy:(id)arg0 ;
-(void)setPolicyType:(Class)arg0 active:(BOOL)arg1 ;


@end


#endif