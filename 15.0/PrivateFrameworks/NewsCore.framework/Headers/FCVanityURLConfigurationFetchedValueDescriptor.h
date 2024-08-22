// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCVANITYURLCONFIGURATIONFETCHEDVALUEDESCRIPTOR_H
#define FCVANITYURLCONFIGURATIONFETCHEDVALUEDESCRIPTOR_H



#import "FCFetchedValueDescriptor.h"
#import "FCFetchedValueManager.h"

@interface FCVanityURLConfigurationFetchedValueDescriptor : FCFetchedValueDescriptor

@property (readonly, nonatomic) FCFetchedValueManager *configurationManager; // ivar: _configurationManager


-(BOOL)isValue:(id)arg0 equalToValue:(id)arg1 ;
-(id)_vanityURLConfiguration;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)fastCachedValue;
-(id)init;
-(id)initWithConfigurationManager:(id)arg0 ;
-(id)inputManagers;
-(void)fetchValueWithCachePolicy:(NSUInteger)arg0 qualityOfService:(NSInteger)arg1 completion:(id)arg2 ;


@end


#endif