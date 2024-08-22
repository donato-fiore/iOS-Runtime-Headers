// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AIMLISEVENTGRAPH_H
#define AIMLISEVENTGRAPH_H

@class NSDate;

#import <Foundation/Foundation.h>

#import "AIMLISComponentGroup.h"

@interface AIMLISEventGraph : NSObject {
    ? eventsInternal;
    ? $__lazy_storage_$_typeIndex;
    ? $__lazy_storage_$_innerTypeIndex;
    ? $__lazy_storage_$_componentIdentifierIndex;
    ? $__lazy_storage_$_typeAndCIDIndex;
}


@property (nonatomic, readonly) AIMLISComponentGroup *asrBridge;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) AIMLISComponentGroup *nlxBridge;
@property (nonatomic, readonly) AIMLISComponentGroup *orchBridge;
@property (nonatomic, readonly) CGFloat timestamp; // ivar: timestamp
@property (nonatomic, readonly) AIMLISComponentGroup *ueiBridge;


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