// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFWALLPAPERSLICE_H
#define HFWALLPAPERSLICE_H

@class NSString, UIImage;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HFWallpaperSlice : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) NSInteger variant; // ivar: _variant


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSlicedFromWallpaper:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithType:(NSInteger)arg0 variant:(NSInteger)arg1 identifier:(id)arg2 image:(id)arg3 ;


@end


#endif