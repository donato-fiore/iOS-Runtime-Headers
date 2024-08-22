// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSSARTICLEINTERNAL_H
#define NSSARTICLEINTERNAL_H

@class NSDate, UIImage, NSString;
@protocol NSCoding;

#import <Foundation/Foundation.h>


@interface NSSArticleInternal : NSObject <NSCoding>



@property (readonly, nonatomic) NSDate *publishDate; // ivar: _publishDate
@property (readonly, nonatomic) UIImage *publisherLogoImage; // ivar: _publisherLogoImage
@property (readonly, nonatomic) UIImage *publisherLogoMaskImage; // ivar: _publisherLogoMaskImage
@property (readonly, nonatomic) NSString *publisherName; // ivar: _publisherName
@property (readonly, nonatomic) NSString *shortExcerpt; // ivar: _shortExcerpt
@property (readonly, nonatomic) UIImage *thumbnailImage; // ivar: _thumbnailImage
@property (readonly, nonatomic) NSString *title; // ivar: _title


+(BOOL)coreSpotlightIdentifierRepresentsArticleIdentifier:(id)arg0 ;
+(id)imageWithURL:(id)arg0 ;
+(void)_articleFromCoreSpotlightIdentifier:(id)arg0 domain:(id)arg1 completion:(id)arg2 ;
+(void)articleFromCoreSpotlightIdentifier:(id)arg0 completion:(id)arg1 ;
+(void)articleFromNotification:(id)arg0 completion:(id)arg1 ;
+(void)articleFromNotificationUserInfo:(id)arg0 thumbnailFileURL:(id)arg1 publisherLogoFileURL:(id)arg2 publisherLogoMaskFileURL:(id)arg3 completion:(id)arg4 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithThumbnailImage:(id)arg0 title:(id)arg1 shortExcerpt:(id)arg2 publishDate:(id)arg3 publisherName:(id)arg4 publisherLogoImage:(id)arg5 publisherLogoMaskImage:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif