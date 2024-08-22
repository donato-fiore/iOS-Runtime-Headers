// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIKBSPLITTRAITS_H
#define UIKBSPLITTRAITS_H


#import <Foundation/Foundation.h>


@interface UIKBSplitTraits : NSObject

@property (readonly, nonatomic) NSUInteger corners; // ivar: _corners
@property (readonly, nonatomic) CGRect leftFrame; // ivar: _leftFrame
@property (readonly, nonatomic) CGRect rightFrame; // ivar: _rightFrame


+(id)traitsWithLeftFrame:(struct CGRect )arg0 rightFrame:(struct CGRect )arg1 corners:(NSUInteger)arg2 ;
-(id)initWithLeftFrame:(struct CGRect )arg0 rightFrame:(struct CGRect )arg1 corners:(NSUInteger)arg2 ;


@end


#endif