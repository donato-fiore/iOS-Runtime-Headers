// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HPSSTRINGSETTING_H
#define HPSSTRINGSETTING_H

@class NSString;


#import "HPSSetting.h"

@interface HPSStringSetting : HPSSetting

@property (readonly, copy, nonatomic) NSString *stringValue;


+(Class)valueClass;
+(id)settingWithKeyPath:(id)arg0 stringValue:(id)arg1 ;
-(id)homeAdapterLegacySettingValue;
-(id)initWithKeyPath:(id)arg0 stringValue:(id)arg1 ;


@end


#endif