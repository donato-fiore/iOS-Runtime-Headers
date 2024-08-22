// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUBROWSECATEGORYITEM_H
#define MUBROWSECATEGORYITEM_H

@class UIImage, GEOSearchCategory, NSString;

#import <Foundation/Foundation.h>


@interface MUBrowseCategoryItem : NSObject

@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) GEOSearchCategory *searchCategory; // ivar: _searchCategory
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(id)imageWithSearchCategory:(id)arg0 nightMode:(BOOL)arg1 ;
-(id)initWithCategory:(id)arg0 nightMode:(BOOL)arg1 ;


@end


#endif