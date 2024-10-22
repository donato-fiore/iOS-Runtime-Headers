

#include "RBSMimicTaskSuspensionAttribute.h"
#include "RBSSavedEndowmentGrant.h"
#include "RBSProcessPredicateTypeApplication.h"
#include "RBSProcessMonitor.h"
#include "RBSWorkloop.h"
#include "RBSProcessMonitorConfiguration.h"
#include "RBSInheritanceChangeSet.h"
#include "RBSCPUMaximumUsageLimitation.h"
#include "RBSInheritance.h"
#include "RBSXPCServiceProcessIdentity.h"
#include "RBSSuspendableCPUGrant.h"
#include "RBSResistTerminationGrant.h"
#include "RBSXPCServiceDefinition.h"
#include "RBSXPCServiceIdentity.h"
#include "RBSConstraintsAttribute.h"
#include "RBSCPUAccessGrant.h"
#include "RBSDurationAttribute.h"
#include "RBSHereditaryGrant.h"
#include "RBSXPCCodingArray.h"
#include "RBSProcessReportedProcesses.h"
#include "RBSProcessInstance.h"
#include "RBSProcessExitContext.h"
#include "RBSProcessExitStatus.h"
#include "RBSProcessExitEvent.h"
#include "RBSSubordinateProcessAttribute.h"
#include "RBSProcessBundle.h"
#include "RBSAppNapPreventTimerThrottleGrant.h"
#include "RBSAssertionIdentifier.h"
#include "RBSAppNapPreventSuppressedCPUGrant.h"
#include "RBSProcessIdentity.h"
#include "RBSXPCCoder.h"
#include "RBSJetsamPriorityGrant.h"
#include "RBSLegacyAttribute.h"
#include "RBSProcessPredicate.h"
#include "RBSProcessPredicateImpl.h"
#include "RBSProcessBKSLegacyPredicate.h"
#include "RBSProcessEverythingPredicate.h"
#include "RBSProcessApplicationPredicate.h"
#include "RBSProcessStringPredicate.h"
#include "RBSProcessIntPredicate.h"
#include "RBSCompoundAllPredicate.h"
#include "RBSCompoundAnyPredicate.h"
#include "RBSNotPredicate.h"
#include "RBSLaunchGrant.h"
#include "RBSDaemonProcessIdentity.h"
#include "RBSAngelProcessIdentity.h"
#include "RBSAssertion.h"
#include "RBSProcessEUIDPredicate.h"
#include "RBSProcessAUIDPredicate.h"
#include "RBSProcessIdentifier.h"
#include "_RBSExpirationWarningClient.h"
#include "RBSConnection.h"
#include "RBSProcessPlatformPredicate.h"
#include "RBSProcessLimitations.h"
#include "RBSTerminateRequest.h"
#include "RBSProcessState.h"
#include "RBSTarget.h"
#include "RBSAuditToken.h"
#include "RBSMachPortTaskNameRight.h"
#include "RBSLaunchContext.h"
#include "RBSDefineRelativeStartTimeGrant.h"
#include "RBSPersistentAttribute.h"
#include "RBSProcessStateUpdate.h"
#include "RBSAppNapPreventLowPriorityCPUGrant.h"
#include "RBSProcessAssertionInfo.h"
#include "RBSTerminateContext.h"
#include "RBSProcessInfoPlistResult.h"
#include "RBSSavedEndowment.h"
#include "RBSProcessBundleIdentifierPredicate.h"
#include "RBSProcessExecPathStartsWithPredicate.h"
#include "RBSProcessExtensionPointPredicate.h"
#include "RBSProcessBeforeTranslocationBundlePathPredicate.h"
#include "RBSProcessBundleIdentifiersPredicate.h"
#include "RBSHandshakeResponse.h"
#include "RBSTagAttribute.h"
#include "RBSWrappedLSInfo.h"
#include "RBSEndowmentGrant.h"
#include "RBSMacAppProcessIdentity.h"
#include "RBSEmbeddedAppWithPersonaProcessIdentity.h"
#include "RBSEmbeddedAppProcessIdentity.h"
#include "RBSDomainAttribute.h"
#include "RBSAssertionDescriptor.h"
#include "RBSAttribute.h"
#include "RBSGrant.h"
#include "RBSLimitation.h"
#include "RBSAppNapPreventBackgroundSocketsGrant.h"
#include "RBSRequest.h"
#include "RBSForceRoleManageAttribute.h"
#include "RBSLaunchRequest.h"
#include "RBSRunningReasonAttribute.h"
#include "RBSHandshakeRequest.h"
#include "RBSAppNapEnableGrant.h"
#include "RBSService.h"
#include "RBSProcessIdentifierPredicate.h"
#include "RBSProcessHandlePredicateImpl.h"
#include "RBSProcessInstancePredicate.h"
#include "RBSAcquisitionCompletionAttribute.h"
#include "RBSPreventIdleSleepGrant.h"
#include "RBSProcessPredicateLaunchServicesProcesses.h"
#include "RBSCPUMinimumUsageGrant.h"
#include "RBSGPUAccessGrant.h"
#include "RBSProcessPredicateSuspendable.h"
#include "RBSProcessLaunchdJobLabelPredicate.h"
#include "RBSProcessServiceNamePredicate.h"
#include "RBSProcessIdentityPredicate.h"
#include "RBSProcessHandle.h"
#include "RBSPreventLaunchLimitation.h"
#include "RBSProcessStateDescriptor.h"
#include "RBSDebugGrant.h"
#include "RBSXPCMessageContext.h"
#include "RBSXPCMessageReply.h"
#include "RBSXPCMessage.h"
#include "RBSResourceViolationHandler.h"
#include "RBSAppNapPreventDiskThrottleGrant.h"
#include "RBSTerminationAssertion.h"
#include "RBSAppNapInactiveGrant.h"
