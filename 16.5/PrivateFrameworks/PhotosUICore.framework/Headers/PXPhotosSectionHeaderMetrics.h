// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPHOTOSSECTIONHEADERMETRICS_H
#define PXPHOTOSSECTIONHEADERMETRICS_H


#import <Foundation/Foundation.h>


@interface PXPhotosSectionHeaderMetrics : NSObject {
    CGFloat _cachedHeights;
}




+(id)sharedMetrics;
-(CGFloat)accessibilitySectionHeaderHeightForStyle:(NSInteger)arg0 width:(CGFloat)arg1 actionButton:(BOOL)arg2 disclosure:(BOOL)arg3 title:(id)arg4 startDate:(id)arg5 endDate:(id)arg6 locations:(id)arg7 actionButtonSpec:(id)arg8 ;
-(CGFloat)sectionHeaderHeightForStyle:(NSInteger)arg0 hasTitle:(BOOL)arg1 hasDates:(BOOL)arg2 hasLocation:(BOOL)arg3 ;
-(id)init;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)_invalidateCache;


@end


#endif