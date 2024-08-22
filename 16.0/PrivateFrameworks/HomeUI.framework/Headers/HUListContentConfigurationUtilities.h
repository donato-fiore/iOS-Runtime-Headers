// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HULISTCONTENTCONFIGURATIONUTILITIES_H
#define HULISTCONTENTCONFIGURATIONUTILITIES_H


#import <Foundation/Foundation.h>


@interface HUListContentConfigurationUtilities : NSObject



+(id)buttonStyleConfigurationForItem:(id)arg0 isDestructive:(BOOL)arg1 ;
+(id)instructionsConfigurationForItem:(id)arg0 ;
+(id)labelConfiguration:(id)arg0 forItem:(id)arg1 ;
+(id)labelDefaultConfigurationForItem:(id)arg0 ;
+(void)_setupCachedConfigurations;


@end


#endif