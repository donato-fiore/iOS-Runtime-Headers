// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLYCONFIRMINFOSECTIONCONTROLLER_H
#define PKAPPLYCONFIRMINFOSECTIONCONTROLLER_H

@class PKApplyActionContent;
@protocol PKApplyConfirmInfoSectionControllerDelegate;


#import "PKApplyCollectionViewSectionController.h"

@interface PKApplyConfirmInfoSectionController : PKApplyCollectionViewSectionController {
    PKApplyActionContent *_actionContent;
    id<PKApplyConfirmInfoSectionControllerDelegate> *_delegate;
}




-(Class)footerViewClassForSectionIdentifier:(id)arg0 ;
-(id)identifiers;
-(id)initWithController:(id)arg0 applyPage:(id)arg1 delegate:(id)arg2 ;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)_configureContentSection:(id)arg0 ;
-(void)configureCellForRegistration:(id)arg0 item:(id)arg1 ;
-(void)configureFooterView:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)setPage:(id)arg0 ;


@end


#endif