// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCLUNLOCKHISTORYITEMFORMATTER_H
#define SCLUNLOCKHISTORYITEMFORMATTER_H

@class NSFormatter, UIColor, NSDateComponentsFormatter, NSDateFormatter, NSLocale;



@interface SCLUnlockHistoryItemFormatter : NSFormatter

@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (retain, nonatomic) NSDateComponentsFormatter *componentsFormatter; // ivar: _componentsFormatter
@property (retain, nonatomic) NSDateFormatter *dateFormatter; // ivar: _dateFormatter
@property (retain, nonatomic) UIColor *highlightColor; // ivar: _highlightColor
@property (retain, nonatomic) NSLocale *locale; // ivar: _locale


-(id)attributedStringForObjectValue:(id)arg0 withDefaultAttributes:(id)arg1 ;
-(id)durationStringForHistoryItem:(id)arg0 ;
-(id)fontDescriptor;
-(id)formatString;
-(id)init;
-(id)stringForObjectValue:(id)arg0 ;
-(id)timeStringForHistoryItem:(id)arg0 ;


@end


#endif