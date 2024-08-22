// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGGRAPHLOCATIONCITYNODECOLLECTION_H
#define PGGRAPHLOCATIONCITYNODECOLLECTION_H



#import "PGGraphNamedLocationNodeCollection.h"
#import "PGGraphAddressNodeCollection.h"
#import "PGGraphLocationCountryNodeCollection.h"
#import "PGGraphLocationCountyNodeCollection.h"
#import "PGGraphMomentNodeCollection.h"
#import "PGGraphLocationStateNodeCollection.h"

@interface PGGraphLocationCityNodeCollection : PGGraphNamedLocationNodeCollection

@property (readonly, nonatomic) PGGraphAddressNodeCollection *addressNodes;
@property (readonly, nonatomic) PGGraphLocationCountryNodeCollection *countryNodes;
@property (readonly, nonatomic) PGGraphLocationCountyNodeCollection *countyNodes;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;
@property (readonly, nonatomic) PGGraphLocationStateNodeCollection *stateNodes;


+(Class)nodeClass;


@end


#endif