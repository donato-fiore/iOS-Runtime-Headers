// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSBACKLIGHTSCENEVISUALSTATE_H
#define BLSBACKLIGHTSCENEVISUALSTATE_H

@class NSString;
@protocol BSXPCCoding, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BLSBacklightSceneVisualState : NSObject <BSXPCCoding, NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger activeAppearance; // ivar: _activeAppearance
@property (readonly, nonatomic) NSInteger adjustedLuminance; // ivar: _adjustedLuminance
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDimmed) BOOL dimmed; // ivar: _dimmed
@property (readonly, nonatomic) NSInteger expectedFidelity;
@property (readonly, nonatomic) NSInteger grantedFidelity;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger updateFidelity; // ivar: _updateFidelity


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEssentiallyEqualToVisualState:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithActiveAppearance:(NSInteger)arg0 updateFidelity:(NSInteger)arg1 adjustedLuminance:(NSInteger)arg2 ;
-(id)initWithActiveAppearance:(NSInteger)arg0 updateFidelity:(NSInteger)arg1 adjustedLuminance:(NSInteger)arg2 dimmed:(BOOL)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(id)newVisualStateWithUpdateFidelity:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif