// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKEMERGENCYCARDMEDICALNOTESTABLEITEM_H
#define HKEMERGENCYCARDMEDICALNOTESTABLEITEM_H



#import "HKEmergencyCardMultilineTextTableItem.h"

@interface HKEmergencyCardMedicalNotesTableItem : HKEmergencyCardMultilineTextTableItem



-(BOOL)hasPresentableData;
-(id)_multilineStringValue;
-(id)_placeholderText;
-(id)title;
-(void)_updateMultilineStringValueWithValue:(id)arg0 ;


@end


#endif