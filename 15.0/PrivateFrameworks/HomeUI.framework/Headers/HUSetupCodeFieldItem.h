// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUSETUPCODEFIELDITEM_H
#define HUSETUPCODEFIELDITEM_H

@class UIView, UILabel, NSNumber;



@interface HUSetupCodeFieldItem : UIView

@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (retain, nonatomic) UILabel *digitLabel; // ivar: _digitLabel
@property (nonatomic) NSUInteger itemNumber; // ivar: _itemNumber
@property (retain, nonatomic) NSNumber *value; // ivar: _value


-(id)init;
-(void)activate;
-(void)clear;
-(void)deactivate;


@end


#endif