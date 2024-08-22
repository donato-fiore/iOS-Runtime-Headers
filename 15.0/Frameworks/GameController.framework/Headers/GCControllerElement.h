// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GCCONTROLLERELEMENT_H
#define GCCONTROLLERELEMENT_H

@class NSMutableSet, NSString;

#import <Foundation/Foundation.h>

#import "GCControllerElement.h"
#import "GCController.h"

@interface GCControllerElement : NSObject

@property (retain, nonatomic) NSMutableSet *aliases; // ivar: _aliases
@property (readonly, nonatomic, getter=isAnalog) BOOL analog;
@property (nonatomic, getter=isBoundToSystemGesture) BOOL boundToSystemGesture; // ivar: _boundToSystemGesture
@property (weak, nonatomic) GCControllerElement *collection; // ivar: _collection
@property (weak, nonatomic) GCController *controller; // ivar: _controller
@property (nonatomic) float deadzone; // ivar: _deadzone
@property (retain, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (nonatomic) BOOL mappableToSystemGestures; // ivar: _mappableToSystemGestures
@property float pendingValue; // ivar: _pendingValue
@property (nonatomic) NSInteger preferredSystemGestureState; // ivar: _preferredSystemGestureState
@property (retain, nonatomic) NSString *primaryAlias; // ivar: _primaryAlias
@property (nonatomic) BOOL remappable; // ivar: _remappable
@property (nonatomic) int remappingKey; // ivar: _remappingKey
@property (retain, nonatomic) NSString *sfSymbolsName; // ivar: _sfSymbolsName
@property (retain, nonatomic) NSString *unmappedLocalizedName; // ivar: _unmappedLocalizedName
@property (retain, nonatomic) NSString *unmappedSfSymbolsName; // ivar: _unmappedSfSymbolsName
@property BOOL updatePending; // ivar: _updatePending


-(BOOL)_commitPendingValueOnQueue:(id)arg0 ;
-(BOOL)_setValue:(float)arg0 ;
-(BOOL)_setValue:(float)arg0 queue:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(float)value;
-(id)init;
-(int)getAndResetTimesPressed;


@end


#endif