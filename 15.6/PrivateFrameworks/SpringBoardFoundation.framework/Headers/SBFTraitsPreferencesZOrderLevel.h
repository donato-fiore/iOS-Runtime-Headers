// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFTRAITSPREFERENCESZORDERLEVEL_H
#define SBFTRAITSPREFERENCESZORDERLEVEL_H

@class NSString;
@protocol NSCopying, NSMutableCopying, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBFTraitsPreferencesZOrderLevel : NSObject <NSCopying, NSMutableCopying, BSDescriptionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat preferredZOrderLevel; // ivar: _preferredZOrderLevel
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToZOrderLevelPreferences:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithPreferredZOrderLevel:(CGFloat)arg0 ;
-(id)initWithZOrderLevelPreferences:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif