// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICOLLECTIONVIEWPREFETCHITEM_H
#define _UICOLLECTIONVIEWPREFETCHITEM_H


#import <Foundation/Foundation.h>

#import "UICollectionViewLayoutAttributes.h"
#import "UICollectionReusableView.h"

@interface _UICollectionViewPrefetchItem : NSObject {
    ? _flags;
    UICollectionViewLayoutAttributes *_attributes;
}


@property (retain, nonatomic) UICollectionReusableView *view; // ivar: _view


-(id)description;


@end


#endif