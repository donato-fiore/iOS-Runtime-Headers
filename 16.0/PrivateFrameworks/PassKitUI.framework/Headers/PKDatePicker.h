// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDATEPICKER_H
#define PKDATEPICKER_H

@class UIView, UIView<PKDatePickerInternalImplementationProtocol>, NSCalendar, NSDate, NSLocale;
@protocol PKDatePickerDelegate;



@interface PKDatePicker : UIView {
    UIView<PKDatePickerInternalImplementationProtocol> *_internalPicker;
}


@property (readonly, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (weak, nonatomic) NSObject<PKDatePickerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSLocale *locale; // ivar: _locale
@property (readonly, nonatomic) BOOL showsDay; // ivar: _showsDay
@property (readonly, nonatomic) BOOL showsMonth; // ivar: _showsMonth
@property (readonly, nonatomic) BOOL showsYear; // ivar: _showsYear
@property (readonly, nonatomic) NSUInteger style; // ivar: _style
@property (nonatomic) BOOL usesDarkAppearance; // ivar: _usesDarkAppearance


+(BOOL)_preventsAppearanceProxyCustomization;
-(Class)_classForDay:(BOOL)arg0 month:(BOOL)arg1 year:(BOOL)arg2 style:(NSUInteger)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pk_childrenForAppearance;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_dateValueChanged:(id)arg0 ;
-(void)_forceReloadInternalPicker;
-(void)dealloc;
-(void)layoutSubviews;
-(void)pk_applyAppearance:(id)arg0 ;
-(void)reconfigureToShowDay:(BOOL)arg0 month:(BOOL)arg1 year:(BOOL)arg2 style:(NSUInteger)arg3 locale:(id)arg4 calendar:(id)arg5 ;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif