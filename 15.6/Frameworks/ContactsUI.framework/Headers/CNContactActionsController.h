// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCONTACTACTIONSCONTROLLER_H
#define CNCONTACTACTIONSCONTROLLER_H

@class NSArray, CNContact, NSString, NSDictionary, UIViewController;
@protocol CNAvatarCardActionListController, CNUINavigationListViewControllerDelegate, CNUIUserActionListConsumer, CNUIUserActionListDataSource, CNContactActionsControllerDelegate, CNUINavigationListStyle;

#import <Foundation/Foundation.h>


@interface CNContactActionsController : NSObject <CNAvatarCardActionListController, CNUINavigationListViewControllerDelegate, CNUIUserActionListConsumer>



@property (readonly, copy, nonatomic) NSArray *actionTypes; // ivar: _actionTypes
@property (retain, nonatomic) NSObject<CNUIUserActionListDataSource> *actionsDataSource; // ivar: _actionsDataSource
@property (nonatomic) NSInteger actionsOrder; // ivar: _actionsOrder
@property (nonatomic) BOOL actionsReversed;
@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNContactActionsControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL displayMenuIconAtTopLevel; // ivar: _displayMenuIconAtTopLevel
@property (nonatomic) BOOL generateFaceTimeListItemsOnly; // ivar: _generateFaceTimeListItemsOnly
@property (nonatomic) BOOL generateFavoritesListItemsOnly; // ivar: _generateFavoritesListItemsOnly
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *modelCancelables; // ivar: _modelCancelables
@property (copy, nonatomic) NSDictionary *modelsByActionTypes; // ivar: _modelsByActionTypes
@property (weak, nonatomic) NSObject<CNUINavigationListStyle> *navigationListStyle; // ivar: _navigationListStyle
@property (nonatomic) BOOL shouldUseOutlinedActionGlyphStyle; // ivar: _shouldUseOutlinedActionGlyphStyle
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIViewController *viewController; // ivar: _viewController


+(id)descriptorForRequiredKeys;
+(id)supportedActionTypes;
-(id)actionForItem:(id)arg0 withImage:(id)arg1 ;
-(id)displayedController;
-(id)imageForActionType:(id)arg0 ;
-(id)initWithContact:(id)arg0 actionTypes:(id)arg1 ;
-(id)initWithContact:(id)arg0 dataSource:(id)arg1 actionTypes:(id)arg2 ;
-(id)modelForActionType:(id)arg0 ;
-(id)navigationListItemForUserActionType:(id)arg0 ;
-(void)cancelModels;
-(void)dealloc;
-(void)generateMenuForItem:(id)arg0 image:(id)arg1 withCurrentList:(id)arg2 ;
-(void)navigationListController:(id)arg0 didSelectItem:(id)arg1 ;
-(void)prepareNavigationListItems;
-(void)retrieveModels;
-(void)styleUpdated;


@end


#endif