// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFURLLABELACCESSORYITEM_H
#define _SFURLLABELACCESSORYITEM_H

@class UIVisualEffectView, UIImageView, UIView;

#import <Foundation/Foundation.h>


@interface _SFURLLabelAccessoryItem : NSObject

@property (nonatomic) BOOL centerAligned; // ivar: _centerAligned
@property (retain, nonatomic) UIVisualEffectView *effectView; // ivar: _effectView
@property (nonatomic) CGRect frame;
@property (nonatomic) CGSize size; // ivar: _size
@property (nonatomic) CGFloat spacing; // ivar: _spacing
@property (retain, nonatomic) UIVisualEffectView *squishedEffectView; // ivar: _squishedEffectView
@property (retain, nonatomic) UIImageView *squishedView; // ivar: _squishedView
@property (retain, nonatomic) UIImageView *view; // ivar: _view
@property (readonly, nonatomic) UIView *viewForLayout;




@end


#endif