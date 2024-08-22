// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC9CHRONOKIT26WIDGETPREVIEWTIMELINEENTRY_H
#define _TTC9CHRONOKIT26WIDGETPREVIEWTIMELINEENTRY_H

@class TLTimelineBlobEntry, NSArray;
@protocol TLPreviewTimelineEntry;



@interface _TtC9ChronoKit26WidgetPreviewTimelineEntry : TLTimelineBlobEntry <TLPreviewTimelineEntry>

 {
    ? tl_errors;
    ? tl_selectableRegions;
    ? backgroundColor;
}


@property (nonatomic, readonly) NSInteger hash;
@property (nonatomic, copy) NSArray *tl_errors;
@property (nonatomic, copy) NSArray *tl_selectableRegions;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithBlob:(id)arg0 atDate:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif