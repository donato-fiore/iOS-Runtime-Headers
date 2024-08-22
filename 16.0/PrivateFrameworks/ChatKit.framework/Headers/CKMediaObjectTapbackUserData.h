// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKMEDIAOBJECTTAPBACKUSERDATA_H
#define CKMEDIAOBJECTTAPBACKUSERDATA_H

@class UIView<CKGradientReferenceView>;

#import <Foundation/Foundation.h>

#import "CKMediaObjectBackedAsset.h"

@interface CKMediaObjectTapbackUserData : NSObject

@property (retain, nonatomic) CKMediaObjectBackedAsset *asset; // ivar: _asset
@property (nonatomic, getter=isDisplayedInGridView) BOOL displayedInGridView; // ivar: _displayedInGridView
@property (weak, nonatomic) UIView<CKGradientReferenceView> *gradientReferenceView; // ivar: _gradientReferenceView
@property (nonatomic) BOOL invertTailDirection; // ivar: _invertTailDirection
@property (nonatomic) BOOL shouldAnimate; // ivar: _shouldAnimate


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif