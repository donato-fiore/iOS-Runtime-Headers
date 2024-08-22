// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISEVENTGRAPH_H
#define ISEVENTGRAPH_H

@class NSSet, NSDate;

#import <Foundation/Foundation.h>

#import "ISComponentGroup.h"

@interface ISEventGraph : NSObject {
    ? eventsInternal;
    ? $__lazy_storage_$_typeIndex;
    ? $__lazy_storage_$_innerTypeIndex;
    ? $__lazy_storage_$_componentIdentifierIndex;
    ? $__lazy_storage_$_typeAndCIDIndex;
}


@property (nonatomic, readonly) ISComponentGroup *asrBridge;
@property (nonatomic, readonly) NSSet *componentIdentifiersBridge;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) ISComponentGroup *nlxBridge;
@property (nonatomic, readonly) ISComponentGroup *orchBridge;
@property (nonatomic, readonly) CGFloat timestamp; // ivar: timestamp
@property (nonatomic, readonly) ISComponentGroup *ueiBridge;


-(id)getComponentGroupBridgeWithType:(Class)arg0 ;
-(id)getComponentGroupBridgesWithType:(Class)arg0 ;
-(id)init;
-(id)sieventWithInnerType:(Class)arg0 ;
-(id)sievents;
-(id)sieventsWithComponentIdentifier:(id)arg0 ;
-(id)sieventsWithComponentName:(int)arg0 ;
-(id)sieventsWithInnerType:(Class)arg0 ;
-(id)sieventsWithType:(Class)arg0 ;


@end


#endif