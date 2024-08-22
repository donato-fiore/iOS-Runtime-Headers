// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSREMINDERRESULTBUILDER_H
#define SSREMINDERRESULTBUILDER_H

@class NSDate, NSString;


#import "SSResultBuilder.h"

@interface SSReminderResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSDate *completionDate; // ivar: _completionDate
@property (retain, nonatomic) NSDate *dueDate; // ivar: _dueDate
@property (retain, nonatomic) NSDate *modificationDate; // ivar: _modificationDate
@property (retain, nonatomic) NSString *reminder; // ivar: _reminder


+(BOOL)isCoreSpotlightResult;
+(id)bundleId;
+(id)stringWithCompletionDate:(id)arg0 dueDate:(id)arg1 modificationDate:(id)arg2 ;
+(id)stringWithCompletionDate:(id)arg0 dueDate:(id)arg1 modificationDate:(id)arg2 isCompact:(BOOL)arg3 ;
-(id)buildCompactCardSection;
-(id)buildDateToDisplayWithCompactFormatting:(BOOL)arg0 ;
-(id)buildInlineCardSection;
-(id)initWithResult:(id)arg0 ;


@end


#endif