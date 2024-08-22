// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHLOCATIONCOUNTRYNODECOLLECTION_H
#define PGGRAPHLOCATIONCOUNTRYNODECOLLECTION_H



#import "PGGraphNamedLocationNodeCollection.h"
#import "PGGraphAddressNodeCollection.h"
#import "PGGraphLanguageNodeCollection.h"
#import "PGGraphMomentNodeCollection.h"

@interface PGGraphLocationCountryNodeCollection : PGGraphNamedLocationNodeCollection

@property (readonly, nonatomic) PGGraphAddressNodeCollection *addressNodes;
@property (readonly, nonatomic) PGGraphLanguageNodeCollection *languageNodes;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;


+(Class)nodeClass;


@end


#endif