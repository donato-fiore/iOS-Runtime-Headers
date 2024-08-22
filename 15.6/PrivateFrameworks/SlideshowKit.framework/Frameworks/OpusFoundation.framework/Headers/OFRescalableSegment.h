// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OFRESCALABLESEGMENT_H
#define OFRESCALABLESEGMENT_H

@class NSString;
@protocol OFRescalableSegment;

#import <Foundation/Foundation.h>


@interface OFRescalableSegment : NSObject <OFRescalableSegment>



@property CGFloat compressibility; // ivar: _compressibility
@property (readonly, copy) NSString *debugDescription;
@property CGFloat defaultDuration; // ivar: _defaultDuration
@property (readonly, copy) NSString *description;
@property CGFloat expandability; // ivar: _expandability
@property (readonly) NSUInteger hash;
@property CGFloat maximumDuration; // ivar: _maximumDuration
@property CGFloat minimumDuration; // ivar: _minimumDuration
@property (readonly) Class superclass;


+(id)lessRescalableSegmentWithDefaultDuration:(CGFloat)arg0 minimumDuration:(CGFloat)arg1 ;
+(id)lessRescalableSegmentWithDefaultDuration:(CGFloat)arg0 minimumDuration:(CGFloat)arg1 maximumDuration:(CGFloat)arg2 ;
+(id)moreRescalableSegmentWithDefaultDuration:(CGFloat)arg0 minimumDuration:(CGFloat)arg1 ;
+(id)moreRescalableSegmentWithDefaultDuration:(CGFloat)arg0 minimumDuration:(CGFloat)arg1 maximumDuration:(CGFloat)arg2 ;
+(id)nonRescalableSegmentWithDuration:(CGFloat)arg0 ;
+(id)rescalableSegmentWithDefaultDuration:(CGFloat)arg0 minimumDuration:(CGFloat)arg1 ;
+(id)rescalableSegmentWithDefaultDuration:(CGFloat)arg0 minimumDuration:(CGFloat)arg1 maximumDuration:(CGFloat)arg2 ;


@end


#endif