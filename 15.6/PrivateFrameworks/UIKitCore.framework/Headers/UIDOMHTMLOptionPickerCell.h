// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIDOMHTMLOPTIONPICKERCELL_H
#define UIDOMHTMLOPTIONPICKERCELL_H



#import "UIPickerContentView.h"

@interface UIDOMHTMLOptionPickerCell : UIPickerContentView

@property (nonatomic) BOOL disabled; // ivar: _disabled


-(BOOL)_isSelectable;
-(id)initCommon;
-(id)initWithHTMLOptionNode:(id)arg0 ;


@end


#endif