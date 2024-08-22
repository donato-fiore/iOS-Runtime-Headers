// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKMEDICALIDEDITOREMERGENCYCONTACTCELL_H
#define HKMEDICALIDEDITOREMERGENCYCONTACTCELL_H

@class _HKEmergencyContact;


#import "HKMedicalIDEditorCell.h"

@interface HKMedicalIDEditorEmergencyContactCell : HKMedicalIDEditorCell

@property (retain, nonatomic) _HKEmergencyContact *contact; // ivar: _contact


-(id)formattedValue;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_labelTapped:(id)arg0 ;


@end


#endif