// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PETAGGDLOGGINGOUTLET_H
#define PETAGGDLOGGINGOUTLET_H

@class NSString;
@protocol PETLoggingOutlet;

#import <Foundation/Foundation.h>


@interface PETAggdLoggingOutlet : NSObject <PETLoggingOutlet>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)logDoubleValue:(CGFloat)arg0 forEvent:(id)arg1 featureId:(id)arg2 stringifiedProperties:(id)arg3 metaData:(id)arg4 ;
-(void)logErrorForEvent:(id)arg0 featureId:(id)arg1 reason:(id)arg2 ;
-(void)logUnsignedIntegerValue:(NSUInteger)arg0 forEvent:(id)arg1 featureId:(id)arg2 stringifiedProperties:(id)arg3 metaData:(id)arg4 ;
-(void)setUnsignedIntegerValue:(NSUInteger)arg0 forEvent:(id)arg1 featureId:(id)arg2 stringifiedProperties:(id)arg3 metaData:(id)arg4 ;


@end


#endif