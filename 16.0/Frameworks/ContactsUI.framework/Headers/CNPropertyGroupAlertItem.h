// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNPROPERTYGROUPALERTITEM_H
#define CNPROPERTYGROUPALERTITEM_H



#import "CNPropertyGroupItem.h"

@interface CNPropertyGroupAlertItem : CNPropertyGroupItem



+(id)emptyValueForLabel:(id)arg0 ;
-(BOOL)canRemove;
-(BOOL)isEquivalentToItem:(id)arg0 whenEditing:(BOOL)arg1 ;
-(BOOL)isValidValue:(id)arg0 ;
-(id)_toneManager;
-(id)_vibrationManager;
-(id)description;
-(id)displayLabel;
-(id)displayStringForValue:(id)arg0 ;
-(id)labeledValue;
-(id)replacementForInvalidValue:(id)arg0 ;
-(void)setLabeledValue:(id)arg0 ;


@end


#endif