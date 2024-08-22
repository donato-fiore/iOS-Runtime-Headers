// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UICONTENTUNAVAILABLECONFIGURATIONSTATE_H
#define UICONTENTUNAVAILABLECONFIGURATIONSTATE_H

@class NSMutableDictionary, NSString;
@protocol _UIContentUnavailableConfigurationStateReadonly, UIConfigurationState;

#import <Foundation/Foundation.h>

#import "UITraitCollection.h"

@interface UIContentUnavailableConfigurationState : NSObject <_UIContentUnavailableConfigurationStateReadonly, UIConfigurationState>

 {
    NSUInteger _mutations;
    NSMutableDictionary *_customStates;
    ? _stateFlags;
}


@property (readonly, nonatomic) NSUInteger _mutations;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *searchControllerText; // ivar: _searchControllerText
@property (readonly) Class superclass;
@property (retain, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)customStateForKey:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTraitCollection:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setCustomState:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif