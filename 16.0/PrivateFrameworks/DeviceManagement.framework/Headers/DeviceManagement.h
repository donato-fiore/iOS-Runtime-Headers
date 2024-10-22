

#include "DMFActivityTransactionRequest.h"
#include "DMFApp.h"
#include "DMFAppManagementInformation.h"
#include "DMFApplication.h"
#include "DMFApplicationInstallProgress.h"
#include "DMFApplicationPolicyMonitor.h"
#include "DMFAppRequest.h"
#include "DMFAssignUserRequest.h"
#include "DMFBatchRequestOperation.h"
#include "DMFBeginTransactionRequest.h"
#include "DMFBeginTransactionResultObject.h"
#include "DMFBook.h"
#include "DMFBookmark.h"
#include "DMFCategoryPolicyMonitor.h"
#include "DMFCertificate.h"
#include "DMFClearActivationLockBypassCodeRequest.h"
#include "DMFClearRestrictionsPasswordRequest.h"
#include "DMFCommunicationPolicyMonitor.h"
#include "DMFConfigurationOrganization.h"
#include "DMFConfigurationSource.h"
#include "DMFConfigurationSourceClient.h"
#include "DMFConnection.h"
#include "DMFControlGroupIdentifier.h"
#include "DMFControlSessionIdentifier.h"
#include "DMFCreateConfigurationOrganizationRequest.h"
#include "DMFDeactivateConfigurationOrganizationRequest.h"
#include "DMFDeleteUserRequest.h"
#include "DMFDevice.h"
#include "DMFDevicePropertyNotificationSubscriptionRequest.h"
#include "DMFDisableLostModeRequest.h"
#include "DMFEchoRequest.h"
#include "DMFEchoResultObject.h"
#include "DMFEffectivePolicy.h"
#include "DMFPrioritizedPolicy.h"
#include "DMFEmergencyModeMonitor.h"
#include "DMFEnableLostModeRequest.h"
#include "DMFEndTransactionRequest.h"
#include "DMFFetchActivationLockBypassCodeRequest.h"
#include "DMFFetchActivationLockBypassCodeResultObject.h"
#include "DMFFetchApplicationsRequest.h"
#include "DMFFetchApplicationsResultObject.h"
#include "DMFFetchAppsRequest.h"
#include "DMFFetchAppsResultObject.h"
#include "DMFFetchAvailableOSUpdatesRequest.h"
#include "DMFFetchAvailableOSUpdatesResultObject.h"
#include "DMFFetchCertificatesRequest.h"
#include "DMFFetchCertificatesResultObject.h"
#include "DMFFetchClassroomInstructorEndpointRequest.h"
#include "DMFFetchClassroomInstructorEndpointResultObject.h"
#include "DMFFetchConfigurationOrganizationsRequest.h"
#include "DMFFetchConfigurationOrganizationsResultObject.h"
#include "DMFFetchConfigurationSourceSyncTokenRequest.h"
#include "DMFFetchConfigurationSourceSyncTokenResultObject.h"
#include "DMFFetchControlGroupIdentifiersRequest.h"
#include "DMFFetchControlGroupIdentifiersResultObject.h"
#include "DMFFetchDeclarationCapabilitiesRequest.h"
#include "DMFFetchDeclarationCapabilitiesResultObject.h"
#include "DMFFetchDeclarationsRequest.h"
#include "DMFFetchDeclarationsResultObject.h"
#include "DMFFetchDevicePropertiesRequest.h"
#include "DMFFetchDevicePropertiesResultObject.h"
#include "DMFDevicePropertiesResultObject.h"
#include "DMFFetchDMDStateRequest.h"
#include "DMFFetchDMDStateResultObject.h"
#include "DMFFetchGlobalRestrictionsRequest.h"
#include "DMFFetchGlobalRestrictionsResultObject.h"
#include "DMFFetchInstalledApplicationsRequest.h"
#include "DMFFetchInstalledApplicationsResultObject.h"
#include "DMFFetchInstalledCertificatesRequest.h"
#include "DMFFetchInstalledCertificatesResultObject.h"
#include "DMFFetchInstalledProfilesRequest.h"
#include "DMFFetchInstalledProfilesResultObject.h"
#include "DMFFetchInstalledProvisioningProfilesRequest.h"
#include "DMFFetchInstalledProvisioningProfilesResultObject.h"
#include "DMFFetchLastLoginDateRequest.h"
#include "DMFFetchLastLoginDateResultObject.h"
#include "DMFFetchLocationRequest.h"
#include "DMFFetchLocationResultObject.h"
#include "DMFFetchManagedBooksRequest.h"
#include "DMFFetchManagedBooksResultObject.h"
#include "DMFFetchOSUpdateStatusRequest.h"
#include "DMFFetchOSUpdateStatusResultObject.h"
#include "DMFFetchProfilesRequest.h"
#include "DMFFetchProfilesResultObject.h"
#include "DMFFetchProvisioningProfilesRequest.h"
#include "DMFFetchProvisioningProfilesResultObject.h"
#include "DMFFetchRestrictionsRequest.h"
#include "DMFFetchRestrictionsResultObject.h"
#include "DMFFetchSafariBookmarksRequest.h"
#include "DMFFetchSafariBookmarksResultObject.h"
#include "DMFFetchScreenshotRequest.h"
#include "DMFFetchScreenshotResultObject.h"
#include "DMFFetchSecurityInformationRequest.h"
#include "DMFFetchSecurityInformationResultObject.h"
#include "DMFFetchStreamEventsRequest.h"
#include "DMFFetchStreamEventsResultObject.h"
#include "DMFFetchUsersRequest.h"
#include "DMFFetchUsersResultObject.h"
#include "DMFiCloudPolicyMonitor.h"
#include "DMFInstallAppRequest.h"
#include "DMFInstallConfigurationRequest.h"
#include "DMFInstalledApplication.h"
#include "DMFInstalledApplicationInstallProgress.h"
#include "DMFInstalledCertificate.h"
#include "DMFInstalledProfile.h"
#include "DMFInstalledPayload.h"
#include "DMFInstalledProvisioningProfile.h"
#include "DMFInstallManagedBookRequest.h"
#include "DMFInstallManagedBookResultObject.h"
#include "DMFInstallProfileRequest.h"
#include "DMFInstallProvisioningProfileRequest.h"
#include "DMFInviteUserToVPPRequest.h"
#include "DMFJoinControlGroupRequest.h"
#include "DMFLeaveControlGroupRequest.h"
#include "DMFSetAppExtensionUUIDsRequest.h"
#include "DMFLockDeviceRequest.h"
#include "DMFLogOutUserRequest.h"
#include "DMFLogoutUserRequest.h"
#include "DMFManagementLockRequest.h"
#include "DMFManagementUnlockRequest.h"
#include "DMFMDMv1InstallAppRequest.h"
#include "DMFMDMv1InstallAppResultObject.h"
#include "DMFMDMv1StartManagingAppRequest.h"
#include "DMFMDMv1UpdateAppRequest.h"
#include "DMFOpenAppRequest.h"
#include "DMFOpenURLRequest.h"
#include "DMFOSStateHandler.h"
#include "DMFOSUpdate.h"
#include "DMFPlayLostModeSoundRequest.h"
#include "DMFPolicyMonitor.h"
#include "DMFPolicyRegistration.h"
#include "DMFProcessDeclarationsRequest.h"
#include "DMFProcessStatusRequest.h"
#include "DMFProfile.h"
#include "DMFProfilePayload.h"
#include "DMFProvisioningProfile.h"
#include "DMFRefreshCellularPlansRequest.h"
#include "DMFRefreshStatusRequest.h"
#include "DMFRefreshStatusResultObject.h"
#include "DMFRegisterConfigurationSourceRequest.h"
#include "DMFRemoveAppRequest.h"
#include "DMFRemoveConfigurationRequest.h"
#include "DMFRemoveManagedBookRequest.h"
#include "DMFRemoveOSUpdateRequest.h"
#include "DMFRemoveProfileRequest.h"
#include "DMFRemoveProtectedProfileRequest.h"
#include "DMFRemoveProvisioningProfileRequest.h"
#include "DMFReportingRequirements.h"
#include "DMFRequestAirPlayMirroringRequest.h"
#include "DMFRequestAirPlayMirroringResultObject.h"
#include "DMFRestartDeviceRequest.h"
#include "DMFScheduleOSUpdateRequest.h"
#include "DMFScheduleOSUpdateResultObject.h"
#include "DMFSecurityInformation.h"
#include "DMFSendEventRequest.h"
#include "DMFSetAirPlayRouteRequest.h"
#include "DMFSetAppAnalyticsEnabledRequest.h"
#include "DMFSetAppAssociatedDomainsEnableDirectDownloadsRequest.h"
#include "DMFSetAppAssociatedDomainsRequest.h"
#include "DMFSetAppConfigurationRequest.h"
#include "DMFSetAppRemovabilityRequest.h"
#include "DMFSetAppVPNUUIDRequest.h"
#include "DMFSetBluetoothEnabledRequest.h"
#include "DMFSetDataRoamingEnabledRequest.h"
#include "DMFSetDeclarationsRequest.h"
#include "DMFSetDeviceNameRequest.h"
#include "DMFSetDiagnosticSubmissionEnabledRequest.h"
#include "DMFSetInterfaceOrientationRequest.h"
#include "DMFSetMaximumResidentUsersRequest.h"
#include "DMFSetPasscodeLockGracePeriodRequest.h"
#include "DMFSetPersonalHotspotEnabledRequest.h"
#include "DMFSetVoiceRoamingEnabledRequest.h"
#include "DMFSetVolumeRequest.h"
#include "DMFShutDownDeviceRequest.h"
#include "DMFStartAppLockRequest.h"
#include "DMFStopAirPlayMirroringRequest.h"
#include "DMFStopAppLockRequest.h"
#include "DMFStopManagingAppRequest.h"
#include "DMFStopManagingBooksRequest.h"
#include "DMFTaskRequest.h"
#include "DMFTriggerDiagnosticsRequest.h"
#include "DMFUpdateAppRequest.h"
#include "DMFUpdateDeclarationsRequest.h"
#include "DMFUpdateEnqueuedCommandsRequest.h"
#include "DMFUpdatePickableAirPlayRoutesRequest.h"
#include "DMFUser.h"
#include "DMFValidateApplicationsRequest.h"
#include "DMFWebsitePolicyMonitor.h"
