// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBPIPCONTENTVIEWLAYOUTMETRICS_H
#define SBPIPCONTENTVIEWLAYOUTMETRICS_H

@class NSString;

#import <Foundation/Foundation.h>

#import "SBPIPContentViewLayoutMetricsSizePolicy.h"

@interface SBPIPContentViewLayoutMetrics : NSObject

@property (readonly, copy, nonatomic) NSString *contentTypeIdentifier; // ivar: _contentTypeIdentifier
@property (readonly, nonatomic) CGFloat defaultCornerRadius; // ivar: _defaultCornerRadius
@property (readonly, nonatomic) NSUInteger defaultPosition; // ivar: _defaultPosition
@property (readonly, nonatomic) CGSize minimumStashedTabSize; // ivar: _minimumStashedTabSize
@property (readonly, nonatomic) CGFloat padding; // ivar: _padding
@property (readonly, nonatomic) CGFloat paddingWhileStashed; // ivar: _paddingWhileStashed
@property (readonly, nonatomic) BOOL prefersDefaultPosition; // ivar: _prefersDefaultPosition
@property (readonly, nonatomic) SBPIPContentViewLayoutMetricsSizePolicy *sizePolicy; // ivar: _sizePolicy


+(CGFloat)minimumLandscapePadding;
+(CGFloat)unstashedPeripheryPadding;
+(id)pegasusDefaultMetrics;
+(id)pegasusDefaultMicroPIPMetrics;
+(id)pegasusMetricsForContentType:(NSInteger)arg0 ;
+(id)pegasusQNBacklinkMetrics;
+(id)pegasusScreenSharingMetrics;
+(id)pegasusVideoCallMetrics;
+(id)systemNotesMetricsForPresentationMode:(NSInteger)arg0 ;
+(void)microPIPLandscapeSizePreferences:(*id)arg0 portraitSizePreferences:(*id)arg1 squareSizePreferences:(*id)arg2 ;
+(void)screenSharingLandscapeSizePreferences:(*id)arg0 portraitSizePreferences:(*id)arg1 squareSizePreferences:(*id)arg2 ;
+(void)videoCallLandscapeSizePreferences:(*id)arg0 portraitSizePreferences:(*id)arg1 squareSizePreferences:(*id)arg2 ;
+(void)videoContentLandscapeSizePreferences:(*id)arg0 portraitSizePreferences:(*id)arg1 squareSizePreferences:(*id)arg2 ;
-(id)initWithContentTypeIdentifier:(id)arg0 padding:(CGFloat)arg1 paddingWhileStashed:(CGFloat)arg2 minimumStashedTabSize:(struct CGSize )arg3 defaultCornerRadius:(CGFloat)arg4 sizePolicy:(id)arg5 defaultPosition:(NSUInteger)arg6 ;
-(id)initWithContentTypeIdentifier:(id)arg0 padding:(CGFloat)arg1 paddingWhileStashed:(CGFloat)arg2 minimumStashedTabSize:(struct CGSize )arg3 defaultCornerRadius:(CGFloat)arg4 sizePolicy:(id)arg5 defaultPosition:(NSUInteger)arg6 prefersDefaultPosition:(BOOL)arg7 ;


@end


#endif