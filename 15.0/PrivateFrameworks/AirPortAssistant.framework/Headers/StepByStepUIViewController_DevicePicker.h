// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STEPBYSTEPUIVIEWCONTROLLER_DEVICEPICKER_H
#define STEPBYSTEPUIVIEWCONTROLLER_DEVICEPICKER_H

@class NSDictionary, NSString, NSArray;
@protocol TableViewManagerDelegate;


#import "StepByStepUIViewController.h"
#import "RecommendationActionController.h"

@interface StepByStepUIViewController_DevicePicker : StepByStepUIViewController <TableViewManagerDelegate>

 {
    NSDictionary *_selectedDevice;
    NSDictionary *_sourceNetwork;
    NSDictionary *_sourceBase;
    NSDictionary *_targetBase;
    BOOL _showSingleBaseTopo;
    BOOL showFullList;
}


@property (retain, nonatomic) RecommendationActionController *actionController; // ivar: actionController
@property (nonatomic) NSString *connectionMedium; // ivar: connectionMedium
@property (retain, nonatomic) NSArray *sortedDevices; // ivar: sortedDevices


-(BOOL)showMoreOptions;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)pickerContent;
-(id)valueForItemOfType:(id)arg0 atTypeIndex:(NSUInteger)arg1 inCellWithTag:(NSInteger)arg2 ;
-(void)loadView;
-(void)setupPickerTable;
-(void)touchInCellAtIndexPath:(id)arg0 ;
-(void)updateSelections;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif