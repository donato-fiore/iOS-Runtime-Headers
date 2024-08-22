// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSLISTCONTROLLERDEFAULTAPPEARANCEPROVIDER_H
#define PSLISTCONTROLLERDEFAULTAPPEARANCEPROVIDER_H

@class NSString;
@protocol PSListControllerAppearanceProvider;

#import <Foundation/Foundation.h>


@interface PSListControllerDefaultAppearanceProvider : NSObject <PSListControllerAppearanceProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)estimatedHeightOfRowForCellWithIndexPath:(id)arg0 inController:(id)arg1 ;
-(NSInteger)tableViewStyleForListController:(id)arg0 ;
-(id)cellForSpecifier:(id)arg0 inController:(id)arg1 ;
-(void)customizeTableView:(id)arg0 inContainerView:(id)arg1 hostedInSetupController:(BOOL)arg2 forListController:(id)arg3 ;
-(void)listController:(id)arg0 updateSectionContentInsetAnimated:(BOOL)arg1 isRegularWidth:(BOOL)arg2 contentInsetInitialized:(BOOL)arg3 contentInsetInitializedApplicator:(id)arg4 ;


@end


#endif