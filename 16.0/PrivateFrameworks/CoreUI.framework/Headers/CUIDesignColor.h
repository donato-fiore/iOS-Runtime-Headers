// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUIDESIGNCOLOR_H
#define CUIDESIGNCOLOR_H


#import <Foundation/Foundation.h>


@interface CUIDesignColor : NSObject

@property (readonly, nonatomic) int blendMode; // ivar: _blendMode
@property (readonly, nonatomic) *CGColor cgColor; // ivar: _cgColor
@property (readonly, nonatomic) NSInteger displayGamut; // ivar: _displayGamut


-(id)initWithColor:(struct CGColor *)arg0 blendMode:(int)arg1 displayGamut:(NSInteger)arg2 ;
-(void)dealloc;


@end


#endif