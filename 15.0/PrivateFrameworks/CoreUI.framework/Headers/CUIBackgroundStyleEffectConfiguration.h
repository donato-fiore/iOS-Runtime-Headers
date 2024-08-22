// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUIBACKGROUNDSTYLEEFFECTCONFIGURATION_H
#define CUIBACKGROUNDSTYLEEFFECTCONFIGURATION_H

@class NSString;


#import "CUIStyleEffectConfiguration.h"

@interface CUIBackgroundStyleEffectConfiguration : CUIStyleEffectConfiguration {
    int _shouldRespectOutputBlending;
}


@property (copy, nonatomic) NSString *backgroundType; // ivar: _backgroundType
@property (nonatomic) BOOL effectShowsValue; // ivar: _effectShowsValue


-(BOOL)shouldIgnoreForegroundColor;
-(BOOL)shouldRespectOutputBlending;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)setSelectionType:(NSInteger)arg0 ;
-(void)setShouldRespectOutputBlending:(BOOL)arg0 ;


@end


#endif