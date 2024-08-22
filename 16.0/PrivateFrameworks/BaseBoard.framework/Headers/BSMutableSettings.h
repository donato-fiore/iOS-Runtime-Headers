// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BSMUTABLESETTINGS_H
#define BSMUTABLESETTINGS_H



#import "BSSettings.h"

@interface BSMutableSettings : BSSettings



-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)applySettings:(id)arg0 ;
-(void)removeAllSettings;
-(void)setFlag:(NSInteger)arg0 forSetting:(NSUInteger)arg1 ;
-(void)setObject:(id)arg0 forSetting:(NSUInteger)arg1 ;


@end


#endif