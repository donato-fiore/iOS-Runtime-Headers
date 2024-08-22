// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBUICOLORSTATISTICS_H
#define PBUICOLORSTATISTICS_H

@class _UILegibilitySettingsProvider, UIColor;
@protocol NSCopying, NSSecureCoding, PBUIColorStatisticsDelegate;

#import <Foundation/Foundation.h>


@interface PBUIColorStatistics : NSObject <NSCopying, NSSecureCoding>

 {
    id<PBUIColorStatisticsDelegate> *_delegate;
    os_unfair_lock_s _lock;
    _UILegibilitySettingsProvider *_legibilityProvider;
    UIColor *_averageColor;
    CGFloat _averageContrast;
}




+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif