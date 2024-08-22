// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVCONTENTRATINGBADGEMANAGER_H
#define _TVCONTENTRATINGBADGEMANAGER_H

@class NSDictionary, NSCache;

#import <Foundation/Foundation.h>


@interface _TVContentRatingBadgeManager : NSObject

@property (retain, nonatomic) NSDictionary *badgeDescriptors; // ivar: _badgeDescriptors
@property (nonatomic) BOOL cachesImages; // ivar: _cachesImages
@property (retain, nonatomic) NSCache *imageCache; // ivar: _imageCache


+(id)_badgeDescriptorLookupKeyWithRatingLabel:(id)arg0 inRatingSystem:(NSInteger)arg1 ;
+(id)_cleanedRatingLabel:(id)arg0 ;
+(id)_imageForUnknownRatingLabel:(id)arg0 ;
+(id)_imageLookupKeyWithRatingLabel:(id)arg0 inRatingSystem:(NSInteger)arg1 ;
+(id)sharedInstance;
+(void)_addImageDescriptorToDictionary:(id)arg0 ratingSystem:(NSInteger)arg1 ratingLabel:(id)arg2 resourceName:(id)arg3 isTemplatedImage:(BOOL)arg4 ;
-(BOOL)isTemplatedBadgeForContentRating:(id)arg0 ;
-(id)_badgeDescriptorForContentRating:(id)arg0 ;
-(id)_badgeDescriptorForRatingLabel:(id)arg0 inRatingSystem:(NSInteger)arg1 ;
-(id)badgeForContentRating:(id)arg0 drawUnknownRatingBadge:(BOOL)arg1 ;
-(id)badgeForRatingLabel:(id)arg0 inRatingSystem:(NSInteger)arg1 drawUnknownRatingBadge:(BOOL)arg2 ;


@end


#endif