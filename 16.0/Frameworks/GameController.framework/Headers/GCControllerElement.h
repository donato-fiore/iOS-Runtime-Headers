// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCCONTROLLERELEMENT_H
#define GCCONTROLLERELEMENT_H

@class NSMutableSet, NSString;
@protocol GCDevice;

#import <Foundation/Foundation.h>

#import "GCControllerElement.h"

@interface GCControllerElement : NSObject

@property (retain, nonatomic) NSMutableSet *aliases; // ivar: _aliases
@property (readonly, nonatomic, getter=isAnalog) BOOL analog;
@property (nonatomic, getter=isBoundToSystemGesture) BOOL boundToSystemGesture; // ivar: _boundToSystemGesture
@property (weak, nonatomic) GCControllerElement *collection; // ivar: _collection
@property (nonatomic) float deadzone; // ivar: _deadzone
@property (weak, nonatomic) NSObject<GCDevice> *device; // ivar: _device
@property (retain, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (nonatomic) BOOL mappableToSystemGestures; // ivar: _mappableToSystemGestures
@property (retain, nonatomic) NSString *nameLocalizationKey; // ivar: _nameLocalizationKey
@property float pendingValue; // ivar: _pendingValue
@property (nonatomic) NSInteger preferredSystemGestureState; // ivar: _preferredSystemGestureState
@property (retain, nonatomic) NSString *primaryAlias; // ivar: _primaryAlias
@property (nonatomic) BOOL remappable; // ivar: _remappable
@property (nonatomic) int remappingKey; // ivar: _remappingKey
@property (retain, nonatomic) NSString *sfSymbolsName; // ivar: _sfSymbolsName
@property (retain, nonatomic) NSString *unmappedLocalizedName; // ivar: _unmappedLocalizedName
@property (retain, nonatomic) NSString *unmappedNameLocalizationKey; // ivar: _unmappedNameLocalizationKey
@property (retain, nonatomic) NSString *unmappedSfSymbolsName; // ivar: _unmappedSfSymbolsName
@property BOOL updatePending; // ivar: _updatePending


-(BOOL)_commitPendingValueOnQueue:(id)arg0 ;
-(BOOL)_setValue:(float)arg0 ;
-(BOOL)_setValue:(float)arg0 queue:(id)arg1 ;
-(float)value;
-(id)init;
-(int)getAndResetTimesPressed;


@end


#endif