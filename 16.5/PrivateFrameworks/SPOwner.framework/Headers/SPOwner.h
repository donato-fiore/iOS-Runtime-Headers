

#include "SPUnknownProductMetadata.h"
#include "SPLostModeInfo.h"
#include "SPNVRAM.h"
#include "SPInternalSimpleBeacon.h"
#include "SPBeaconTaskInformation.h"
#include "SPCBPeripheralKeyAddressPair.h"
#include "SPAccessoryDiscoverySessionState.h"
#include "SPPairingConfiguration.h"
#include "SPPeripheral.h"
#include "SPCommandKey.h"
#include "SPLocationFetchResult.h"
#include "SPBeaconGroup.h"
#include "SPUnknownDiscoverySession.h"
#include "SPApplicationBeacon.h"
#include "SPBeaconScanningSession.h"
#include "SPFirmwareUpdateStateResult.h"
#include "SPBeaconRoleCategory.h"
#include "SPPairingState.h"
#include "SPHandle.h"
#include "SPBeaconManagerSimpleBeaconUpdateInterface.h"
#include "SPLocationProvider.h"
#include "SPTrackingAvoidanceResult.h"
#include "SPBeaconLocation.h"
#include "SPCrypto.h"
#include "SPMonitorsWrapper.h"
#include "SPSecureLocationsSubscriptionContext.h"
#include "SPSecureLocationsSubscriptionResult.h"
#include "SPSecureLocationsStewiePublishResult.h"
#include "SPSecureLocationsManager.h"
#include "SPAccessoryLayoutTemplate.h"
#include "SPBeaconShare.h"
#include "SPBeacon.h"
#include "SPOfflineAdvertisingConfiguration.h"
#include "SPOfflineAdvertisingKeys.h"
#include "SPCBPeripheralKeyRequestParameters.h"
#include "SPUnauthorizedTrackingObservation.h"
#include "SPOwnerSessionState.h"
#include "SPDiscoveredAccessoryMetadata.h"
#include "SPCommand.h"
#include "SPCBLeechScanner.h"
#include "SPMutableSafeLocation.h"
#include "SPSafeLocation.h"
#include "SPTagUserStats.h"
#include "SPBeaconObservation.h"
#include "SPDarwinNotificationHandler.h"
#include "SPSimpleBeacon.h"
#include "SPDiscoveredAccessoryProductInformation.h"
#include "SPLocationFetchContext.h"
#include "SPBeaconingKey.h"
#include "SPUnknownBeacon.h"
#include "SPPairingManager.h"
#include "SPCBPeripheralManagerSessionKey.h"
#include "SPCommandKeys.h"
#include "SPUnknownProductInfo.h"
#include "SPOfflineAdvertisingKeysDelegate.h"
#include "SPCBPeripheralKeyRequest.h"
#include "SPLastOnlineLocationInfo.h"
#include "SPOwnedDeviceKeyRecord.h"
#include "SPNetworkMonitor.h"
#include "SPOwnerSession.h"
#include "SPPowerAssertion.h"
#include "SPKeyIndexMap.h"
#include "SPKeyReconciler.h"
#include "SPCBPeripheralKeyResponse.h"
#include "SPSecureLocation.h"
#include "SPOwnerInterface.h"
#include "SPOwnerSessionLocationFetch.h"
#include "SPObservationLocation.h"
#include "SPSimpleBeaconContext.h"
#include "SPCBPeripheralManager.h"
#include "SPBeaconUpdates.h"
#include "SPFirmwareUpdateSession.h"
#include "SPDiscoveredAccessory.h"
#include "SPCommandKeysCriteria.h"
#include "SPMacBeaconConfig.h"
#include "SPUnknownDiscoverySessionState.h"
#include "SPBLEStateMonitor.h"
#include "SPBeaconManager.h"
#include "SPBeaconRole.h"
#include "SPKeySyncRecord.h"
#include "SPUnauthorizedTrackingAdvertisement.h"
#include "SPAccessoryPairingConfiguration.h"
#include "SPRawSearchResult.h"
#include "SPPairingSession.h"
#include "SPAccessoryDiscoveryAndPairingSession.h"
#include "SPStandaloneBeacon.h"
#include "SPRawAccessoryMetadata.h"
#include "SPTrackingAvoidancePolicy.h"
#include "SPIndexInformation.h"
#include "SPAccessoryInformation.h"
#include "SPScannedObject.h"
#include "SPSettingsConfiguration.h"
#include "SPBeaconDescription.h"
