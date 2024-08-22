// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICOLLECTIONLAYOUTLISTATTRIBUTES_H
#define _UICOLLECTIONLAYOUTLISTATTRIBUTES_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "_UICollectionLayoutListSectionData.h"
#import "UIColor.h"
#import "UIVisualEffect.h"

@interface _UICollectionLayoutListAttributes : NSObject <NSCopying>

 {
    ? _flags;
    NSInteger _appearanceStyle;
    NSUInteger _backgroundMaskedCorners;
    _UICollectionLayoutListSectionData *_sectionData;
    UIColor *_sectionBackgroundColor;
    UIColor *_separatorBackgroundColor;
    UIVisualEffect *_separatorVisualEffect;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif