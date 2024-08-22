// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDSLIFETIMEMONITORRESULT_H
#define DNDSLIFETIMEMONITORRESULT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface DNDSLifetimeMonitorResult : NSObject

@property (readonly, copy, nonatomic) NSArray *activeUUIDs; // ivar: _activeUUIDs
@property (readonly, copy, nonatomic) NSArray *expiredUUIDs; // ivar: _expiredUUIDs


-(id)initWithActiveUUIDs:(id)arg0 expiredUUIDs:(id)arg1 ;


@end


#endif