// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18HEALTHEXPERIENCEUI45SUMMARYSHARINGDATATYPESELECTIONVIEWCONTROLLER_H
#define _TTC18HEALTHEXPERIENCEUI45SUMMARYSHARINGDATATYPESELECTIONVIEWCONTROLLER_H

@class TtC18HealthExperienceUI42CompoundDataSourceCollectionViewController;



@interface _TtC18HealthExperienceUI45SummarySharingDataTypeSelectionViewController : TtC18HealthExperienceUI42CompoundDataSourceCollectionViewController {
    ? healthExperienceStore;
    ? delegate;
    ? dataTypeSelectionDataSources;
    ? selectedCategories;
    ? selectionFlow;
    ? selectedDataTypesContext;
    ? selectedContact;
    ? selectedContactPhotoPublisher;
    ? cancellables;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithCollectionViewLayout:(id)arg0 ;
-(void)cancel;
-(void)done;
-(void)viewDidLoad;


@end


#endif