// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUNAMEDWALLPAPERFACTORY_H
#define HUNAMEDWALLPAPERFACTORY_H

@class NSString;
@protocol HFNamedWallpaperSource;

#import <Foundation/Foundation.h>


@interface HUNamedWallpaperFactory : NSObject <HFNamedWallpaperSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_defaultBlackWallpaperImage;
+(id)_gradientWallpaperImageForIdentifier:(id)arg0 ;
-(id)allWallpapersForCollection:(NSInteger)arg0 ;
-(id)defaultWallpaperForCollection:(NSInteger)arg0 ;
-(id)imageForWallpaper:(id)arg0 ;


@end


#endif