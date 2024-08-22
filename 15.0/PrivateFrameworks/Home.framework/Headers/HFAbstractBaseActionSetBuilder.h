// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFABSTRACTBASEACTIONSETBUILDER_H
#define HFABSTRACTBASEACTIONSETBUILDER_H

@class HMActionSet, NSArray, NSString;
@protocol HFActionSetBuilderProtocol, NSCopying;


#import "HFItemBuilder.h"
#import "HFMutableSetDiff.h"
#import "HFMediaPlaybackActionBuilder.h"

@interface HFAbstractBaseActionSetBuilder : HFItemBuilder <HFActionSetBuilderProtocol, NSCopying>



@property (retain, nonatomic) HFMutableSetDiff *actionBuilders; // ivar: _actionBuilders
@property (retain, nonatomic) HMActionSet *actionSet;
@property (readonly, nonatomic) NSArray *actions; // ivar: _actions
@property (readonly, nonatomic, getter=isAffectedByEndEvents) BOOL affectedByEndEvents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HFMediaPlaybackActionBuilder *mediaAction;
@property (readonly, nonatomic) BOOL requiresDeviceUnlock;
@property (readonly) Class superclass;


+(Class)homeKitRepresentationClass;
-(BOOL)_updateActionBuildersForLightColorAction:(id)arg0 ;
-(id)_removeSuccessfulChanges:(id)arg0 fromSetDiff:(id)arg1 ;
-(id)commitItem;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deleteActionSet;
-(id)existingActionBuilder:(id)arg0 inSet:(id)arg1 ;
-(id)initWithExistingObject:(id)arg0 inHome:(id)arg1 ;
-(id)lazilyUpdateActions;
-(void)addAction:(id)arg0 ;
-(void)removeAction:(id)arg0 ;
-(void)removeAllActions;
-(void)updateAction:(id)arg0 ;


@end


#endif