// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAABTESTEXPERIMENT_H
#define SAABTESTEXPERIMENT_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAABTestExperiment : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *deploymentId;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *experimentId;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *treatmentId;


-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif