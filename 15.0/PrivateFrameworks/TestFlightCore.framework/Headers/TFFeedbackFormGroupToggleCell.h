// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TFFEEDBACKFORMGROUPTOGGLECELL_H
#define TFFEEDBACKFORMGROUPTOGGLECELL_H

@class UISwitch;


#import "TFFeedbackFormBaseCell.h"
#import "TFFeedbackEntryGroupToggle.h"

@interface TFFeedbackFormGroupToggleCell : TFFeedbackFormBaseCell

@property (retain, nonatomic) TFFeedbackEntryGroupToggle *groupToggleEntry; // ivar: _groupToggleEntry
@property (readonly, nonatomic) UISwitch *toggleSwitch; // ivar: _toggleSwitch


-(NSUInteger)displayableDataType;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)applyContentsOfEntry:(id)arg0 ;
-(void)didUpdateToggleSwitchValue:(id)arg0 ;
-(void)prepareForReuse;
-(void)setDisplayedDataGroupInclusionBool:(BOOL)arg0 ;


@end


#endif