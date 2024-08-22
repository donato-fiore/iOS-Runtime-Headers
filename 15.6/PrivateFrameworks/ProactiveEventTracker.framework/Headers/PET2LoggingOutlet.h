// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PET2LOGGINGOUTLET_H
#define PET2LOGGINGOUTLET_H

@class NSDictionary, NSMutableDictionary, NSString;
@protocol PETLoggingOutlet, OS_dispatch_queue, OS_os_transaction;

#import <Foundation/Foundation.h>


@interface PET2LoggingOutlet : NSObject <PETLoggingOutlet>

 {
    NSObject<OS_dispatch_queue> *_loggingQueue;
    NSDictionary *_pet1HistogramBuckets;
    NSMutableDictionary *_addKeys;
    NSMutableDictionary *_updateKeys;
    NSObject<OS_os_transaction> *_batchTxn;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)_findBucketsForKey:(id)arg0 ;
-(id)init;
-(void)_dispatchBatchForKey:(id)arg0 value:(NSUInteger)arg1 isUpdate:(BOOL)arg2 ;
-(void)logDoubleValue:(CGFloat)arg0 forEvent:(id)arg1 featureId:(id)arg2 stringifiedProperties:(id)arg3 metaData:(id)arg4 ;
-(void)logErrorForEvent:(id)arg0 featureId:(id)arg1 reason:(id)arg2 ;
-(void)logUnsignedIntegerValue:(NSUInteger)arg0 forEvent:(id)arg1 featureId:(id)arg2 stringifiedProperties:(id)arg3 metaData:(id)arg4 ;
-(void)setUnsignedIntegerValue:(NSUInteger)arg0 forEvent:(id)arg1 featureId:(id)arg2 stringifiedProperties:(id)arg3 metaData:(id)arg4 ;


@end


#endif