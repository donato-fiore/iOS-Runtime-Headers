// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCFETCHEDVALUEDESCRIPTOR_H
#define FCFETCHEDVALUEDESCRIPTOR_H

@class NSArray;
@protocol FCFetchedValueDescriptorObserving;

#import <Foundation/Foundation.h>


@interface FCFetchedValueDescriptor : NSObject

@property (readonly, nonatomic) NSArray *inputManagers;
@property (weak) NSObject<FCFetchedValueDescriptorObserving> *observer; // ivar: _observer


-(BOOL)isValue:(id)arg0 equalToValue:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)fastCachedValue;
-(id)init;
-(id)valuePromiseWithCachePolicy:(NSUInteger)arg0 qualityOfService:(NSInteger)arg1 ;
-(void)fetchValueWithCachePolicy:(NSUInteger)arg0 qualityOfService:(NSInteger)arg1 completion:(id)arg2 ;


@end


#endif