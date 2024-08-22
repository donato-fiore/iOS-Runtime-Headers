// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCGENERICDEVICERUMBLEMODELBUILDER_H
#define GCGENERICDEVICERUMBLEMODELBUILDER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface GCGenericDeviceRumbleModelBuilder : NSObject

@property (copy, nonatomic) NSArray *actuators; // ivar: _actuators
@property (nonatomic) float dispatchFrequency; // ivar: _dispatchFrequency
@property (copy, nonatomic) NSArray *nodes; // ivar: _nodes
@property (copy, nonatomic) NSArray *outputs; // ivar: _outputs


+(Class)modelClass;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)build;
-(id)init;
-(void)initializeWithModel:(id)arg0 ;
-(void)reset;


@end


#endif