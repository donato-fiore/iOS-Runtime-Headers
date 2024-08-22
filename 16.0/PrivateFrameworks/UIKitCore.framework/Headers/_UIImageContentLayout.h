// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIIMAGECONTENTLAYOUT_H
#define _UIIMAGECONTENTLAYOUT_H


#import <Foundation/Foundation.h>

#import "UIColor.h"

@interface _UIImageContentLayout : NSObject {
    ? _flags;
    id *_contentInfoGenerator;
    ? _contentInfo;
    CGFloat _baselineOffsetFromTop;
}


@property (readonly, nonatomic) CGFloat baselineOffsetFromBottom; // ivar: _baselineOffsetFromBottom
@property (readonly, nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (readonly, nonatomic) id *contents;
@property (readonly, nonatomic) UIColor *contentsMultiplyColor;
@property (readonly, nonatomic) CGFloat contentsScaleFactor; // ivar: _contentsScaleFactor
@property (readonly, nonatomic) CGAffineTransform contentsTransform; // ivar: _contentsTransform


+(id)layoutForSource:(id)arg0 inTarget:(id)arg1 withSize:(struct CGSize )arg2 ;
-(BOOL)hasContents;
-(id)description;
-(void)drawInContext:(struct CGContext *)arg0 ;


@end


#endif