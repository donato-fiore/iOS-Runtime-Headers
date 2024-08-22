// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLYFOCUSEDPICKERVIEWCONTROLLER_H
#define PKAPPLYFOCUSEDPICKERVIEWCONTROLLER_H

@class PKPaymentSetupFieldPicker, NSString;
@protocol PKApplyCollectionViewSectionControllerDelegate;


#import "PKDynamicCollectionViewController.h"

@interface PKApplyFocusedPickerViewController : PKDynamicCollectionViewController <PKApplyCollectionViewSectionControllerDelegate>

 {
    PKPaymentSetupFieldPicker *_picker;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSObject<PKApplyCollectionViewSectionControllerDelegate> *dynamicCollectionDelegate; // ivar: _dynamicCollectionDelegate
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_recomputeSections;
-(id)initWithPicker:(id)arg0 ;
-(void)recomputeSectionsWithReload:(BOOL)arg0 ;
-(void)reloadDataAnimated:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif