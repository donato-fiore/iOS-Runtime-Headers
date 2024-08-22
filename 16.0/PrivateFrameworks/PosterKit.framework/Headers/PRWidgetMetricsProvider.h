// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRWIDGETMETRICSPROVIDER_H
#define PRWIDGETMETRICSPROVIDER_H


#import <Foundation/Foundation.h>


@interface PRWidgetMetricsProvider : NSObject



+(id)sharedInstance;
-(CGFloat)_insetScreenWidth;
-(NSInteger)_complicationFontStyle;
-(id)_complicationCircularMetrics;
-(id)_complicationInlineMetrics;
-(id)_complicationRectangularMetrics;
-(id)_transparentMediumMetrics;
-(id)lockScreenWidgetMetricsSpecifications;
-(id)previewMetricsSpecificationForBundleIdentifier:(id)arg0 ;
-(id)previewMetricsSpecificationForDeviceContext:(id)arg0 displayContext:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)systemMetricsForWidget:(id)arg0 ;


@end


#endif