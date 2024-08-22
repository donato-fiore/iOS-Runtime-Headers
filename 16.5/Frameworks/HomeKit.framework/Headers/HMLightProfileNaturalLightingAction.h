// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMLIGHTPROFILENATURALLIGHTINGACTION_H
#define HMLIGHTPROFILENATURALLIGHTINGACTION_H



#import "HMAction.h"
#import "HMLightProfile.h"

@interface HMLightProfileNaturalLightingAction : HMAction {
    os_unfair_lock_s _lock;
}


@property (readonly) HMLightProfile *lightProfile; // ivar: _lightProfile
@property (readonly, getter=isNaturalLightingEnabled) BOOL naturalLightingEnabled; // ivar: _naturalLightingEnabled


+(BOOL)supportsSecureCoding;
+(id)actionFromProtoBuf:(id)arg0 home:(id)arg1 ;
-(BOOL)_handleUpdates:(id)arg0 ;
-(BOOL)_mergeWithNewObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)type;
-(id)_serializeForAdd;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)encodeAsProtoBuf;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 home:(id)arg1 ;
-(id)initWithLightProfile:(id)arg0 naturalLightingEnabled:(BOOL)arg1 ;
-(id)initWithUUID:(id)arg0 ;
-(void)__configureWithContext:(id)arg0 actionSet:(id)arg1 ;
-(void)updateNaturalLightingEnabled:(BOOL)arg0 completionHandler:(id)arg1 ;


@end


#endif