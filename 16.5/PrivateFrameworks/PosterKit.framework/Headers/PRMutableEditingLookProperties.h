// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRMUTABLEEDITINGLOOKPROPERTIES_H
#define PRMUTABLEEDITINGLOOKPROPERTIES_H



#import "PREditingLookProperties.h"
#import "PRTimeFontConfiguration.h"
#import "PRPosterColor.h"

@interface PRMutableEditingLookProperties : PREditingLookProperties

@property (copy, nonatomic) PRTimeFontConfiguration *timeFontConfiguration; // ivar: _timeFontConfiguration
@property (copy, nonatomic) PRPosterColor *titlePosterColor; // ivar: _titlePosterColor


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithTimeFontConfiguration:(id)arg0 titlePosterColor:(id)arg1 ;


@end


#endif