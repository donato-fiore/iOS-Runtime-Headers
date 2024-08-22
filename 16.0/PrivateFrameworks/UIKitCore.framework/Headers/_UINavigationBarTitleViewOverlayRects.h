// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UINAVIGATIONBARTITLEVIEWOVERLAYRECTS_H
#define _UINAVIGATIONBARTITLEVIEWOVERLAYRECTS_H


#import <Foundation/Foundation.h>


@interface _UINavigationBarTitleViewOverlayRects : NSObject

@property (nonatomic) CGRect backButtonRect; // ivar: _backButtonRect
@property (nonatomic) CGRect centerItemsRect; // ivar: _centerItemsRect
@property (nonatomic) CGRect leadingItemsRect; // ivar: _leadingItemsRect
@property (nonatomic) CGRect leadingStaticItemRect; // ivar: _leadingStaticItemRect
@property (nonatomic) CGRect titleRect; // ivar: _titleRect
@property (nonatomic) CGRect trailingItemsRect; // ivar: _trailingItemsRect
@property (nonatomic) CGRect trailingStaticItemRect; // ivar: _trailingStaticItemRect


-(id)asArray;
-(id)description;
-(id)init;
-(void)reset;


@end


#endif