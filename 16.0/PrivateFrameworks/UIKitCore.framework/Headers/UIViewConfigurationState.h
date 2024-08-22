// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIVIEWCONFIGURATIONSTATE_H
#define UIVIEWCONFIGURATIONSTATE_H

@class NSMutableDictionary, NSString;
@protocol _UIViewConfigurationStateReadonly, UIConfigurationState;

#import <Foundation/Foundation.h>

#import "UITraitCollection.h"

@interface UIViewConfigurationState : NSObject <_UIViewConfigurationStateReadonly, UIConfigurationState>

 {
    NSUInteger _mutations;
    NSMutableDictionary *_customStates;
    ? _stateFlags;
}


@property (nonatomic, setter=_setContextMenuGroupLocation:) NSInteger _contextMenuGroupLocation;
@property (readonly, nonatomic) NSUInteger _mutations;
@property (readonly, nonatomic) NSUInteger _viewConfigurationState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (nonatomic, getter=isFocused) BOOL focused;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic, getter=isPinned) BOOL pinned;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (readonly) Class superclass;
@property (retain, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_customStatesForSwiftBridging;
-(id)_initWithState:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)customStateForKey:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTraitCollection:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)_appendPropertiesForDescription:(id)arg0 ;
-(void)_configureWithViewConfigurationState:(NSUInteger)arg0 ;
-(void)_setSwiftBridgingCustomState:(id)arg0 forKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setCustomState:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif