// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPDATETIMESMARTFIELD_H
#define TSWPDATETIMESMARTFIELD_H

@class NSString, NSDate;


#import "TSWPSmartField.h"

@interface TSWPDateTimeSmartField : TSWPSmartField {
    NSString *_format;
    NSString *_localeID;
    NSInteger _dateStyle;
    NSInteger _timeStyle;
    int _updatePlan;
    BOOL _needsUpdate;
    NSDate *_date;
}


@property (copy, nonatomic) NSDate *date;
@property (nonatomic) NSInteger dateStyle;
@property (copy, nonatomic) NSString *format;
@property (copy, nonatomic) NSString *localeIdentifier;
@property (nonatomic) BOOL needsUpdate;
@property (nonatomic) NSInteger timeStyle;
@property (nonatomic) int updatePlan;


+(id)dateStringFromTime:(CGFloat)arg0 withFormat:(id)arg1 localeIdentifier:(id)arg2 dateStyle:(NSInteger)arg3 timeStyle:(NSInteger)arg4 ;
+(id)newDateFormatWithLocaleIdentifier:(id)arg0 dateStyle:(NSInteger)arg1 timeStyle:(NSInteger)arg2 ;
-(BOOL)supportsDeepCopyForUndo;
-(id)copyWithContext:(id)arg0 ;
-(id)generateInlineText;
-(id)initWithLocaleIdentifier:(id)arg0 dateStyle:(NSInteger)arg1 timeStyle:(NSInteger)arg2 autoUpdate:(BOOL)arg3 context:(id)arg4 ;
-(id)initWithLocaleIdentifier:(id)arg0 dateStyle:(NSInteger)arg1 timeStyle:(NSInteger)arg2 format:(id)arg3 autoUpdate:(BOOL)arg4 context:(id)arg5 ;
-(id)initWithLocaleIdentifier:(id)arg0 dateStyle:(NSInteger)arg1 timeStyle:(NSInteger)arg2 format:(id)arg3 date:(id)arg4 updatePlan:(int)arg5 context:(id)arg6 ;
-(unsigned short)smartFieldKind;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)resetLocaleTo:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif