// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKBROWSECATEGORYITEM_H
#define MKBROWSECATEGORYITEM_H

@class UIImage, GEOSearchCategory, NSString;

#import <Foundation/Foundation.h>


@interface MKBrowseCategoryItem : NSObject

@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) GEOSearchCategory *searchCategory; // ivar: _searchCategory
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(id)imageWithSearchCategory:(id)arg0 nightMode:(BOOL)arg1 ;
-(id)initWithCategory:(id)arg0 nightMode:(BOOL)arg1 ;


@end


#endif