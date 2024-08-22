// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18HEALTHEXPERIENCEUI48SUMMARYSHARINGSYSTEMCONTACTSPICKERVIEWCONTROLLER_H
#define _TTC18HEALTHEXPERIENCEUI48SUMMARYSHARINGSYSTEMCONTACTSPICKERVIEWCONTROLLER_H

@class OBWelcomeController;
@protocol CNContactPickerDelegate, HKSummarySharingEntryStoreDelegate;



@interface _TtC18HealthExperienceUI48SummarySharingSystemContactsPickerViewController : OBWelcomeController <CNContactPickerDelegate, HKSummarySharingEntryStoreDelegate>

 {
    ? selectionFlowContext;
    ? healthExperienceStore;
    ? healthStore;
    ? state;
    ? sharingStore;
}




-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 symbolName:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(void)contactPicker:(id)arg0 didSelectContact:(id)arg1 ;
-(void)contactPickerDidCancel:(id)arg0 ;
-(void)summarySharingEntryStore:(id)arg0 didUpdateReachabilityStatus:(id)arg1 error:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif