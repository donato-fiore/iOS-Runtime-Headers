// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHCLEANUPSPACESSTEP_H
#define CHCLEANUPSPACESSTEP_H

@class NSLocale;


#import "CHPostprocessingStep.h"

@interface CHCleanUpSpacesStep : CHPostprocessingStep

@property (retain, nonatomic) NSLocale *locale; // ivar: _locale


-(id)cleanUpSpacesInToken:(id)arg0 leftContext:(id)arg1 ;
-(id)initWithLocale:(id)arg0 ;
-(id)process:(id)arg0 ;
-(void)dealloc;


@end


#endif