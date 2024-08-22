// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKSEARCHFOUNDATIONBUSINESSHOURSANDDISTANCERICHTEXT_H
#define MKSEARCHFOUNDATIONBUSINESSHOURSANDDISTANCERICHTEXT_H

@class UIColor, NSString;


#import "MKSearchFoundationRichText.h"

@interface MKSearchFoundationBusinessHoursAndDistanceRichText : MKSearchFoundationRichText

@property (getter=isBusinessHoursResolved) BOOL businessHoursResolved; // ivar: _businessHoursResolved
@property (getter=isDistanceResolved) BOOL distanceResolved; // ivar: _distanceResolved
@property (retain) UIColor *hoursColor; // ivar: _hoursColor
@property (retain) NSString *hoursString; // ivar: _hoursString


-(BOOL)isRichTextResolved;
-(void)resolveBusinessHoursByMapItem:(id)arg0 lines:(id)arg1 ;
-(void)resolveDistanceNotFound;
-(void)resolveDistanceString:(id)arg0 lines:(id)arg1 ;
-(void)updateFormattedTextForLines:(id)arg0 ;


@end


#endif