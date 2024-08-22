// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DNDSSYNCMESSAGEGROUP_H
#define _DNDSSYNCMESSAGEGROUP_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "DNDSMutableModeAssertionStore.h"

@interface _DNDSSyncMessageGroup : NSObject <NSCopying>



@property (readonly, nonatomic) NSUInteger protocolVersion; // ivar: _protocolVersion
@property (readonly, nonatomic) NSUInteger serviceType; // ivar: _serviceType
@property (readonly, copy, nonatomic) DNDSMutableModeAssertionStore *store; // ivar: _store


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithServiceType:(NSUInteger)arg0 protocolVersion:(NSUInteger)arg1 store:(id)arg2 ;


@end


#endif