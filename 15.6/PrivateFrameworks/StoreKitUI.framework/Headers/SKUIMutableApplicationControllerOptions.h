// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIMUTABLEAPPLICATIONCONTROLLEROPTIONS_H
#define SKUIMUTABLEAPPLICATIONCONTROLLEROPTIONS_H



#import "SKUIApplicationControllerOptions.h"

@interface SKUIMutableApplicationControllerOptions : SKUIApplicationControllerOptions

@property (nonatomic, getter=isBootstrapScriptFallbackEnabled) BOOL bootstrapScriptFallbackEnabled;
@property (nonatomic) CGFloat bootstrapScriptFallbackMaximumAge;
@property (nonatomic) CGFloat bootstrapScriptTimeoutInterval;
@property (nonatomic) BOOL pageRenderMetricsEnabled;
@property (nonatomic) BOOL requiresLocalBootstrapScript;
@property (nonatomic) BOOL supportsFullApplicationReload;
@property (nonatomic) NSInteger tabBarControllerStyle;
@property (nonatomic) BOOL useTransientStorageForTests;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif