// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBFACTIVEPOSTERCONFIGURATIONFILTER_H
#define PBFACTIVEPOSTERCONFIGURATIONFILTER_H

@protocol PBFPosterConfigurationFiltering;

#import <Foundation/Foundation.h>


@interface PBFActivePosterConfigurationFilter : NSObject <PBFPosterConfigurationFiltering>





-(BOOL)shouldIncludePosterConfiguration:(id)arg0 inSwitcherConfiguration:(id)arg1 ;


@end


#endif