// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBFSINGLEPOSTERCONFIGURATIONFILTER_H
#define PBFSINGLEPOSTERCONFIGURATIONFILTER_H

@protocol PBFPosterConfigurationFiltering;

#import <Foundation/Foundation.h>


@interface PBFSinglePosterConfigurationFilter : NSObject <PBFPosterConfigurationFiltering>

 {
    ? configuration;
}




-(BOOL)shouldIncludePosterConfiguration:(id)arg0 inSwitcherConfiguration:(id)arg1 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 ;


@end


#endif