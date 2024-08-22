// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKCOMPONENTDATASOURCEATTACHSTATE_H
#define CKCOMPONENTDATASOURCEATTACHSTATE_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface CKComponentDataSourceAttachState : NSObject {
    CKComponentLayout _layout;
}


@property (readonly, nonatomic) NSSet *mountedComponents; // ivar: _mountedComponents
@property (readonly, nonatomic) int scopeIdentifier; // ivar: _scopeIdentifier


-(*void)layout;
-(id)initWithScopeIdentifier:(int)arg0 mountedComponents:(id)arg1 layout:(*void)arg2 ;


@end


#endif