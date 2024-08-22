// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKRECURRENCECHOOSERCONTROLLER_H
#define EKRECURRENCECHOOSERCONTROLLER_H

@class UIColor, NSDate;
@protocol EKRecurrenceChooserControllerDelegate;

#import <Foundation/Foundation.h>


@interface EKRecurrenceChooserController : NSObject

@property (copy, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (copy) NSDate *date; // ivar: _date
@property (weak) NSObject<EKRecurrenceChooserControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSInteger frequency;


+(int)dayFromNumber:(NSInteger)arg0 ;
-(BOOL)drawBackgroundForRow:(NSInteger)arg0 ;
-(CGFloat)heightForRow:(NSInteger)arg0 ;
-(NSInteger)numberOfRows;
-(id)cellForRow:(NSInteger)arg0 ;
-(id)initWithDate:(id)arg0 ;
-(id)startDateComponents:(NSUInteger)arg0 ;
-(void)notifyDelegate;
-(void)rowTapped:(NSInteger)arg0 ;
-(void)updateFromRecurrenceRule:(id)arg0 ;
-(void)updateRecurrenceRuleBuilder:(id)arg0 ;


@end


#endif