// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSSHARESCHEDULEROWITEM_H
#define PKPASSSHARESCHEDULEROWITEM_H

@class UIListContentConfiguration, NSDate, NSString, UIImage;
@protocol PKIdentifiable;

#import <Foundation/Foundation.h>


@interface PKPassShareScheduleRowItem : NSObject <PKIdentifiable>



@property (retain, nonatomic) UIListContentConfiguration *configuration; // ivar: _configuration
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasDayPicker; // ivar: _hasDayPicker
@property (nonatomic) BOOL hasTimePicker; // ivar: _hasTimePicker
@property (nonatomic) BOOL hasToggle; // ivar: _hasToggle
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *icon; // ivar: _icon
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL isOn; // ivar: _isOn
@property (retain, nonatomic) NSDate *maximumDate; // ivar: _maximumDate
@property (retain, nonatomic) NSDate *minimumDate; // ivar: _minimumDate
@property (nonatomic, getter=isSelectable) BOOL selectable; // ivar: _selectable
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) BOOL userInteractionEnabled; // ivar: _userInteractionEnabled
@property (retain, nonatomic) NSString *value; // ivar: _value


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPassShareScheduleRowItem:(id)arg0 ;
-(id)initWithTitle:(id)arg0 icon:(id)arg1 ;


@end


#endif