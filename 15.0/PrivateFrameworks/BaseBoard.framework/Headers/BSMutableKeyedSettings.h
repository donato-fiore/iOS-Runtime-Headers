// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BSMUTABLEKEYEDSETTINGS_H
#define BSMUTABLEKEYEDSETTINGS_H



#import "BSKeyedSettings.h"

@interface BSMutableKeyedSettings : BSKeyedSettings



-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)applySettings:(id)arg0 ;
-(void)removeAllSettings;
-(void)setFlag:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif