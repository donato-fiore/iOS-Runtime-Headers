// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCFETCHEDVALUEMANAGER_H
#define FCFETCHEDVALUEMANAGER_H

@class NSString;
@protocol FCBoostableOperationThrottlerDelegate, FCFetchedValueDescriptorObserving, FCFetchedValueManagerObserving, FCFetchedValueManager, NFCopying;

#import <Foundation/Foundation.h>

#import "FCFetchedValueDescriptor.h"
#import "FCFetchedValueObservable.h"
#import "FCBoostableOperationThrottler.h"

@interface FCFetchedValueManager : NSObject <FCBoostableOperationThrottlerDelegate, FCFetchedValueDescriptorObserving, FCFetchedValueManagerObserving, FCFetchedValueManager>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) FCFetchedValueDescriptor *descriptor; // ivar: _descriptor
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) FCFetchedValueObservable *observable; // ivar: _observable
@property (readonly, nonatomic) FCBoostableOperationThrottler *operationThrottler; // ivar: _operationThrottler
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<NFCopying> *value;


-(NSUInteger)_cachePolicyForOptions:(NSUInteger)arg0 ;
-(NSUInteger)_optionsForCachePolicy:(NSUInteger)arg0 ;
-(id)_updateDependentManagersPromiseWithQualityOfService:(NSInteger)arg0 ;
-(id)init;
-(id)initWithDescriptor:(id)arg0 ;
-(id)valuePromiseWithQualityOfService:(NSInteger)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)fetchValueWithCachePolicy:(NSUInteger)arg0 qualityOfService:(NSInteger)arg1 completion:(id)arg2 ;
-(void)fetchValueWithQualityOfService:(NSInteger)arg0 completion:(id)arg1 ;
-(void)fetchedObjectManager:(id)arg0 valueDidChange:(id)arg1 ;
-(void)fetchedValueDescriptorValueIsDirty:(id)arg0 ;
-(void)operationThrottler:(id)arg0 performAsyncOperationWithQualityOfService:(NSInteger)arg1 completion:(id)arg2 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif