// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBDODGINGITEMPREFERENCE_H
#define SBDODGINGITEMPREFERENCE_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface SBDodgingItemPreference : NSObject

@property (readonly, nonatomic) BOOL canBePositionedOutsideContainerBounds; // ivar: _canBePositionedOutsideContainerBounds
@property (readonly, nonatomic) NSUInteger dodgingAxisMask; // ivar: _dodgingAxisMask
@property (readonly, nonatomic) NSSet *excludedDodgingIdentifiers; // ivar: _excludedDodgingIdentifiers
@property (readonly, nonatomic) CGSize minimumSize; // ivar: _minimumSize
@property (readonly, nonatomic) CGPoint preferredCenter; // ivar: _preferredCenter
@property (readonly, nonatomic) CGSize preferredSize; // ivar: _preferredSize
@property (readonly, nonatomic, getter=isUpdatingInteractively) BOOL updateInteractively; // ivar: _updateInteractively


-(id)initWithPreferredSize:(struct CGSize )arg0 preferredCenter:(struct CGPoint )arg1 updateInteractively:(BOOL)arg2 dodgingAxisMask:(NSUInteger)arg3 minimumSize:(struct CGSize )arg4 canBePositionedOutsideContainerBounds:(BOOL)arg5 excludedDodgingIdentifiers:(id)arg6 ;


@end


#endif