

#include "RBResourceViolationHandler.h"
#include "RBEntitlements.h"
#include "RBXPCBundleProperties.h"
#include "RBBundlePropertiesBSXPCProvider.h"
#include "RBAssertionManagerEventQueue.h"
#include "RBPowerAssertion.h"
#include "RBProcessPowerAssertion.h"
#include "RBSystemPowerAssertion.h"
#include "RBPowerAssertionManager.h"
#include "RBAssertionManager.h"
#include "RBTimeProviderEvent.h"
#include "RBTimeProvider.h"
#include "RBLaunchTracker.h"
#include "RBLaunchManager.h"
#include "RBBundleProperties.h"
#include "RBEventQueue.h"
#include "RBEntitlementManager.h"
#include "RBIgnoreAllEntitlementsManager.h"
#include "RBThrottleBestEffortNetworkingManager.h"
#include "RBAssertionTransientState.h"
#include "RBAssertionIntransientState.h"
#include "RBAssertionAcquisitionContext.h"
#include "RBAssertionBatchContext.h"
#include "RBThermalResponseManager.h"
#include "RBProcessCPUMaximumLimits.h"
#include "RBProcessCPUMinimumLimits.h"
#include "RBProcessState.h"
#include "RBMutableProcessState.h"
#include "RBAssertionDescriptorValidatorContext.h"
#include "RBEventQueueEvent.h"
#include "RBLaunchdJobManager.h"
#include "RBInheritanceCollection.h"
#include "RBMutableInheritanceCollection.h"
#include "RBAttributeContext.h"
#include "RBProcessAppNapState.h"
#include "RBMutableProcessAppNapState.h"
#include "RBProcess.h"
#include "RBAttributeTemplateGroup.h"
#include "RBConnectionClient.h"
#include "RBDomainAttributeTemplate.h"
#include "RBJetsamProperties.h"
#include "RBUnmanagedJetsamProperties.h"
#include "RBPrewarmManager.h"
#include "RBSystemState.h"
#include "RBMutableSystemState.h"
#include "RBJetsamPropertyManager.h"
#include "RBProcessStateChange.h"
#include "RBProcessStateChangeSet.h"
#include "RBProcessMonitor.h"
#include "RBAssertion.h"
#include "RBContainerManager.h"
#include "RBConnectionListener.h"
#include "RBProcessMap.h"
#include "RBProcessIndex.h"
#include "RBAssertionCollection.h"
#include "RBAttributeCondition.h"
#include "RBEntitlementPredicate.h"
#include "RBAnyEntitlementPredicate.h"
#include "RBAllEntitlementPredicate.h"
#include "RBLSBundleProperties.h"
#include "RBBundlePropertiesLSProvider.h"
#include "RBAssertionOriginatorPidStore.h"
#include "RBComplexConcreteTarget.h"
#include "RBConcreteTarget.h"
#include "RBProcessReconnectManager.h"
#include "RBPersonaManager.h"
#include "RBExtensionDataProvider.h"
#include "RBAttributeFactory.h"
#include "RBLaunchdInterface.h"
#include "RBLaunchdProperties.h"
#include "RBMutableLaunchdProperties.h"
#include "RBLogStateCaptureEntry.h"
#include "RBStateCaptureInvalidator.h"
#include "RBStateCaptureItem.h"
#include "RBSStateCaptureSetSegment.h"
#include "RBSStateCaptureSet.h"
#include "RBStateCaptureManager.h"
#include "RBProcessManager.h"
#include "RBDomainAttributeManager.h"
#include "RBRequestManager.h"
#include "RBClientInheritanceManager.h"
#include "RBProcessMonitorObserverConnection.h"
#include "RBProcessMonitorObserver.h"
#include "RBAssertionStateResolver.h"
#include "RBAssertionResolutionContext.h"
#include "RBXNUWrapper.h"
#include "RBDaemon.h"
#include "RBDomainRestriction.h"
#include "RBOriginatorEntitlementDomainRestriction.h"
#include "RBOriginatorExtensionPointRestriction.h"
#include "RBTargetEntitlementDomainRestriction.h"
#include "RBCompoundAnyDomainRestriction.h"
#include "RBCompoundAllDomainRestriction.h"
#include "RBCompoundNoneDomainRestriction.h"
#include "RBTargetPropertyDomainRestriction.h"
#include "RBTargetsSelfDomainRestriction.h"
#include "RBTargetsHostedDomainRestriction.h"
#include "RBLessThanConditionDomainRestriction.h"
#include "RBAssertionDescriptorValidator.h"
#include "RBDomainAttributeManagerDataProvider.h"
#include "RBBundlePropertiesManager.h"
