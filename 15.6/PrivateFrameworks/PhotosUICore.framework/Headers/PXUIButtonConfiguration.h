// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXUIBUTTONCONFIGURATION_H
#define PXUIBUTTONCONFIGURATION_H


#import <Foundation/Foundation.h>


@interface PXUIButtonConfiguration : NSObject

@property (nonatomic) BOOL allowAnimatedHighlighting; // ivar: _allowAnimatedHighlighting
@property (nonatomic) NSInteger cursorEffect; // ivar: _cursorEffect
@property (nonatomic) UIEdgeInsets hitTestOutset; // ivar: _hitTestOutset


+(id)configurationWithCursorEffect:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif