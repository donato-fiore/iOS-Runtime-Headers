// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFACTIONBUILDER_H
#define HFACTIONBUILDER_H

@class HMAction, NSString;
@protocol HFComparable;


#import "HFItemBuilder.h"

@interface HFActionBuilder : HFItemBuilder <HFComparable>



@property (readonly, nonatomic) HMAction *action;
@property (readonly, nonatomic, getter=isAffectedByEndEvents) BOOL affectedByEndEvents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL requiresDeviceUnlock;
@property (readonly) Class superclass;


+(Class)homeKitRepresentationClass;
+(id)actionBuilderForAction:(id)arg0 inHome:(id)arg1 ;
-(BOOL)canUpdateWithActionBuilder:(id)arg0 ;
-(BOOL)hasSameTargetAsAction:(id)arg0 ;
-(BOOL)hasSameTargetAsActionBuilder:(id)arg0 ;
-(BOOL)isEquivalentToAction:(id)arg0 ;
-(BOOL)updateWithActionBuilder:(id)arg0 ;
-(id)compareToObject:(id)arg0 ;
-(id)copyForCreatingNewAction;
-(id)createNewAction;
-(id)getOrCreateAction;
-(id)performValidation;


@end


#endif