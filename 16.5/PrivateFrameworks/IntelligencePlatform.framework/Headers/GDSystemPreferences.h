// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GDSYSTEMPREFERENCES_H
#define GDSYSTEMPREFERENCES_H


#import <Foundation/Foundation.h>


@interface GDSystemPreferences : NSObject



+(BOOL)systemPersonalizationDataCollectionAllowed;
+(void)updateSystemPersonalizationDataCollectionAllowed:(BOOL)arg0 ;


@end


#endif