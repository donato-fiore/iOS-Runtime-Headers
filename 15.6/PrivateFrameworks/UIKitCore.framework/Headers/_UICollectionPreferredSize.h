// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICOLLECTIONPREFERREDSIZE_H
#define _UICOLLECTIONPREFERREDSIZE_H


#import <Foundation/Foundation.h>

#import "NSCollectionLayoutSize.h"

@interface _UICollectionPreferredSize : NSObject {
    CGSize _originalSize;
    CGSize _fittingSize;
    NSCollectionLayoutSize *_layoutSize;
    BOOL _preferredSizeDirty;
    id *_additionalData;
}




-(id)description;


@end


#endif