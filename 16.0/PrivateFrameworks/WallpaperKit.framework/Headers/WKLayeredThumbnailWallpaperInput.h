// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKLAYEREDTHUMBNAILWALLPAPERINPUT_H
#define WKLAYEREDTHUMBNAILWALLPAPERINPUT_H

@class NSURL, NSString, NADescriptionBuilder;
@protocol WKDescribable, NAIdentifiable, NSCopying;

#import <Foundation/Foundation.h>


@interface WKLayeredThumbnailWallpaperInput : NSObject <WKDescribable, NAIdentifiable, NSCopying>



@property (readonly, copy, nonatomic) NSURL *backgroundThumbnailImageURL; // ivar: _backgroundThumbnailImageURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *description;
@property (readonly, nonatomic) id *descriptionBuilderBlock;
@property (readonly, copy, nonatomic) NSURL *floatingThumbnailImageURL; // ivar: _floatingThumbnailImageURL
@property (readonly, copy, nonatomic) NSURL *foregroundThumbnailImageURL; // ivar: _foregroundThumbnailImageURL
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NADescriptionBuilder *wk_descriptionBuilder;


+(id)na_identity;
+(id)new;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBackgroundThumbnailImageURL:(id)arg0 foregroundThumbnailImageURL:(id)arg1 floatingThumbnailImageURL:(id)arg2 ;


@end


#endif