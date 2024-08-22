// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFACTIONSETBUILDER_H
#define HFACTIONSETBUILDER_H

@class NSString, NSSet, UIColor;
@protocol HFComparable, HFAccessoryLikeObjectContainer;


#import "HFAbstractBaseActionSetBuilder.h"
#import "HFImageIconDescriptor.h"

@interface HFActionSetBuilder : HFAbstractBaseActionSetBuilder <HFComparable, HFAccessoryLikeObjectContainer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *hf_accessoryLikeObjects;
@property (retain, nonatomic) HFImageIconDescriptor *iconDescriptor; // ivar: _iconDescriptor
@property (retain, nonatomic) UIColor *iconTintColor; // ivar: _iconTintColor
@property (nonatomic) BOOL isActionSetDeleted; // ivar: _isActionSetDeleted
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) BOOL showInHomeDashboard; // ivar: _showInHomeDashboard
@property (readonly) Class superclass;
@property (readonly) Class superclass;


-(id)_builderCommitItem;
-(id)_deleteActionSet:(id)arg0 fromHome:(id)arg1 ;
-(id)_lazilyUpdateIcon;
-(id)_lazilyUpdateIncludedContext;
-(id)_lazy_performValidation;
-(id)_legacyCommitItemWithOperationType:(id)arg0 ;
-(id)_updateIconOnBuilder:(id)arg0 ;
-(id)_updateValueForContextType:(NSUInteger)arg0 ;
-(id)commitItem;
-(id)compareToObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createActionSetBuilder;
-(id)deleteActionSet;
-(id)getOrCreateActionSetBuilder;
-(id)initWithExistingObject:(id)arg0 inHome:(id)arg1 ;
-(id)initWithHome:(id)arg0 ;
-(id)performValidation;
-(id)transformedError:(id)arg0 withOperationType:(id)arg1 ;
-(id)updateActionSetBuilder:(id)arg0 ;
-(void)_updateValueForContextType:(NSUInteger)arg0 onActionSetBuilder:(id)arg1 ;
-(void)notifyObserversForCreatedActionSet:(id)arg0 ;
-(void)notifyObserversForRenamedActionSet:(id)arg0 ;
-(void)updateFromActionSetBuilder:(id)arg0 ;


@end


#endif