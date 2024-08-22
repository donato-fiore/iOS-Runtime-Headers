// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBPIPCONTENTVIEWLAYOUTCONTEXT_H
#define SBPIPCONTENTVIEWLAYOUTCONTEXT_H

@class NSString, SBPIPDefaults;

#import <Foundation/Foundation.h>


@interface SBPIPContentViewLayoutContext : NSObject

@property (copy, nonatomic) NSString *contentTypeIdentifier; // ivar: _contentTypeIdentifier
@property (nonatomic) CGFloat currentAspectRatio; // ivar: _currentAspectRatio
@property (nonatomic) CGFloat currentSize; // ivar: _currentSize
@property (retain, nonatomic) SBPIPDefaults *defaults; // ivar: _defaults
@property (nonatomic) CGFloat maximumSizePreference; // ivar: _maximumSizePreference
@property (nonatomic) CGFloat maximumSizeSpanForPreferredSizeTuning; // ivar: _maximumSizeSpanForPreferredSizeTuning
@property (nonatomic) CGFloat minimumSizePreference; // ivar: _minimumSizePreference
@property (nonatomic) CGFloat minimumSizeSpanBetweenPreferredSizes; // ivar: _minimumSizeSpanBetweenPreferredSizes
@property (readonly, nonatomic, getter=hasSizeChanged) BOOL sizeChanged; // ivar: _sizeChanged


-(id)initWithPlatformMetrics:(id)arg0 contentSize:(struct CGSize )arg1 ;
-(void)updatePlatformMetrics:(id)arg0 ;


@end


#endif