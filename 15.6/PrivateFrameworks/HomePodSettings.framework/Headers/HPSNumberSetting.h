// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HPSNUMBERSETTING_H
#define HPSNUMBERSETTING_H

@class NSNumber;


#import "HPSSetting.h"

@interface HPSNumberSetting : HPSSetting

@property (readonly, nonatomic) CGFloat doubleValue;
@property (readonly, nonatomic) float floatValue;
@property (readonly, nonatomic) NSInteger integerValue;
@property (readonly, copy, nonatomic) NSNumber *numberValue;


+(Class)valueClass;
+(id)settingWithKeyPath:(id)arg0 numberValue:(id)arg1 ;
-(id)initWithKeyPath:(id)arg0 numberValue:(id)arg1 ;


@end


#endif