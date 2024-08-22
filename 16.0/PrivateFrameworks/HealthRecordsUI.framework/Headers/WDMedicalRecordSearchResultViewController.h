// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDMEDICALRECORDSEARCHRESULTVIEWCONTROLLER_H
#define WDMEDICALRECORDSEARCHRESULTVIEWCONTROLLER_H

@class NSPredicate;
@protocol WDMedicalRecordSearchResultViewControllerDelegate;


#import "WDMedicalRecordTimelineViewController.h"

@interface WDMedicalRecordSearchResultViewController : WDMedicalRecordTimelineViewController

@property (weak, nonatomic) NSObject<WDMedicalRecordSearchResultViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSPredicate *predicate; // ivar: _predicate


-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif