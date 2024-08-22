// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPICTUREITEM_H
#define GEOPICTUREITEM_H

@class NSString;
@protocol GEOPictureItem, GEOMapItemPhoto;

#import <Foundation/Foundation.h>


@interface GEOPictureItem : NSObject <GEOPictureItem>



@property (readonly, nonatomic) NSObject<GEOMapItemPhoto> *photo; // ivar: _photo
@property (readonly, nonatomic) int pictureItemPhotoType; // ivar: _pictureItemPhotoType
@property (readonly, nonatomic) NSString *primaryText; // ivar: _primaryText
@property (readonly, nonatomic) NSString *secondaryText; // ivar: _secondaryText


-(id)init;
-(id)initWithPhoto:(id)arg0 pictureItemPhotoType:(int)arg1 primaryText:(id)arg2 secondaryText:(id)arg3 ;
-(id)initWithPictureItem:(id)arg0 ;


@end


#endif