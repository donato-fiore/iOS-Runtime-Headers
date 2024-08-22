// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REFEATURETRANSFORMER_H
#define REFEATURETRANSFORMER_H

@class NSString;
@protocol NSCopying, REFeatureTransformerInvalidationDelegate;

#import <Foundation/Foundation.h>

#import "REPriorityQueue.h"
#import "REUpNextTimer.h"

@interface REFeatureTransformer : NSObject <NSCopying>

 {
    REPriorityQueue *_scheduledUpdates;
    REUpNextTimer *_updateTimer;
    id<REFeatureTransformerInvalidationDelegate> *_invalidationDelegate;
}


@property (copy, nonatomic) NSString *name; // ivar: _name


+(BOOL)supportsInvalidation;
+(BOOL)supportsPersistence;
+(id)binaryTransformerWithThreshold:(id)arg0 ;
+(id)bucketTransformerWithBitWidth:(NSUInteger)arg0 ;
+(id)bucketTransformerWithCount:(NSUInteger)arg0 minValue:(id)arg1 maxValue:(id)arg2 ;
+(id)changedTransform;
+(id)changedTransformWithImpulseDuration:(CGFloat)arg0 ;
+(id)customCategoricalTransformerWithName:(id)arg0 block:(id)arg1 ;
+(id)customCategoricalTransformerWithName:(id)arg0 featureCount:(NSUInteger)arg1 transformation:(id)arg2 ;
+(id)customTransformerWithName:(id)arg0 outputType:(NSUInteger)arg1 block:(id)arg2 ;
+(id)customTransformerWithName:(id)arg0 outputType:(NSUInteger)arg1 featureCount:(NSUInteger)arg2 transformation:(id)arg3 ;
+(id)featureTransformerClasses;
+(id)functionName;
+(id)hashTransform;
+(id)logTransformerWithBase:(id)arg0 ;
+(id)maskAndShiftTransformWithStartIndex:(NSUInteger)arg0 endIndex:(NSUInteger)arg1 ;
+(id)maskTransformWithWidth:(NSUInteger)arg0 ;
+(id)recentTransformerWithCount:(NSUInteger)arg0 ;
+(id)roundTransformer;
-(BOOL)readFromURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)writeToURL:(id)arg0 error:(*id)arg1 ;
-(id)_invalidationQueue;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)invalidationDelegate;
-(void)_invalidate;
-(void)_invalidationQueue_scheduleInvalidation:(id)arg0 ;
-(void)_performAndScheduleTimer;
-(void)configureWithInvocation:(id)arg0 ;
-(void)invalidateWithContext:(id)arg0 ;
-(void)setInvalidationDelegate:(id)arg0 ;


@end


#endif