// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _AFEXPERIMENTCONTEXTMUTATION_H
#define _AFEXPERIMENTCONTEXTMUTATION_H

@class NSDictionary, NSString;
@protocol AFExperimentContextMutating;

#import <Foundation/Foundation.h>

#import "AFExperimentContext.h"

@interface _AFExperimentContextMutation : NSObject <AFExperimentContextMutating>

 {
    AFExperimentContext *_base;
    NSDictionary *_experimentsByConfigurationIdentifier;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isDirty;
-(id)getExperimentsByConfigurationIdentifier;
-(id)initWithBase:(id)arg0 ;
-(void)setExperimentsByConfigurationIdentifier:(id)arg0 ;


@end


#endif