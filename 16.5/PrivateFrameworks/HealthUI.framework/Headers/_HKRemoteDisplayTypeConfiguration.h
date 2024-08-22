// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKREMOTEDISPLAYTYPECONFIGURATION_H
#define _HKREMOTEDISPLAYTYPECONFIGURATION_H


#import <Foundation/Foundation.h>

#import "HKDisplayType.h"

@interface _HKRemoteDisplayTypeConfiguration : NSObject

@property (readonly, nonatomic) NSInteger initialTimeScope; // ivar: _initialTimeScope
@property (readonly, nonatomic) HKDisplayType *remoteDisplayType; // ivar: _remoteDisplayType


-(id)initWithInitialTimeScope:(NSInteger)arg0 remoteDisplayType:(id)arg1 ;


@end


#endif