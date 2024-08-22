// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSSTICKERBROWSERVIEWLAYOUTSPEC_H
#define MSSTICKERBROWSERVIEWLAYOUTSPEC_H


#import <Foundation/Foundation.h>


@interface MSStickerBrowserViewLayoutSpec : NSObject

@property (readonly, nonatomic) NSInteger interfaceOrientation; // ivar: _interfaceOrientation
@property (readonly, nonatomic) CGSize itemSize; // ivar: _itemSize
@property (readonly, nonatomic) CGFloat minimumInteritemSpacing;
@property (readonly, nonatomic) CGFloat minimumLineSpacing;
@property (readonly, nonatomic) UIEdgeInsets sectionInset;
@property (readonly, nonatomic) NSInteger stickerSize; // ivar: _stickerSize


+(id)specWithSizeClass:(NSInteger)arg0 interfaceOrientation:(NSInteger)arg1 ;
-(id)initWithSize:(NSInteger)arg0 interfaceOrientation:(NSInteger)arg1 ;


@end


#endif