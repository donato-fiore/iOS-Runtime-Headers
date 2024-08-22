// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHADDRESSNODECOLLECTION_H
#define PGGRAPHADDRESSNODECOLLECTION_H

@class CLLocation, NSString, NSArray, NSSet;
@protocol PGAssetCollectionFeatureNodeCollection;


#import "PGGraphLocationNodeCollection.h"
#import "PGGraphAreaNodeCollection.h"
#import "PGGraphLocationCityNodeCollection.h"
#import "PGGraphLocationCountryNodeCollection.h"
#import "PGGraphLocationCountyNodeCollection.h"
#import "PGGraphLocationDistrictNodeCollection.h"
#import "PGGraphFeatureNodeCollection.h"
#import "PGGraphHomeWorkNodeCollection.h"
#import "PGGraphLanguageNodeCollection.h"
#import "PGGraphMomentNodeCollection.h"
#import "PGGraphLocationNumberNodeCollection.h"
#import "PGGraphAddressNodeCollection.h"
#import "PGGraphLocationStateNodeCollection.h"
#import "PGGraphLocationStreetNodeCollection.h"

@interface PGGraphAddressNodeCollection : PGGraphLocationNodeCollection <PGAssetCollectionFeatureNodeCollection>



@property (readonly, nonatomic) PGGraphAreaNodeCollection *areaNodes;
@property (readonly, nonatomic) CLLocationCoordinate2D centroidCoordinate;
@property (readonly, nonatomic) CLLocation *centroidLocation;
@property (readonly, nonatomic) PGGraphLocationCityNodeCollection *cityNodes;
@property (readonly, nonatomic) PGGraphLocationCountryNodeCollection *countryNodes;
@property (readonly, nonatomic) PGGraphLocationCountyNodeCollection *countyNodes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PGGraphLocationDistrictNodeCollection *districtNodes;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PGGraphHomeWorkNodeCollection *homeNodes;
@property (readonly, nonatomic) PGGraphHomeWorkNodeCollection *homeWorkNodes;
@property (readonly, nonatomic) PGGraphLanguageNodeCollection *languageNodes;
@property (readonly, nonatomic) NSArray *locations;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;
@property (readonly, nonatomic) PGGraphLocationNumberNodeCollection *numberNodes;
@property (readonly, nonatomic) PGGraphAddressNodeCollection *preciseSubset;
@property (readonly, nonatomic) PGGraphLocationStateNodeCollection *stateNodes;
@property (readonly, nonatomic) PGGraphLocationStreetNodeCollection *streetNodes;
@property (readonly) Class superclass;
@property (readonly) NSSet *uuids;
@property (readonly, nonatomic) PGGraphHomeWorkNodeCollection *workNodes;


+(Class)nodeClass;
+(id)addressNodeAsCollectionForUUID:(id)arg0 inGraph:(id)arg1 ;
+(id)addressNodesForUUIDs:(id)arg0 inGraph:(id)arg1 ;
+(id)addressNodesWithinDistance:(CGFloat)arg0 ofLocations:(id)arg1 inGraph:(id)arg2 ;
-(id)addressNodes;
-(void)enumerateLatitudesUsingBlock:(id)arg0 ;
-(void)enumerateLongitudesUsingBlock:(id)arg0 ;


@end


#endif