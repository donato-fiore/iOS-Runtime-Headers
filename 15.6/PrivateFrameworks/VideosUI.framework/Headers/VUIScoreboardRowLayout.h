// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUISCOREBOARDROWLAYOUT_H
#define VUISCOREBOARDROWLAYOUT_H

@class UIColor;

#import <Foundation/Foundation.h>


@interface VUIScoreboardRowLayout : NSObject

@property (nonatomic) int backgroundBlendMode; // ivar: _backgroundBlendMode
@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (nonatomic) int separatorBlendMode; // ivar: _separatorBlendMode
@property (retain, nonatomic) UIColor *separatorColor; // ivar: _separatorColor


+(id)_backgroundColorForIdiom:(NSInteger)arg0 ;
+(id)_bottomLayoutForIdiom:(NSInteger)arg0 ;
+(id)_topRowLayoutForIdiom:(NSInteger)arg0 ;


@end


#endif