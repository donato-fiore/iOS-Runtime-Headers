// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKAPPLYCONFIRMINFOVIEWCONTROLLER_H
#define PKAPPLYCONFIRMINFOVIEWCONTROLLER_H

@class NSString;
@protocol PKApplyConfirmInfoSectionControllerDelegate;


#import "PKApplyCollectionViewController.h"
#import "PKApplyConfirmInfoSectionController.h"

@interface PKApplyConfirmInfoViewController : PKApplyCollectionViewController <PKApplyConfirmInfoSectionControllerDelegate>

 {
    PKApplyConfirmInfoSectionController *_sectionController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)additionalAnalyticsDictionaryForViewAppearing:(BOOL)arg0 ;
-(id)initWithController:(id)arg0 setupDelegate:(id)arg1 context:(NSInteger)arg2 applyPage:(id)arg3 ;
-(id)pageTag;
-(void)_continueAction;
-(void)didSelectActionItem:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif