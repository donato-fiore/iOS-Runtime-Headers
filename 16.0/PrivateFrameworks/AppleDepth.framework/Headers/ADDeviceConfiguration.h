// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ADDEVICECONFIGURATION_H
#define ADDEVICECONFIGURATION_H

@class NSUserDefaults, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ADDeviceConfiguration : NSObject {
    NSUserDefaults *_globalUserDefaults;
    NSUserDefaults *_appleDepthUserDefaults;
    NSMutableDictionary *_currentDefaults;
}




+(BOOL)boolForKey:(id)arg0 ;
+(CGFloat)doubleForKey:(id)arg0 ;
+(NSInteger)integerForKey:(id)arg0 ;
+(float)floatForKey:(id)arg0 ;
+(id)getDefaultConfiguration;
+(id)listForKey:(id)arg0 ;
+(id)numberForKey:(id)arg0 ;
+(id)sharedConfiguration;
+(id)stringForKey:(id)arg0 ;
-(BOOL)createPropertyForKey:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)updateValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif