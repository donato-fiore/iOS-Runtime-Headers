// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOCAPTIONEDPHOTOALBUM_H
#define GEOCAPTIONEDPHOTOALBUM_H

@class NSMapTable, NSString, NSArray;

#import <Foundation/Foundation.h>

#import "GEOPDCategorizedPhotos.h"

@interface GEOCaptionedPhotoAlbum : NSObject {
    GEOPDCategorizedPhotos *_categorizedPhotos;
    NSMapTable *_attributionMap;
}


@property (readonly, nonatomic) NSString *categoryId;
@property (readonly, nonatomic) NSString *categoryName;
@property (readonly, nonatomic) NSArray *photoList; // ivar: _photoList
@property (readonly, nonatomic) NSUInteger totalNumberOfPhotosAvailable;


-(id)description;
-(id)initWithCaptionedPhotoCategory:(id)arg0 attributionMap:(id)arg1 ;
-(void)_buildPhotoList;


@end


#endif