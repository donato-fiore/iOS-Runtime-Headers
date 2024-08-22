// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOVECTORTILE_H
#define GEOVECTORTILE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface GEOVectorTile : NSObject {
    ? _vectorTile;
    NSMutableArray *_lines;
    NSMutableArray *_coastlines;
    NSMutableArray *_buildingFootprints;
    NSMutableArray *_transitLines;
    NSMutableArray *_transitLinks;
    NSMutableArray *_overlapBuildingFootprints;
    NSMutableArray *_connectivityJunctions;
}


@property (readonly, nonatomic) NSUInteger buildingFootprintsCount;
@property (readonly, nonatomic) NSUInteger coastlinesCount;
@property (readonly, nonatomic) BOOL containsDaVinciData;
@property (readonly, nonatomic) BOOL containsProjectedLegacyData;
@property (readonly, nonatomic) *GeoCodecsCurveVertexPool curveLineVertices;
@property (readonly, nonatomic) unsigned short daVinciAssetCount;
@property (readonly, nonatomic) *void daVinciAssets;
@property (readonly, nonatomic) unsigned short daVinciBuildingCount;
@property (readonly, nonatomic) unsigned short daVinciBuildingSectionCount;
@property (readonly, nonatomic) *GeoCodecsDaVinciBuildingSection daVinciBuildingSections;
@property (readonly, nonatomic) unsigned int daVinciBuildingVertexCount;
@property (readonly, nonatomic) unsigned int daVinciBuildingVertexOffset;
@property (readonly, nonatomic) *void daVinciBuildings;
@property (readonly, nonatomic) unsigned short daVinciDecalCount;
@property (readonly, nonatomic) *void daVinciDecals;
@property (readonly, nonatomic) unsigned short daVinciExternalAssetCount;
@property (readonly, nonatomic) *NSUInteger daVinciExternalAssetIDs;
@property (readonly, nonatomic) unsigned short daVinciExternalMaterialCount;
@property (readonly, nonatomic) *NSUInteger daVinciExternalMaterialIDs;
@property (readonly, nonatomic) unsigned int daVinciIndexCount;
@property (readonly, nonatomic) *unsigned short daVinciIndices;
@property (readonly, nonatomic) unsigned short daVinciLineLoopCount;
@property (readonly, nonatomic) *GeoCodecsDaVinciLineLoop daVinciLineLoops;
@property (readonly, nonatomic) unsigned short daVinciMaterialSheetCount;
@property (readonly, nonatomic) *GeoCodecsDaVinciMaterialSheet daVinciMaterialSheets;
@property (readonly, nonatomic) unsigned short daVinciMeshCount;
@property (readonly, nonatomic) *GeoCodecsDaVinciMesh daVinciMeshes;
@property (readonly, nonatomic) *GeoCodecsDaVinciMetaData daVinciMetaData;
@property (readonly, nonatomic) unsigned short daVinciRenderableCount;
@property (readonly, nonatomic) *GeoCodecsDaVinciRenderable daVinciRenderables;
@property (readonly, nonatomic) unsigned short daVinciSceneCount;
@property (readonly, nonatomic) *GeoCodecsDaVinciScene daVinciScenes;
@property (readonly, nonatomic) unsigned short daVinciStyleAttributeRasterCount;
@property (readonly, nonatomic) *GeoCodecsDaVinciStyleAttributeRaster daVinciStyleAttributeRasters;
@property (readonly, nonatomic) unsigned int daVinciTileVersion;
@property (readonly, nonatomic) unsigned int daVinciVertexCount;
@property (readonly, nonatomic) *GeoCodecsVectorTilePoint3D daVinciVertices;
@property (readonly, nonatomic) *GeoCodecsDaVinciDirectionalXYTextureMappingData directionalXYTextureData;
@property (readonly, nonatomic) unsigned short directionalXYTextureDataCount;
@property (readonly, nonatomic) unsigned int elevationRasterByteCount;
@property (readonly, nonatomic) char * elevationRasterPng;
@property (readonly, nonatomic) *GeoCodecsDaVinciExplicitTextureMappingData explicitTextureData;
@property (readonly, nonatomic) unsigned short explicitTextureDataCount;
@property (readonly, nonatomic) *? geoConnectivityPointOnRoad;
@property ? geoSortedConnectivityPointOnRoad;
@property (readonly, nonatomic) _GEOTileKey geoTileKey;
@property (readonly, nonatomic) BOOL hasComputedJunctions;
@property (readonly, nonatomic) *GeoCodecsConnectivityJunction junctions;
@property (readonly, nonatomic) NSUInteger junctionsCount;
@property (readonly, nonatomic) NSMutableArray *junctionsWithoutFeature;
@property (readonly, nonatomic) *GeoCodecsLabelLineAttribute labelLineAttributes;
@property (readonly, nonatomic) unsigned int labelLineAttributesCount;
@property (readonly, nonatomic) *GeoCodecsLabelLineFeatureSection labelLineFeatureSections;
@property (readonly, nonatomic) unsigned int labelLineFeatureSectionsCount;
@property (readonly, nonatomic) *GeoCodecsLabelSummaryIcon labelSummaryIcons;
@property (readonly, nonatomic) unsigned int labelSummaryIconsCount;
@property (readonly, nonatomic) *GeoCodecsLabelTextPlacement labelTextPlacements;
@property (readonly, nonatomic) unsigned int labelTextPlacementsCount;
@property (readonly, nonatomic) NSUInteger lineCharacteristicPointCount;
@property (readonly, nonatomic) *GeoCodecsCharacteristicPoint lineCharacteristicPoints;
@property (readonly, nonatomic) *GeoCodecsLineCrossing lineCrossings;
@property (readonly, nonatomic) NSUInteger lineCrossingsCount;
@property (readonly, nonatomic) NSUInteger lineStrokeSpecificationCount;
@property (readonly, nonatomic) *GeoCodecsStrokeSpecification lineStrokeSpecifications;
@property (readonly, nonatomic) *GeoCodecsVertexPool lineVertices;
@property (readonly, nonatomic) NSUInteger linesCount;
@property (readonly, nonatomic) short maxElevationInMeters;
@property (readonly, nonatomic) short minElevationInMeters;
@property (readonly, nonatomic) NSUInteger nonOverlappingBuildingFootprintsCount;
@property (readonly, nonatomic) NSUInteger nonOverlappingThreeDBuildingsCount;
@property (readonly, nonatomic) NSMutableArray *overlapBuildingFootprints;
@property (readonly, nonatomic) NSUInteger overlapBuildingFootprintsCount;
@property (readonly, nonatomic) *GeoCodecsConnectivityOverpass overpasses;
@property (readonly, nonatomic) *void physicalFeatures;
@property (readonly, nonatomic) NSUInteger physicalFeaturesCount;
@property (readonly, nonatomic) *GeoCodecsVertexPool physicalFeaturesVertices;
@property (readonly, nonatomic) *NSUInteger poiStorefrontBundleIDs;
@property (readonly, nonatomic) unsigned int poiStorefrontBundleIDsCount;
@property (readonly, nonatomic) *GeoCodecsConnectivityPointOnRoad pointsOnRoad;
@property (readonly, nonatomic) NSUInteger pointsOnRoadCount;
@property (readonly, nonatomic) *void pois;
@property (readonly, nonatomic) NSUInteger poisCount;
@property (readonly, nonatomic) NSUInteger polygonCharacteristicPointCount;
@property (readonly, nonatomic) *GeoCodecsCharacteristicPoint polygonCharacteristicPoints;
@property (readonly, nonatomic) NSUInteger polygonStrokeSpecificationCount;
@property (readonly, nonatomic) *GeoCodecsStrokeSpecification polygonStrokeSpecifications;
@property (readonly, nonatomic) *void polygons;
@property (readonly, nonatomic) NSUInteger polygonsCount;
@property (readonly, nonatomic) NSUInteger polygonsVertexCount;
@property (readonly, nonatomic) unsigned int runningTrackFlags;
@property ? sortedPointsOnRoad;
@property (readonly, nonatomic) *GeoCodecsSslpmTileInfo sslpmTileInfo;
@property (readonly, nonatomic) *GeoCodecsTileKey tileKey;
@property (readonly, nonatomic) *GeoCodecsTileLabelLine tileLabelLines;
@property (readonly, nonatomic) unsigned int tileLabelLinesCount;
@property (readonly, nonatomic) NSUInteger tileReferenceCount;
@property (readonly, nonatomic) float tileSizeInMeters;
@property (readonly, nonatomic) NSUInteger totalBuildingFootprintsCount;
@property (readonly, nonatomic) NSUInteger totalThreeDBuildingsCount;
@property (readonly, nonatomic) NSUInteger transitAccessPointCount;
@property (readonly, nonatomic) *void transitAccessPoints;
@property (readonly, nonatomic) char transitCoverage;
@property (readonly, nonatomic) NSUInteger transitJunctionCount;
@property (readonly, nonatomic) *GeoCodecsConnectivityJunction transitJunctions;
@property (readonly, nonatomic) NSUInteger transitLineCount;
@property (readonly, nonatomic) *unsigned char transitLineDirections;
@property (readonly, nonatomic) NSUInteger transitLinkCount;
@property (readonly, nonatomic) *NSUInteger transitLinkLineIndices;
@property (readonly, nonatomic) NSUInteger transitLinkLineIndicesCount;
@property (readonly, nonatomic) *float transitLinkLineMinZoomOverrides;
@property (readonly, nonatomic) *GeoCodecsTransitLinkSection transitLinkSections;
@property (readonly, nonatomic) NSUInteger transitNodeCollapseIDCount;
@property (readonly, nonatomic) *NSUInteger transitNodeCollapseIDs;
@property (readonly, nonatomic) NSUInteger transitNodeCollapseIndexCount;
@property (readonly, nonatomic) *NSUInteger transitNodeCollapseIndices;
@property (readonly, nonatomic) NSUInteger transitNodeCount;
@property (readonly, nonatomic) NSUInteger transitNodeIndexCount;
@property (readonly, nonatomic) *NSUInteger transitNodeLineIndices;
@property (readonly, nonatomic) *NSUInteger transitNodeSubtitleLineIndices;
@property (readonly, nonatomic) *NSUInteger transitNodeSystemIndices;
@property (readonly, nonatomic) *void transitNodes;
@property (readonly, nonatomic) *GeoCodecsConnectivityPointOnRoad transitPointsOnRoad;
@property (readonly, nonatomic) NSUInteger transitPointsOnRoadCount;
@property (readonly, nonatomic) *NSUInteger transitShieldIndices;
@property (readonly, nonatomic) NSUInteger transitStationTransferCount;
@property (readonly, nonatomic) *GeoCodecsVertexPool transitStationTransferVertices;
@property (readonly, nonatomic) *void transitStationTransfers;
@property (readonly, nonatomic) NSUInteger transitSystemCount;
@property (readonly, nonatomic) *void transitSystems;
@property (readonly, nonatomic) *unsigned int transitTravelTimes;
@property (readonly, nonatomic) *GeoCodecsVertexPool transitVertices;
@property (readonly, nonatomic) *void venueBuildings;
@property (readonly, nonatomic) NSUInteger venueBuildingsCount;
@property (readonly, nonatomic) *GeoCodecsVenueComponent venueComponents;
@property (readonly, nonatomic) NSUInteger venueComponentsCount;
@property (readonly, nonatomic) *GeoCodecsVenueLevel venueLevels;
@property (readonly, nonatomic) NSUInteger venueLevelsCount;
@property (readonly, nonatomic) *void venues;
@property (readonly, nonatomic) NSUInteger venuesCount;
@property (readonly, nonatomic) unsigned short zResolutionBits;


-(*void)transitAccessPointForFeatureID:(NSUInteger)arg0 ;
-(*void)transitLineForFeatureID:(NSUInteger)arg0 ;
-(*void)transitNodeForFeatureID:(NSUInteger)arg0 ;
-(*void)transitSystemInfoForFeatureID:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithVMP4:(id)arg0 localizationData:(id)arg1 tileKey:(struct _GEOTileKey *)arg2 ;
-(id)initWithVectorTile:(*void)arg0 ;
-(void)forEachEdgeInRoad:(id)arg0 visitTwice:(BOOL)arg1 visitor:(id)arg2 ;
-(void)forEachEdgeOnJunction:(struct GeoCodecsConnectivityJunction *)arg0 visitor:(id)arg1 ;
-(void)forEachJunction:(id)arg0 ;
-(void)forEachJunctionInRoad:(*void)arg0 visitor:(id)arg1 ;
-(void)forEachPoint:(id)arg0 ;
-(void)forEachPolygon:(id)arg0 ;
-(void)forEachRoad:(id)arg0 ;
-(void)forEachRunningTrack:(id)arg0 ;
-(void)forEachTransitLinkOnJunction:(struct GeoCodecsConnectivityJunction *)arg0 visitor:(id)arg1 ;


@end


#endif