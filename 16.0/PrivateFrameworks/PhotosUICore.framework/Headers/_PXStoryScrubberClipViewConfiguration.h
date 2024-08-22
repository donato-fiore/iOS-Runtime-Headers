// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXSTORYSCRUBBERCLIPVIEWCONFIGURATION_H
#define _PXSTORYSCRUBBERCLIPVIEWCONFIGURATION_H



#import "PXGFocusEffectViewConfiguration.h"

@interface _PXStoryScrubberClipViewConfiguration : PXGFocusEffectViewConfiguration

@property (nonatomic) BOOL isCurrent; // ivar: _isCurrent
@property (nonatomic) NSInteger segmentIdentifier; // ivar: _segmentIdentifier
@property (nonatomic) BOOL shouldAdjustContent; // ivar: _shouldAdjustContent


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithConfiguration:(id)arg0 ;


@end


#endif