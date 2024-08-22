// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _AFEXPERIMENTCONFIGURATIONMUTATION_H
#define _AFEXPERIMENTCONFIGURATIONMUTATION_H

@class NSString, NSArray;
@protocol AFExperimentConfigurationMutating;

#import <Foundation/Foundation.h>

#import "AFExperimentConfiguration.h"
#import "AFExperimentGroup.h"

@interface _AFExperimentConfigurationMutation : NSObject <AFExperimentConfigurationMutating>

 {
    AFExperimentConfiguration *_baseModel;
    NSInteger _type;
    NSString *_identifier;
    NSString *_version;
    AFExperimentGroup *_controlGroup;
    NSArray *_experimentGroups;
    NSString *_salt;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setControlGroup:(id)arg0 ;
-(void)setExperimentGroups:(id)arg0 ;
-(void)setIdentifier:(id)arg0 ;
-(void)setSalt:(id)arg0 ;
-(void)setType:(NSInteger)arg0 ;
-(void)setVersion:(id)arg0 ;


@end


#endif