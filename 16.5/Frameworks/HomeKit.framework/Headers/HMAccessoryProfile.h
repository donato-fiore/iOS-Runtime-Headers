// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMACCESSORYPROFILE_H
#define HMACCESSORYPROFILE_H

@class NSString, NSUUID, NSArray;
@protocol HMObjectMerge;

#import <Foundation/Foundation.h>

#import "HMAccessory.h"
#import "_HMAccessoryProfile.h"

@interface HMAccessoryProfile : NSObject <HMObjectMerge>



@property (readonly, weak, nonatomic) HMAccessory *accessory;
@property (readonly, nonatomic) _HMAccessoryProfile *accessoryProfile; // ivar: _accessoryProfile
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *profileUniqueIdentifier;
@property (readonly, nonatomic) NSArray *services;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSUUID *uuid;


-(BOOL)_mergeWithNewObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)assistantIdentifier;
-(id)initWithAccessoryProfile:(id)arg0 ;
-(void)handleRuntimeStateUpdate:(id)arg0 ;
-(void)recomputeAssistantIdentifier;
-(void)refreshStateWithCompletionHandler:(id)arg0 ;


@end


#endif