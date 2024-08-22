// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPEVENTHIGHLIGHT_H
#define PPEVENTHIGHLIGHT_H

@class NSDate, NSString, NSURL, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PPEventHighlight : NSObject <NSSecureCoding>



@property (nonatomic) *CGColor calendarColor; // ivar: _calendarColor
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (retain, nonatomic) NSString *eventIdentifier; // ivar: _eventIdentifier
@property (retain, nonatomic) NSURL *externalURI; // ivar: _externalURI
@property (retain, nonatomic) NSArray *features; // ivar: _features
@property (nonatomic) BOOL isExtraordinary; // ivar: _isExtraordinary
@property (retain, nonatomic) NSString *location; // ivar: _location
@property (retain, nonatomic) NSString *organizer; // ivar: _organizer
@property (nonatomic) NSUInteger prominentFeature; // ivar: _prominentFeature
@property (nonatomic) CGFloat score; // ivar: _score
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (retain, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(id)describeProminentFeature:(NSUInteger)arg0 ;
+(id)eventHighlightWithEKEvent:(id)arg0 score:(CGFloat)arg1 prominentFeature:(NSUInteger)arg2 features:(id)arg3 isExtraordinary:(BOOL)arg4 ;
+(id)eventHighlightWithEvent:(id)arg0 score:(CGFloat)arg1 prominentFeature:(NSUInteger)arg2 features:(id)arg3 isExtraordinary:(BOOL)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEventHighlight:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEventIdentifier:(id)arg0 externalURI:(id)arg1 title:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 location:(id)arg5 organizer:(id)arg6 calendarColor:(struct CGColor *)arg7 prominentFeature:(NSUInteger)arg8 features:(id)arg9 score:(CGFloat)arg10 isExtraordinary:(BOOL)arg11 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif