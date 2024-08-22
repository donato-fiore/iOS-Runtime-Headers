// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HPSSTRINGSETTING_H
#define HPSSTRINGSETTING_H

@class NSString;


#import "HPSSetting.h"

@interface HPSStringSetting : HPSSetting

@property (readonly, copy, nonatomic) NSString *stringValue;


+(Class)valueClass;
+(id)settingWithKeyPath:(id)arg0 stringValue:(id)arg1 ;
-(id)initWithKeyPath:(id)arg0 stringValue:(id)arg1 ;


@end


#endif