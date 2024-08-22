// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUQUICKCONTROLWHEELPICKERVIEWITEM_H
#define HUQUICKCONTROLWHEELPICKERVIEWITEM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HUQuickControlWheelPickerViewItem : NSObject

@property (readonly, nonatomic) BOOL isSelected; // ivar: _isSelected
@property (readonly, copy, nonatomic) NSString *text; // ivar: _text
@property (readonly, copy, nonatomic) id *value; // ivar: _value


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithHFMultiStateControlItemValue:(id)arg0 text:(id)arg1 isSelected:(BOOL)arg2 ;
-(id)initWithHFTVInputControlItemValue:(id)arg0 ;


@end


#endif