// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TIINPUTMODEPREFERENCEPROVIDER_H
#define _TIINPUTMODEPREFERENCEPROVIDER_H

@protocol TIInputModePreferenceProvider;

#import <Foundation/Foundation.h>


@interface _TIInputModePreferenceProvider : NSObject <TIInputModePreferenceProvider>





-(id)defaultEnabledInputModesForCurrentLocale;
-(id)enabledInputModeIdentifiers;


@end


#endif