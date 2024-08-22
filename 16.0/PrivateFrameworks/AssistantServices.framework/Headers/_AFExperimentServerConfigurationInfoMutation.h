// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _AFEXPERIMENTSERVERCONFIGURATIONINFOMUTATION_H
#define _AFEXPERIMENTSERVERCONFIGURATIONINFOMUTATION_H

@class NSString, NSURL;
@protocol AFExperimentServerConfigurationInfoMutating;

#import <Foundation/Foundation.h>

#import "AFExperimentServerConfigurationInfo.h"

@interface _AFExperimentServerConfigurationInfoMutation : NSObject <AFExperimentServerConfigurationInfoMutating>

 {
    AFExperimentServerConfigurationInfo *_base;
    NSString *_configurationIdentifier;
    NSURL *_configurationURL;
    CGFloat _maxTimeToSync;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isDirty;
-(CGFloat)getMaxTimeToSync;
-(id)getConfigurationIdentifier;
-(id)getConfigurationURL;
-(id)initWithBase:(id)arg0 ;
-(void)setConfigurationIdentifier:(id)arg0 ;
-(void)setConfigurationURL:(id)arg0 ;
-(void)setMaxTimeToSync:(CGFloat)arg0 ;


@end


#endif