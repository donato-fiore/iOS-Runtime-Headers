// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSBOOKMARKFOLDERTOUCHICONPROVIDERINFO_H
#define WBSBOOKMARKFOLDERTOUCHICONPROVIDERINFO_H

@class NSArray, UIImage;

#import <Foundation/Foundation.h>


@interface WBSBookmarkFolderTouchIconProviderInfo : NSObject

@property (readonly, copy, nonatomic) NSArray *backgroundColors; // ivar: _backgroundColors
@property (readonly, copy, nonatomic) NSArray *thumbnailImages; // ivar: _thumbnailImages
@property (readonly, nonatomic) UIImage *touchIcon; // ivar: _touchIcon


+(id)new;
-(id)init;
-(id)initWithThumbnailImages:(id)arg0 backgroundColors:(id)arg1 touchIcon:(id)arg2 ;


@end


#endif