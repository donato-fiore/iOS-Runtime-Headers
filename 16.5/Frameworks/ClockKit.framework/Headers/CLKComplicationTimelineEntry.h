// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLKCOMPLICATIONTIMELINEENTRY_H
#define CLKCOMPLICATIONTIMELINEENTRY_H

@class NSDate, NSString;
@protocol CLKTimelineEntry;

#import <Foundation/Foundation.h>

#import "CLKComplicationTemplate.h"

@interface CLKComplicationTimelineEntry : NSObject <CLKTimelineEntry>



@property (copy, nonatomic) CLKComplicationTemplate *complicationTemplate; // ivar: _complicationTemplate
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL finalized; // ivar: _finalized
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *timelineAnimationGroup; // ivar: _timelineAnimationGroup
@property (retain, nonatomic, setter=tl_setEntryDate:) NSDate *tl_entryDate;


+(BOOL)supportsSecureCoding;
+(id)entryWithDate:(id)arg0 complicationTemplate:(id)arg1 ;
+(id)entryWithDate:(id)arg0 complicationTemplate:(id)arg1 timelineAnimationGroup:(id)arg2 ;
-(BOOL)tl_validate:(*id)arg0 ;
-(BOOL)validateComplicationFamily:(NSInteger)arg0 ;
-(BOOL)validateWithError:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)finalize;


@end


#endif