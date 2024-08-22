// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIFOCUSTREELOCK_H
#define _UIFOCUSTREELOCK_H

@class NSMapTable, NSCountedSet, NSTimer;

#import <Foundation/Foundation.h>


@interface _UIFocusTreeLock : NSObject

@property (readonly, nonatomic) NSMapTable *lockedEnvironmentHistogram; // ivar: _lockedEnvironmentHistogram
@property (readonly, nonatomic) NSCountedSet *lockedEnvironments; // ivar: _lockedEnvironments
@property (readonly, nonatomic) NSTimer *validationTimer; // ivar: _validationTimer


-(BOOL)isEnvironmentLocked:(id)arg0 ;
-(BOOL)unlockEnvironmentTree:(id)arg0 ;
-(id)description;
-(id)init;
-(void)_validateLockedEnvironments;
-(void)lockEnvironmentTree:(id)arg0 ;


@end


#endif