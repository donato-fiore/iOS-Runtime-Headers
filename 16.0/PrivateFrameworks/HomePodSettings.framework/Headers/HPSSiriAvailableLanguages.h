// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HPSSIRIAVAILABLELANGUAGES_H
#define HPSSIRIAVAILABLELANGUAGES_H

@class NSArray;


#import "HPSSetting.h"

@interface HPSSiriAvailableLanguages : HPSSetting

@property (readonly, copy, nonatomic) NSArray *languages;


+(BOOL)supportsSecureCoding;
+(id)valueClasses;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeyPath:(id)arg0 languages:(id)arg1 ;


@end


#endif