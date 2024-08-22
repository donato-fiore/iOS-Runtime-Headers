// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBUIPOSTERPORTALIMAGEPROVIDER_H
#define PBUIPOSTERPORTALIMAGEPROVIDER_H

@class NSString;
@protocol PBUIFakeBlurImageProviding;

#import <Foundation/Foundation.h>

#import "PBUIPosterWallpaperViewController.h"

@interface PBUIPosterPortalImageProvider : NSObject <PBUIFakeBlurImageProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PBUIPosterWallpaperViewController *rootObject; // ivar: _rootObject
@property (readonly) Class superclass;


-(BOOL)parallaxEnabledForVariant:(NSInteger)arg0 ;
-(BOOL)updateImageProviderView:(id)arg0 withImage:(id)arg1 ;
-(CGFloat)parallaxFactorForVariant:(NSInteger)arg0 ;
-(CGFloat)zoomFactorForVariant:(NSInteger)arg0 ;
-(id)imageForWallpaperStyle:(*NSInteger)arg0 variant:(NSInteger)arg1 traitCollection:(id)arg2 ;
-(id)initWithRootObject:(id)arg0 ;
-(id)newImageProviderView;


@end


#endif