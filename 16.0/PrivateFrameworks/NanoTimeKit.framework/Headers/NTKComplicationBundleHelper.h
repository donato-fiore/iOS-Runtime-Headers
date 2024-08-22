// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKCOMPLICATIONBUNDLEHELPER_H
#define NTKCOMPLICATIONBUNDLEHELPER_H


#import <Foundation/Foundation.h>


@interface NTKComplicationBundleHelper : NSObject



+(id)_complicationFamilyToTemplateFileNameMapping:(id)arg0 ;
+(id)_templateForFamily:(NSInteger)arg0 bundle:(id)arg1 ;
+(id)localizedComplicationDescriptionForFamily:(NSInteger)arg0 bundle:(id)arg1 localization:(id)arg2 ;
+(id)localizedComplicationTemplateForFamily:(NSInteger)arg0 bundle:(id)arg1 localization:(id)arg2 ;
+(id)localizedComplicationTemplateForTemplate:(id)arg0 bundle:(id)arg1 localization:(id)arg2 ;
+(id)supportedComplicationFamiliesForBundle:(id)arg0 ;


@end


#endif