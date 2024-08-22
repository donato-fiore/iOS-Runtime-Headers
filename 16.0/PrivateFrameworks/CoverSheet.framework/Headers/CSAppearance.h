// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSAPPEARANCE_H
#define CSAPPEARANCE_H

@class NSString, NSSet, _UILegibilitySettings;
@protocol BSDescriptionProviding, CSAppearanceProviding, NSCopying;

#import <Foundation/Foundation.h>


@interface CSAppearance : NSObject <BSDescriptionProviding, CSAppearanceProviding, NSCopying>



@property (readonly, copy, nonatomic) NSString *appearanceIdentifier;
@property (copy, nonatomic) NSSet *components; // ivar: _components
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (readonly) Class superclass;
@property (nonatomic, getter=isTransitional) BOOL transitional; // ivar: _transitional


+(id)appearanceForProvider:(id)arg0 ;
+(id)appearanceWithIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAppearance:(id)arg0 ;
-(NSInteger)flagForComponentType:(NSInteger)arg0 ;
-(id)componentForType:(NSInteger)arg0 identifier:(id)arg1 ;
-(id)componentForType:(NSInteger)arg0 property:(NSUInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)addComponent:(id)arg0 ;
-(void)conformsToCSAppearanceProviding;
-(void)removeAllComponentsWithIdentifier:(id)arg0 ;
-(void)removeComponent:(id)arg0 ;
-(void)reset;
-(void)unionAppearance:(id)arg0 ;


@end


#endif