// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSPROMINENTSUBTITLEDATEVIEW_H
#define CSPROMINENTSUBTITLEDATEVIEW_H

@class NSString, NSLocale, NSDateFormatter;


#import "CSProminentTextElementView.h"

@interface CSProminentSubtitleDateView : CSProminentTextElementView

@property (copy, nonatomic) NSString *alternateCalendarIdentifier; // ivar: _alternateCalendarIdentifier
@property (retain, nonatomic) NSLocale *alternateCalendarLocale; // ivar: _alternateCalendarLocale
@property (retain, nonatomic) NSDateFormatter *alternateDateFormatter; // ivar: _alternateDateFormatter
@property (retain, nonatomic) NSDateFormatter *formatter; // ivar: _formatter


+(NSUInteger)elementType;
-(BOOL)_wantsCompactForOrientation;
-(id)_alternateDateString;
-(id)_dateString;
-(id)initWithDate:(id)arg0 font:(id)arg1 textColor:(id)arg2 ;
-(id)initWithDate:(id)arg0 textColor:(id)arg1 ;
-(id)overrideString;
-(void)_updateLabel;
-(void)setDate:(id)arg0 ;


@end


#endif