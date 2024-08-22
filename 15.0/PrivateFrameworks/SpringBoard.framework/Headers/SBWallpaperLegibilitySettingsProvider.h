// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBWALLPAPERLEGIBILITYSETTINGSPROVIDER_H
#define SBWALLPAPERLEGIBILITYSETTINGSPROVIDER_H

@class NSString, _UILegibilitySettings;
@protocol SBWallpaperObserver, SBFLegibilitySettingsProvider, SBFLegibilitySettingsProviderDelegate;

#import <Foundation/Foundation.h>


@interface SBWallpaperLegibilitySettingsProvider : NSObject <SBWallpaperObserver, SBFLegibilitySettingsProvider>

 {
    NSInteger _variant;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBFLegibilitySettingsProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly) Class superclass;


-(id)initWithVariant:(NSInteger)arg0 ;
-(void)dealloc;
-(void)wallpaperDidChangeForVariant:(NSInteger)arg0 ;
-(void)wallpaperLegibilitySettingsDidChange:(id)arg0 forVariant:(NSInteger)arg1 ;


@end


#endif