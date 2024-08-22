// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNQUICKACTIONSMANAGER_H
#define CNQUICKACTIONSMANAGER_H

@class NSMutableDictionary, NSOrderedSet, NSMutableSet, NSArray, CNContact, NSString, NSDictionary, NSMutableArray;
@protocol CNQuickContactActionDelegate, CNQuickActionsManagerDelegate;

#import <Foundation/Foundation.h>

#import "CNQuickFaceTimeAction.h"
#import "CNQuickActionsUsageManager.h"

@interface CNQuickActionsManager : NSObject <CNQuickContactActionDelegate>

 {
    NSMutableDictionary *_actionsByCategories;
    NSOrderedSet *_actions;
    NSMutableSet *_requests;
}


@property (readonly, nonatomic) NSArray *actions;
@property (nonatomic) BOOL bypassActionValidation; // ivar: _bypassActionValidation
@property (copy, nonatomic) NSArray *categories; // ivar: _categories
@property (readonly, nonatomic) CNContact *contact;
@property (retain, nonatomic) NSArray *contacts; // ivar: _contacts
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNQuickActionsManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger desiredNumberOfActions; // ivar: _desiredNumberOfActions
@property (retain, nonatomic) CNQuickFaceTimeAction *faceTimeAudioAction; // ivar: _faceTimeAudioAction
@property (retain, nonatomic) CNQuickFaceTimeAction *faceTimeVideoAction; // ivar: _faceTimeVideoAction
@property (retain, nonatomic) NSDictionary *groups; // ivar: _groups
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL sortsWithDuet;
@property (retain, nonatomic) NSArray *subManagers; // ivar: _subManagers
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableArray *updateBlocks; // ivar: _updateBlocks
@property (retain, nonatomic) CNQuickActionsUsageManager *usageManager; // ivar: _usageManager
@property (nonatomic) BOOL useDuetIfAvailable; // ivar: _useDuetIfAvailable


+(BOOL)hasActionsForContact:(id)arg0 ;
+(id)actionsManagerForContacts:(id)arg0 ;
+(id)defaultCategories;
+(id)descriptorForRequiredKeys;
-(BOOL)_shouldGroupActionsInCategory:(id)arg0 ;
-(id)_addActionForPropertyItem:(id)arg0 category:(id)arg1 propertyActionClass:(Class)arg2 ;
-(id)_expandedActionsFromOrderedActionsByCategories:(id)arg0 totalNumberOfActions:(NSUInteger)arg1 ;
-(id)_groupedActionsFromOrderedActionsByCategories:(id)arg0 ;
-(id)_hierarchicalActionsForCategory:(id)arg0 fromActions:(id)arg1 askDelegate:(BOOL)arg2 ;
-(id)_hybridActionsFromOrderedActionsByCategories:(id)arg0 totalNumberOfActions:(NSUInteger)arg1 ;
-(id)_ignoredLabels;
-(id)_orderedLabels;
-(id)_propertyItemsForKey:(id)arg0 ;
-(id)initWithContacts:(id)arg0 ;
-(id)quickActions;
-(void)_addAction:(id)arg0 ;
-(void)_createGroupsForPropertyKeys:(id)arg0 ;
-(void)_openURL:(id)arg0 ;
-(void)_updateActionsForPropertyItems:(id)arg0 category:(id)arg1 propertyActionClass:(Class)arg2 ;
-(void)_updateIDSActionsForPropertyItems:(id)arg0 category:(id)arg1 serviceName:(id)arg2 propertyActionClass:(Class)arg3 ;
-(void)_updateMultiContactActions;
-(void)_updateSingleContactActions;
-(void)actionPerformed:(id)arg0 ;
-(void)contactAction:(id)arg0 presentViewController:(id)arg1 ;
-(void)contactActionDidUpdate:(id)arg0 ;
-(void)dealloc;
-(void)refreshActions;
-(void)refreshActionsAndForceSendUpdate:(BOOL)arg0 ;
-(void)stopUpdatingActions;
-(void)updateActionsWithBlock:(id)arg0 ;


@end


#endif