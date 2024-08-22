// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFNATURALLIGHTINGACTIONBUILDER_H
#define HFNATURALLIGHTINGACTIONBUILDER_H

@class HMLightProfile;


#import "HFActionBuilder.h"

@interface HFNaturalLightingActionBuilder : HFActionBuilder

@property (retain, nonatomic) HMLightProfile *lightProfile; // ivar: _lightProfile
@property (nonatomic) BOOL naturalLightEnabled; // ivar: _naturalLightEnabled


+(Class)homeKitRepresentationClass;
-(BOOL)canUpdateWithActionBuilder:(id)arg0 ;
-(BOOL)hasSameTargetAsAction:(id)arg0 ;
-(BOOL)updateWithActionBuilder:(id)arg0 ;
-(NSUInteger)hash;
-(id)commitItem;
-(id)compareToObject:(id)arg0 ;
-(id)containedAccessoryRepresentables;
-(id)copyForCreatingNewAction;
-(id)createNewAction;
-(id)description;
-(id)initWithExistingObject:(id)arg0 inHome:(id)arg1 ;
-(id)performValidation;


@end


#endif