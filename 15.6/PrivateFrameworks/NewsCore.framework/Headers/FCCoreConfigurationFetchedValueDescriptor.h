// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCCORECONFIGURATIONFETCHEDVALUEDESCRIPTOR_H
#define FCCORECONFIGURATIONFETCHEDVALUEDESCRIPTOR_H

@protocol FCCoreConfigurationManager;


#import "FCFetchedValueDescriptor.h"

@interface FCCoreConfigurationFetchedValueDescriptor : FCFetchedValueDescriptor

@property (readonly, nonatomic) NSObject<FCCoreConfigurationManager> *configurationManager; // ivar: _configurationManager


-(BOOL)isValue:(id)arg0 equalToValue:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)fastCachedValue;
-(id)init;
-(id)initWithConfigurationManager:(id)arg0 ;
-(id)inputManagers;
-(void)fetchValueWithCachePolicy:(NSUInteger)arg0 qualityOfService:(NSInteger)arg1 completion:(id)arg2 ;


@end


#endif