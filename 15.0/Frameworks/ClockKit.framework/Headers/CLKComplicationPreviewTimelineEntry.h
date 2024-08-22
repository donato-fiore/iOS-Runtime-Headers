// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLKCOMPLICATIONPREVIEWTIMELINEENTRY_H
#define CLKCOMPLICATIONPREVIEWTIMELINEENTRY_H

@class NSString, NSArray, NSDate;
@protocol TLPreviewTimelineEntry;


#import "CLKComplicationTimelineEntry.h"

@interface CLKComplicationPreviewTimelineEntry : CLKComplicationTimelineEntry <TLPreviewTimelineEntry>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *errors; // ivar: _errors
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger previewFaceColor; // ivar: _previewFaceColor
@property (copy, nonatomic) NSArray *selectableRegions; // ivar: _selectableRegions
@property (readonly) Class superclass;
@property (retain, nonatomic, setter=tl_setEntryDate:) NSDate *tl_entryDate;
@property (readonly, nonatomic) NSArray *tl_errors;
@property (readonly, nonatomic) NSArray *tl_selectableRegions;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)finalize;


@end


#endif