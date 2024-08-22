// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACUIDEFAULTADDACCOUNTDATASOURCE_H
#define ACUIDEFAULTADDACCOUNTDATASOURCE_H

@class NSString;
@protocol ACUIAddAccountDataSource;

#import <Foundation/Foundation.h>


@interface ACUIDefaultAddAccountDataSource : NSObject <ACUIAddAccountDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldAddSpecifierForAccountTypeID:(id)arg0 ;
-(Class)controllerClassForCreatingAccountWithType:(id)arg0 withViewProviderManager:(id)arg1 ;
-(Class)viewControllerClassForCreatingAccountWithType:(id)arg0 withViewProviderManager:(id)arg1 ;
-(Class)viewControllerClassForCreatingOtherAccountTypes;
-(void)accountControllerCompletedWithAccount:(id)arg0 action:(NSInteger)arg1 data:(id)arg2 specifier:(id)arg3 viewController:(id)arg4 completion:(id)arg5 ;
-(void)configureAccountCreationController:(id)arg0 ;
-(void)configureSpecifierForOtherAccountSpecifier:(id)arg0 ;
-(void)hasAccountWithType:(id)arg0 accountStore:(id)arg1 completion:(id)arg2 ;


@end


#endif