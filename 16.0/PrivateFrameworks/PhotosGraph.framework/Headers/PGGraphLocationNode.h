// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGGRAPHLOCATIONNODE_H
#define PGGRAPHLOCATIONNODE_H

@class NSString;
@protocol PGGraphLocationOrArea, PGGraphLocationNaming, PGGraphLocationCoordinates, PGAssetCollectionFeature, PGGraphLocationOrAreaNodeCollection;


#import "PGGraphOptimizedNode.h"
#import "PGGraphLocationNodeCollection.h"

@interface PGGraphLocationNode : PGGraphOptimizedNode <PGGraphLocationOrArea, PGGraphLocationNaming, PGGraphLocationCoordinates, PGAssetCollectionFeature>



@property (nonatomic) CLLocationCoordinate2D centroidCoordinate; // ivar: _centroidCoordinate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *featureIdentifier;
@property (readonly, nonatomic) NSUInteger featureType;
@property (readonly) NSString *fullname;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PGGraphLocationNodeCollection *locationNodeCollection;
@property (readonly, nonatomic) NSObject<PGGraphLocationOrAreaNodeCollection> *locationOrAreaNodeCollection;
@property (readonly) Class superclass;


+(id)addressOfLocation;
+(id)childLocationOfLocation;
+(id)filter;
+(id)parentLocationOfLocation;
-(Class)collectionClass;
-(NSUInteger)locationMask;
-(id)associatedNodesForRemoval;
-(id)init;
-(id)keywordDescription;
-(struct CLLocationCoordinate2D )coordinate;


@end


#endif