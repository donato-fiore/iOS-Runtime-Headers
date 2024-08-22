// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLYMULTILEVELLISTPICKERSECTIONCONTROLLER_H
#define PKAPPLYMULTILEVELLISTPICKERSECTIONCONTROLLER_H

@class PKPaymentSetupFieldPicker;


#import "PKApplyCollectionViewSectionController.h"

@interface PKApplyMultilevelListPickerSectionController : PKApplyCollectionViewSectionController {
    PKPaymentSetupFieldPicker *_picker;
}




-(BOOL)shouldHighlightItem:(id)arg0 ;
-(id)identifiers;
-(id)initWithController:(id)arg0 applyPage:(id)arg1 picker:(id)arg2 ;
-(id)layoutWithLayoutEnvironment:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)didSelectItem:(id)arg0 ;


@end


#endif