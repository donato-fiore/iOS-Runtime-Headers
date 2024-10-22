

#include "MapsSyncManagedCollectionItem.h"
#include "_TtC8MapsSync27MapsSyncCollectionPlaceItem.h"
#include "_TtC8MapsSync34MapsSyncMutableCollectionPlaceItem.h"
#include "MapsSyncManagedCollectionPlaceItem.h"
#include "_TtC8MapsSync24MapsSyncHistoryItemQuery.h"
#include "_TtC8MapsSync21MapsSyncDataValidator.h"
#include "MapsSyncManagedCachedCuratedCollection.h"
#include "_TtC8MapsSync22MapsSyncRAPRecordQuery.h"
#include "MapsSyncManagedAnonymousCredential.h"
#include "_TtC8MapsSync29MapsSyncCollectionTransitItem.h"
#include "_TtC8MapsSync36MapsSyncMutableCollectionTransitItem.h"
#include "_TtC8MapsSync21MapsSyncDataContainer.h"
#include "_TtC8MapsSync31MapsSyncMemoryOnlyDataContainer.h"
#include "_TtC8MapsSync29MapsSyncCloudKitDataContainer.h"
#include "_TtC8MapsSync24MapsSyncXPCDataContainer.h"
#include "_TtC8MapsSync17MapsSyncXPCServer.h"
#include "_TtC8MapsSync32MapsSyncDataContainerXPCDelegate.h"
#include "_TtC8MapsSync27MapsSyncPersistentContainer.h"
#include "MapsSyncManagedReviewedPlace.h"
#include "_TtC8MapsSync24MapsSyncCachedUserReview.h"
#include "_TtC8MapsSync31MapsSyncMutableCachedUserReview.h"
#include "_TtC8MapsSync17MapsSyncRAPRecord.h"
#include "_TtC8MapsSync24MapsSyncMutableRAPRecord.h"
#include "_TtC8MapsSync31MapsSyncCachedCuratedCollection.h"
#include "_TtC8MapsSync38MapsSyncMutableCachedCuratedCollection.h"
#include "_TtC8MapsSync27MapsSyncIncidentReportQuery.h"
#include "_TtC8MapsSync31MapsSyncHistoryEvDirectionsItem.h"
#include "_TtC8MapsSync38MapsSyncMutableHistoryEvDirectionsItem.h"
#include "_TtC8MapsSync32MapsSyncAnalyticsIdentifierQuery.h"
#include "MapsSyncManagedIncidentReport.h"
#include "_TtC8MapsSync19MapsSyncDataSession.h"
#include "_TtC8MapsSync23MapsSyncCollectionQuery.h"
#include "MapsSyncManagedHistoryCuratedCollection.h"
#include "_TtC8MapsSync27MapsSyncAnalyticsIdentifier.h"
#include "_TtC8MapsSync34MapsSyncMutableAnalyticsIdentifier.h"
#include "_TtC8MapsSync26MapsSyncSquareRegionFilter.h"
#include "_TtC8MapsSync21MapsSyncObjectWrapper.h"
#include "_TtC8MapsSync40MapsSyncFetchedResultsControllerDelegate.h"
#include "_TtC8MapsSync17MapsSyncBaseQuery.h"
#include "_TtC8MapsSync17MapsSyncDataQuery.h"
#include "_TtC8MapsSync25MapsSyncCuratedCollection.h"
#include "_TtC8MapsSync32MapsSyncMutableCuratedCollection.h"
#include "_TtC8MapsSync13MapsSyncBatch.h"
#include "_TtC8MapsSync26MapsSyncReviewedPlaceQuery.h"
#include "MapsSyncManagedCachedUserReview.h"
#include "_TtC8MapsSync32MapsSyncHistoryCuratedCollection.h"
#include "_TtC8MapsSync39MapsSyncMutableHistoryCuratedCollection.h"
#include "MapsSyncManagedMixinMapItem.h"
#include "_TtC8MapsSync17MapsSyncPredicate.h"
#include "_TtC8MapsSync26MapsSyncHistoryTransitItem.h"
#include "_TtC8MapsSync33MapsSyncMutableHistoryTransitItem.h"
#include "MapsSyncManagedHistoryPlaceItem.h"
#include "_TtC8MapsSync11MapsSyncGeo.h"
#include "MapsSyncManagedFavoriteItem.h"
#include "_TtC8MapsSync24MapsSyncDataBase_initial.h"
#include "_TtC8MapsSync34MapsSyncCollectionTransitItemQuery.h"
#include "MapsSyncManagedHistoryRideShareItem.h"
#include "MapsSyncManagedHistoryDirectionsItem.h"
#include "MapsSyncManagedHistoryItem.h"
#include "MapsSyncManagedCuratedCollection.h"
#include "_TtC8MapsSync22MapsSyncCollectionItem.h"
#include "_TtC8MapsSync29MapsSyncMutableCollectionItem.h"
#include "MapsSyncManagedContactHandle.h"
#include "_TtC8MapsSync24MapsSyncHistoryPlaceItem.h"
#include "_TtC8MapsSync31MapsSyncMutableHistoryPlaceItem.h"
#include "_TtC8MapsSync25MapsSyncHistorySearchItem.h"
#include "_TtC8MapsSync32MapsSyncMutableHistorySearchItem.h"
#include "_TtC8MapsSync32MapsSyncCollectionPlaceItemQuery.h"
#include "_TtC8MapsSync25MapsSyncFavoriteItemQuery.h"
#include "_TtC8MapsSync22MapsSyncDataBase_0_0_1.h"
#include "MapsSyncManagedRAPRecord.h"
#include "_TtC8MapsSync18MapsSyncCollection.h"
#include "_TtC8MapsSync25MapsSyncMutableCollection.h"
#include "MapsSyncManagedHistorySearchItem.h"
#include "_TtC8MapsSync16MapsSyncBaseItem.h"
#include "_TtC8MapsSync23MapsSyncMutableBaseItem.h"
#include "MapsSyncManagedHistoryEvDirectionsItem.h"
#include "_TtC8MapsSync13MapsSyncRange.h"
#include "_TtC8MapsSync20MapsSyncQueryOptions.h"
#include "_TtC8MapsSync22MapsSyncQueryPredicate.h"
#include "MapsSyncManagedCollection.h"
#include "MapsSyncManagedCollectionTransitItem.h"
#include "_TtC8MapsSync22MapsSyncIncidentReport.h"
#include "_TtC8MapsSync29MapsSyncMutableIncidentReport.h"
#include "_TtC8MapsSync22MapsSyncWrapperFactory.h"
#include "_TtC8MapsSync23MapsSyncHistoryAnalyzer.h"
#include "_TtC8MapsSync15MapsSyncCleanup.h"
#include "_TtC8MapsSync22MapsSyncEventDebouncer.h"
#include "_TtC8MapsSync29MapsSyncHistoryDirectionsItem.h"
#include "_TtC8MapsSync36MapsSyncMutableHistoryDirectionsItem.h"
#include "_TtC8MapsSync15MapsSyncVehicle.h"
#include "_TtC8MapsSync22MapsSyncMutableVehicle.h"
#include "_TtC8MapsSync27MapsSyncAnonymousCredential.h"
#include "_TtC8MapsSync34MapsSyncMutableAnonymousCredential.h"
#include "MapsSyncManagedAnalyticsIdentifier.h"
#include "_TtC8MapsSync13MapsSyncError.h"
#include "_TtC8MapsSync20MapsSyncFavoriteItem.h"
#include "_TtC8MapsSync27MapsSyncMutableFavoriteItem.h"
#include "_TtC8MapsSync27MapsSyncCollectionItemQuery.h"
#include "_TtC8MapsSync28MapsSyncHistoryRideShareItem.h"
#include "_TtC8MapsSync35MapsSyncMutableHistoryRideShareItem.h"
#include "MapsSyncManagedHistoryTransitItem.h"
#include "_TtC8MapsSync21MapsSyncReviewedPlace.h"
#include "_TtC8MapsSync28MapsSyncMutableReviewedPlace.h"
#include "_TtC8MapsSync19MapsSyncHistoryItem.h"
#include "_TtC8MapsSync26MapsSyncMutableHistoryItem.h"
#include "_TtC8MapsSync30MapsSyncCuratedCollectionQuery.h"
#include "_TtC8MapsSync20MapsSyncVehicleQuery.h"
#include "_TtC8MapsSync12MapsSyncUtil.h"
#include "MapsSyncManagedVehicle.h"
