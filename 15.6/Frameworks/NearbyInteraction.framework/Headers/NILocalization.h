// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NILOCALIZATION_H
#define NILOCALIZATION_H


#import <Foundation/Foundation.h>


@interface NILocalization : NSObject



+(id)_niFrameworkBundle;
+(id)_niLocalizedStringFromBundle:(id)arg0 withKey:(id)arg1 ;
+(id)_niLocalizedStringFromFrameworkBundleWithKey:(id)arg0 ;
+(id)fallbackBundle;
+(id)fallbackBundleWithBundle:(id)arg0 ;
+(id)localizedBundle;
+(id)localizedBundleWithBundle:(id)arg0 ;


@end


#endif