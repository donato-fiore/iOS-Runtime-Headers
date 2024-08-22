// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDMEDICALRECORDSOURCEDATAVIEWCONTROLLER_H
#define WDMEDICALRECORDSOURCEDATAVIEWCONTROLLER_H

@class HKViewController, HKMedicalRecord, UIBarButtonItem, UITextView;


#import "HRProfile.h"

@interface WDMedicalRecordSourceDataViewController : HKViewController

@property (nonatomic) BOOL hasFetchedSourceString; // ivar: _hasFetchedSourceString
@property (readonly, copy, nonatomic) HKMedicalRecord *medicalRecord; // ivar: _medicalRecord
@property (readonly, nonatomic) HRProfile *profile; // ivar: _profile
@property (retain, nonatomic) UIBarButtonItem *shareItem; // ivar: _shareItem
@property (readonly, nonatomic) UITextView *sourceView; // ivar: _sourceView


-(id)initWithProfile:(id)arg0 medicalRecord:(id)arg1 ;
-(void)_fetchAndDisplaySourceStringIfNecessary;
-(void)_tapToRadar:(id)arg0 ;
-(void)displaySourceString:(id)arg0 ;
-(void)loadView;
-(void)selectAll:(id)arg0 ;
-(void)share:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif