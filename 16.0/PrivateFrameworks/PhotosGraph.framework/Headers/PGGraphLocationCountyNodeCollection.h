// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGGRAPHLOCATIONCOUNTYNODECOLLECTION_H
#define PGGRAPHLOCATIONCOUNTYNODECOLLECTION_H



#import "PGGraphNamedLocationNodeCollection.h"
#import "PGGraphAddressNodeCollection.h"
#import "PGGraphMomentNodeCollection.h"

@interface PGGraphLocationCountyNodeCollection : PGGraphNamedLocationNodeCollection

@property (readonly, nonatomic) PGGraphAddressNodeCollection *addressNodes;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;


+(Class)nodeClass;


@end


#endif