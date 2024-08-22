// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMLIGHTPROFILENATURALLIGHTINGACTION_H
#define HMLIGHTPROFILENATURALLIGHTINGACTION_H

@class NSArray, NSString, NSUUID;
@protocol NSSecureCoding, HMObjectMerge, HMFLogging, HMFObject;


#import "HMAction.h"
#import "HMLightProfile.h"

@interface HMLightProfileNaturalLightingAction : HMAction <NSSecureCoding, HMObjectMerge, HMFLogging, HMFObject>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) HMLightProfile *lightProfile; // ivar: _lightProfile
@property (readonly) NSUUID *lightProfileUUID; // ivar: _lightProfileUUID
@property (getter=isNaturalLightingEnabled) BOOL naturalLightingEnabled; // ivar: _naturalLightingEnabled
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;


+(BOOL)supportsSecureCoding;
+(id)_actionWithInfo:(id)arg0 home:(id)arg1 ;
+(id)logCategory;
+(id)new;
-(BOOL)_handleUpdates:(id)arg0 ;
-(BOOL)_mergeWithNewObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValid;
-(NSUInteger)type;
-(id)_serializeForAdd;
-(id)encodeAsProtoBuf;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLightProfile:(id)arg0 naturalLightingEnabled:(BOOL)arg1 ;
-(id)initWithPBNaturalLightingAction:(id)arg0 home:(id)arg1 ;
-(id)initWithUUID:(id)arg0 ;
-(id)initWithUUID:(id)arg0 lightProfileUUID:(id)arg1 naturalLightingEnabled:(BOOL)arg2 ;
-(id)logIdentifier;
-(void)__configureWithContext:(id)arg0 actionSet:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateNaturalLightingEnabled:(BOOL)arg0 completionHandler:(id)arg1 ;


@end


#endif