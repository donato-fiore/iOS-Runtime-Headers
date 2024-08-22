// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFDATEFORMATVARIABLEAGGRANDIZEMENT_H
#define WFDATEFORMATVARIABLEAGGRANDIZEMENT_H

@class NSString;


#import "WFVariableAggrandizement.h"

@interface WFDateFormatVariableAggrandizement : WFVariableAggrandizement

@property (readonly, nonatomic) NSString *customDateFormat;
@property (readonly, nonatomic) NSString *dateStyle;
@property (readonly, nonatomic) BOOL includesTimeForISO8601;
@property (readonly, nonatomic) NSString *relativeDateStyle;
@property (readonly, nonatomic) NSString *timeStyle;


+(id)defaultAggrandizement;
-(id)initWithCustomDateFormat:(id)arg0 ;
-(id)initWithDateStyle:(id)arg0 timeStyle:(id)arg1 relativeDateStyle:(id)arg2 ;
-(id)initWithDateStyle:(id)arg0 timeStyle:(id)arg1 relativeDateStyle:(id)arg2 customDateFormat:(id)arg3 includesTimeForISO8601:(BOOL)arg4 ;
-(id)initWithISO8601DateStyleAndTime:(BOOL)arg0 ;
-(id)initWithRFC2822DateStyle;
-(id)initWithRelativeDateStyle:(id)arg0 timeStyle:(id)arg1 ;
-(id)initWithRelativeTimeStyle;
-(id)processedContentClasses:(id)arg0 ;
-(void)applyToContentCollection:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif