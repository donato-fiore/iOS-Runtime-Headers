// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HPSBOOLEANSETTING_H
#define HPSBOOLEANSETTING_H



#import "HPSSetting.h"

@interface HPSBooleanSetting : HPSSetting

@property (readonly, nonatomic) BOOL booleanValue;


+(Class)valueClass;
+(id)settingWithKeyPath:(id)arg0 booleanValue:(BOOL)arg1 ;
-(id)initWithKeyPath:(id)arg0 booleanValue:(BOOL)arg1 ;


@end


#endif