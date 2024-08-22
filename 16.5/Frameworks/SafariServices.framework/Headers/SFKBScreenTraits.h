// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFKBSCREENTRAITS_H
#define SFKBSCREENTRAITS_H

@class UIKBScreenTraits;



@interface SFKBScreenTraits : UIKBScreenTraits

@property (nonatomic) BOOL sf_isKeyboardMinorEdgeWidth; // ivar: _sf_isKeyboardMinorEdgeWidth


+(id)traitsWithScreen:(id)arg0 orientation:(NSInteger)arg1 ;
-(BOOL)isKeyboardMinorEdgeWidth;


@end


#endif