// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKVIDEOLISTINGFACTORY_H
#define NTKVIDEOLISTINGFACTORY_H

@class CLKDevice, NSArray, NSMutableSet;

#import <Foundation/Foundation.h>


@interface NTKVideoListingFactory : NSObject {
    CLKDevice *_device;
    NSArray *_butterflyListings;
    NSArray *_jellyfishListings;
    NSArray *_flowerListings;
    NSMutableSet *_assetListings;
}




+(id)sharedInstanceForDevice:(id)arg0 ;
-(NSInteger)behaviorForTheme:(NSUInteger)arg0 ;
-(id)_initLibraryForDevice:(id)arg0 ;
-(id)_listingWithTheme:(NSUInteger)arg0 variant:(NSInteger)arg1 tag:(NSUInteger)arg2 ;
-(id)_listingsWithTheme:(NSUInteger)arg0 ;
-(id)_listingsWithTheme:(NSUInteger)arg0 notMatchingVariant:(NSInteger)arg1 ;
-(id)_listingsWithTheme:(NSUInteger)arg0 notMatchingVariant:(NSInteger)arg1 matchingTag:(NSUInteger)arg2 ;
-(id)_listingsWithTheme:(NSUInteger)arg0 variant:(NSInteger)arg1 ;
-(id)_listingsWithTheme:(NSUInteger)arg0 variant:(NSInteger)arg1 tag:(NSUInteger)arg2 notMatchingClip:(NSInteger)arg3 ;
-(id)anyListingWithTheme:(NSUInteger)arg0 notMatchingVariant:(NSInteger)arg1 matchingTag:(NSUInteger)arg2 ;
-(id)anyListingWithTheme:(NSUInteger)arg0 variant:(NSInteger)arg1 tag:(NSUInteger)arg2 ;
-(id)anyListingWithTheme:(NSUInteger)arg0 variant:(NSInteger)arg1 tag:(NSUInteger)arg2 notMatchingClip:(NSInteger)arg3 ;
-(id)defaultListingWithTheme:(NSUInteger)arg0 ;
-(id)posterImageWithTheme:(NSUInteger)arg0 ;
-(void)discardAssets;
-(void)setVideoListingHasAssets:(id)arg0 ;


@end


#endif