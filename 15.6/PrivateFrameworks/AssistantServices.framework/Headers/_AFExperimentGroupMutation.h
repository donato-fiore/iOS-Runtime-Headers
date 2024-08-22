// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _AFEXPERIMENTGROUPMUTATION_H
#define _AFEXPERIMENTGROUPMUTATION_H

@class NSString, NSDictionary;
@protocol AFExperimentGroupMutating;

#import <Foundation/Foundation.h>

#import "AFExperimentGroup.h"

@interface _AFExperimentGroupMutation : NSObject <AFExperimentGroupMutating>

 {
    AFExperimentGroup *_baseModel;
    NSString *_identifier;
    NSUInteger _allocation;
    NSDictionary *_properties;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setAllocation:(NSUInteger)arg0 ;
-(void)setIdentifier:(id)arg0 ;
-(void)setProperties:(id)arg0 ;


@end


#endif