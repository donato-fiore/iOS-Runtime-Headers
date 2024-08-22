// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LPAUDIOPLAYBUTTONTHEME_H
#define LPAUDIOPLAYBUTTONTHEME_H

@class UIColor;

#import <Foundation/Foundation.h>


@interface LPAudioPlayButtonTheme : NSObject

@property (readonly, retain, nonatomic) UIColor *keyColor; // ivar: _keyColor
@property (readonly, retain, nonatomic) UIColor *outerBorderColor; // ivar: _outerBorderColor
@property (readonly, retain, nonatomic) UIColor *secondaryColor; // ivar: _secondaryColor
@property (readonly, nonatomic) BOOL useInvertedInactiveState; // ivar: _useInvertedInactiveState


-(id)initWithKeyColor:(id)arg0 secondaryColor:(id)arg1 outerBorderColor:(id)arg2 useInvertedInactiveState:(BOOL)arg3 ;


@end


#endif