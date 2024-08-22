// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TESTCNUIUSERACTIONLISTDATASOURCE_H
#define TESTCNUIUSERACTIONLISTDATASOURCE_H

@class NSDictionary, CNContact, NSString;
@protocol CNUIUserActionListDataSource;

#import <Foundation/Foundation.h>


@interface TestCNUIUserActionListDataSource : NSObject <CNUIUserActionListDataSource>



@property (readonly, nonatomic) NSDictionary *actionsByActionTypeByContact; // ivar: _actionsByActionTypeByContact
@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL tracksChanges; // ivar: _tracksChanges
@property (retain, nonatomic) NSDictionary *userActionListModelResultBlocksByActionTypeAskedFor; // ivar: _userActionListModelResultBlocksByActionTypeAskedFor


+(id)allActionTypes;
+(id)allSupportedActionTypes;
+(id)allSupportedActionTypesWithCapabilities:(id)arg0 ;
-(id)actionTypesForConsumer:(id)arg0 ;
-(id)consumer:(id)arg0 actionModelsForActionType:(id)arg1 ;
-(id)consumer:(id)arg0 actionModelsForActionType:(id)arg1 handler:(id)arg2 ;
-(id)consumer:(id)arg0 imageForActionType:(id)arg1 ;
-(id)consumer:(id)arg0 localizedButtonDisplayNameForActionType:(id)arg1 ;
-(id)consumer:(id)arg0 localizedDisplayNameForActionType:(id)arg1 ;
-(id)consumer:(id)arg0 localizedDisplayNameForButtonWithDefaultAction:(id)arg1 actionType:(id)arg2 ;
-(id)initWithActionsByActionTypeByContact:(id)arg0 ;
-(id)thirdPartyActionsForContactProperty:(id)arg0 ;
-(id)thirdPartyActionsForCurrentContactAndPropertyKey:(id)arg0 identifier:(id)arg1 ;
-(id)thirdPartyTargetsForActionTypes:(id)arg0 ;


@end


#endif