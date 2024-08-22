// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKMUTABLEPASSTILEDESCRIPTORSTATE_H
#define PKMUTABLEPASSTILEDESCRIPTORSTATE_H

@class NSString;


#import "PKPassTileDescriptorState.h"
#import "PKPassTileState.h"

@interface PKMutablePassTileDescriptorState : PKPassTileDescriptorState

@property (nonatomic, getter=isEnabled) NSUInteger enabled;
@property (nonatomic, getter=isInProgress) BOOL inProgress;
@property (copy, nonatomic) NSString *stateIdentifier;
@property (retain, nonatomic) PKPassTileState *stateOverride;
@property (nonatomic, getter=isSupported) BOOL supported;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif