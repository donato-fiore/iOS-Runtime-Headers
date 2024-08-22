// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSLISTCONTROLLERDEFAULTNAVIGATIONCOORDINATOR_H
#define PSLISTCONTROLLERDEFAULTNAVIGATIONCOORDINATOR_H

@class NSString;
@protocol PSListControllerNavigationCoordinator;

#import <Foundation/Foundation.h>


@interface PSListControllerDefaultNavigationCoordinator : NSObject <PSListControllerNavigationCoordinator>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)listControllerIsOnTopOfNavigationStack:(id)arg0 searchTopMostViewControllerChildren:(BOOL)arg1 ;
-(BOOL)listControllerShouldDeselectAfterFormSheetDisappearance:(id)arg0 givenRootController:(id)arg1 ;
-(BOOL)listControllerShouldNotDeselectAfterAppearing:(id)arg0 ;
// -(void)listController:(id)arg0 pushViewController:(id)arg1 givenRootController:(id)arg2 withModalStylePopupStateApplicator:(id)arg3 animated:(unk)arg4  ;


@end


#endif