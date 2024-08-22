// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCHELDPBCODABLEFETCHEDVALUEDESCRIPTOR_H
#define FCHELDPBCODABLEFETCHEDVALUEDESCRIPTOR_H

@protocol FCContentContext;


#import "FCFetchedValueDescriptor.h"
#import "FCFetchedValueManager.h"

@interface FCHeldPBCodableFetchedValueDescriptor : FCFetchedValueDescriptor

@property (readonly, nonatomic) Class codableClass; // ivar: _codableClass
@property (readonly, nonatomic) NSObject<FCContentContext> *contentContext; // ivar: _contentContext
@property (readonly, nonatomic) FCFetchedValueManager *resourceConfigurationManager; // ivar: _resourceConfigurationManager


-(BOOL)isValue:(id)arg0 equalToValue:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)fastCachedValue;
-(id)init;
-(id)initWithCodableClass:(Class)arg0 contentContext:(id)arg1 resourceConfigurationManager:(id)arg2 ;
-(id)inputManagers;
-(void)_processFetchOperationResult:(id)arg0 withBlock:(id)arg1 ;
-(void)fetchValueWithCachePolicy:(NSUInteger)arg0 qualityOfService:(NSInteger)arg1 completion:(id)arg2 ;


@end


#endif