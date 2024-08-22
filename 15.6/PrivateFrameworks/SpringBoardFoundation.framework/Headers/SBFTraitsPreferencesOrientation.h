// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFTRAITSPREFERENCESORIENTATION_H
#define SBFTRAITSPREFERENCESORIENTATION_H

@class NSString;
@protocol NSCopying, NSMutableCopying, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBFTraitsPreferencesOrientation : NSObject <NSCopying, NSMutableCopying, BSDescriptionProviding>



@property (nonatomic) BOOL canDetermineActiveOrientation; // ivar: _canDetermineActiveOrientation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger preferredOrientation; // ivar: _preferredOrientation
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger supportedOrientations; // ivar: _supportedOrientations


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToOrientationPreferences:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithOrientationPreferences:(id)arg0 ;
-(id)initWithSupportedMask:(NSUInteger)arg0 determinesActiveOrientation:(BOOL)arg1 ;
-(id)initWithSupportedMask:(NSUInteger)arg0 preferred:(NSInteger)arg1 determinesActiveOrientation:(BOOL)arg2 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif