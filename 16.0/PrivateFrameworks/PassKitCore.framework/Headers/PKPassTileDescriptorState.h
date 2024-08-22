// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSTILEDESCRIPTORSTATE_H
#define PKPASSTILEDESCRIPTORSTATE_H

@class NSString;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "PKPassTileState.h"

@interface PKPassTileDescriptorState : NSObject <NSCopying, NSMutableCopying>



@property (readonly, nonatomic, getter=isEnabled) NSUInteger enabled; // ivar: _enabled
@property (readonly, nonatomic, getter=isInProgress) BOOL inProgress; // ivar: _inProgress
@property (readonly, copy, nonatomic) NSString *stateIdentifier; // ivar: _stateIdentifier
@property (readonly, nonatomic) PKPassTileState *stateOverride; // ivar: _stateOverride
@property (readonly, nonatomic, getter=isSupported) BOOL supported; // ivar: _supported
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(BOOL)isEqualToUnresolvedState:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initForType:(NSInteger)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif