// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISEARCHBARAPPEARANCESTORAGE_H
#define _UISEARCHBARAPPEARANCESTORAGE_H

@class NSMutableDictionary, NSValue;

#import <Foundation/Foundation.h>

#import "UIImage.h"

@interface _UISearchBarAppearanceStorage : NSObject {
    NSMutableDictionary *searchFieldBackgroundImages;
    NSMutableDictionary *iconImages;
}


@property (retain, nonatomic) UIImage *scopeBarBackgroundImage; // ivar: scopeBarBackgroundImage
@property (retain, nonatomic) NSValue *searchFieldPositionAdjustment; // ivar: searchFieldPositionAdjustment
@property (retain, nonatomic) UIImage *separatorImage; // ivar: separatorImage


-(id)imageForIcon:(NSInteger)arg0 state:(NSUInteger)arg1 ;
-(id)searchFieldBackgroundImageForState:(NSUInteger)arg0 ;
-(void)setImage:(id)arg0 forIcon:(NSInteger)arg1 state:(NSUInteger)arg2 ;
-(void)setSearchFieldBackgroundImage:(id)arg0 forState:(NSUInteger)arg1 ;


@end


#endif