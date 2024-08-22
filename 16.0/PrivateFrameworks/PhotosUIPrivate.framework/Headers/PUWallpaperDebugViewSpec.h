// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUWALLPAPERDEBUGVIEWSPEC_H
#define PUWALLPAPERDEBUGVIEWSPEC_H


#import <Foundation/Foundation.h>


@interface PUWallpaperDebugViewSpec : NSObject

@property (readonly, nonatomic) UIEdgeInsets collectionViewContentInsets;
@property (readonly, nonatomic) UIEdgeInsets headerInsets;
@property (readonly, nonatomic) CGSize headerReferenceSize;
@property (readonly, nonatomic) CGSize itemSize;
@property (readonly, nonatomic) NSUInteger viewMode; // ivar: _viewMode


-(id)initWithViewMode:(NSUInteger)arg0 ;


@end


#endif