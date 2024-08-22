// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIAPPLICATIONCONTROLLEROPTIONS_H
#define SKUIAPPLICATIONCONTROLLEROPTIONS_H

@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface SKUIApplicationControllerOptions : NSObject <NSCopying, NSMutableCopying>

 {
    BOOL _supportsFullApplicationReload;
    NSInteger _tabBarControllerStyle;
    BOOL _pageRenderMetricsEnabled;
    BOOL _requiresLocalBootstrapScript;
    BOOL _bootstrapScriptFallbackEnabled;
    CGFloat _bootstrapScriptFallbackMaximumAge;
    CGFloat _bootstrapScriptTimeoutInterval;
    BOOL _useTransientStorageForTests;
}


@property (readonly, nonatomic, getter=isBootstrapScriptFallbackEnabled) BOOL bootstrapScriptFallbackEnabled;
@property (readonly, nonatomic) CGFloat bootstrapScriptFallbackMaximumAge;
@property (readonly, nonatomic) CGFloat bootstrapScriptTimeoutInterval;
@property (readonly, nonatomic) BOOL pageRenderMetricsEnabled;
@property (readonly, nonatomic) BOOL requiresLocalBootstrapScript;
@property (readonly, nonatomic) BOOL supportsFullApplicationReload;
@property (readonly, nonatomic) NSInteger tabBarControllerStyle;
@property (readonly, nonatomic) BOOL useTransientStorageForTests;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif