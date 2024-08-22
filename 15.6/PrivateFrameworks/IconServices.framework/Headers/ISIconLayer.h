// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISICONLAYER_H
#define ISICONLAYER_H

@class CALayer;
@protocol ISIconManagerObserver;


#import "ISIcon.h"

@interface ISIconLayer : CALayer <ISIconManagerObserver>

 {
    NSUInteger _shape;
}


@property (nonatomic) NSUInteger backgroundStyle; // ivar: _backgroundStyle
@property (nonatomic) NSUInteger badgeOptions; // ivar: _badgeOptions
@property (nonatomic) BOOL drawBorder; // ivar: _drawBorder
@property (retain, nonatomic) ISIcon *icon; // ivar: _icon
@property (nonatomic) NSUInteger iconShape; // ivar: _iconShape
@property (nonatomic) BOOL shouldApplyMask; // ivar: _shouldApplyMask
@property (nonatomic) NSUInteger variantOptions; // ivar: _variantOptions


-(id)init;
-(id)initWithIcon:(id)arg0 ;
-(void)iconManager:(id)arg0 didInvalidateIcons:(id)arg1 ;


@end


#endif