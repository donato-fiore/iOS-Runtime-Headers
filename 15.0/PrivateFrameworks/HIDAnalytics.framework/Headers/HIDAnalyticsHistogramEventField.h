// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HIDANALYTICSHISTOGRAMEVENTFIELD_H
#define HIDANALYTICSHISTOGRAMEVENTFIELD_H

@class NSString;
@protocol HIDAnalyticsEventFieldProtocol;

#import <Foundation/Foundation.h>


@interface HIDAnalyticsHistogramEventField : NSObject <HIDAnalyticsEventFieldProtocol>

 {
    unsigned char _segmentCount;
    *_HIDAnalyticsHistogramSegment _segments;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSString *fieldName; // ivar: _fieldName
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak) id *value;


-(id)initWithAttributes:(id)arg0 segments:(struct _HIDAnalyticsHistogramSegmentConfig *)arg1 count:(NSInteger)arg2 ;
-(void)createBuckets:(struct _HIDAnalyticsHistogramSegmentConfig *)arg0 count:(NSInteger)arg1 ;
-(void)dealloc;
-(void)setIntegerValue:(NSUInteger)arg0 ;


@end


#endif