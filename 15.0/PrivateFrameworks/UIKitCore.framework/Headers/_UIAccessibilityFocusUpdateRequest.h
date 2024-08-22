// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIACCESSIBILITYFOCUSUPDATEREQUEST_H
#define _UIACCESSIBILITYFOCUSUPDATEREQUEST_H

@class UIFocusUpdateRequest;



@interface _UIAccessibilityFocusUpdateRequest : UIFocusUpdateRequest

@property (nonatomic) NSInteger options; // ivar: _options


-(BOOL)requiresNextFocusedItem;
-(BOOL)shouldPlayFocusSound;


@end


#endif