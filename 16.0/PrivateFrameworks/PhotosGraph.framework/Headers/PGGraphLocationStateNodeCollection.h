// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGGRAPHLOCATIONSTATENODECOLLECTION_H
#define PGGRAPHLOCATIONSTATENODECOLLECTION_H



#import "PGGraphNamedLocationNodeCollection.h"
#import "PGGraphAddressNodeCollection.h"
#import "PGGraphLocationCountryNodeCollection.h"
#import "PGGraphMomentNodeCollection.h"

@interface PGGraphLocationStateNodeCollection : PGGraphNamedLocationNodeCollection

@property (readonly, nonatomic) PGGraphAddressNodeCollection *addressNodes;
@property (readonly, nonatomic) PGGraphLocationCountryNodeCollection *countryNodes;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;


+(Class)nodeClass;


@end


#endif