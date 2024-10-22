

#include "HKConceptIdentifier.h"
#include "HKSharedSummaryTransactionQuery.h"
#include "_HKDeepBreathingSessionConfiguration.h"
#include "HKWorkoutBuilder.h"
#include "HKWorkoutBuilderConfiguration.h"
#include "HKFeatureAvailabilityDatabaseInaccessibilityCache.h"
#include "HKCodedValue.h"
#include "HKGenericDocumentSample.h"
#include "HKClinicalGateway.h"
#include "HKMedicationDispenseRecord.h"
#include "HKRemoteFeatureAvailabilityWatchProductTypeHasPrefixRule.h"
#include "HKDeletedObject.h"
#include "HKMedicationOrder.h"
#include "_HKClinicalRecordComparisonFilter.h"
#include "HKObserverSet.h"
#include "HKPluginLoader.h"
#include "HKHealthStoreConfiguration.h"
#include "HKMedicalCodingSystem.h"
#include "HKWorkoutRoute.h"
#include "_HKMedicalRecordComparisonFilter.h"
#include "HKFeatureSettings.h"
#include "HKRemoteFeatureAvailabilityActiveWatchElectrocardiogramVersionGreaterThanRule.h"
#include "HKCloudSyncContainerDescription.h"
#include "HKRemoteFeatureAvailabilityIOSVersionGreaterThanRule.h"
#include "HKFeatureAvailabilityRequirementCountryIsSupportedOnActiveRemoteDevice.h"
#include "HKCodedQuantity.h"
#include "HKCompoundConceptSelection.h"
#include "HKFeatureStatusManager.h"
#include "HKCumulativeQuantitySample.h"
#include "HKHeartRateSummaryQuery.h"
#include "HKNanoSyncControl.h"
#include "_HKWorkoutObserver.h"
#include "HKHealthStore.h"
#include "HKCloudSyncRecordDescription.h"
#include "_HKFitnessMachineConnectionInitiator.h"
#include "HKAccountOwner.h"
#include "HKFeatureAvailabilityOnboardingEligibilityRequirement.h"
#include "HKRemoteFeatureAvailabilityWatchOSBuildVersionEqualsRule.h"
#include "HKUnknownRecordType.h"
#include "_HKXPCAuditToken.h"
#include "HKSharingRecipientIdentifier.h"
#include "_HKSleepQueryResult.h"
#include "HKSortedSampleArray.h"
#include "HKECGAvailabilityResult.h"
#include "HKMedicationOrderType.h"
#include "HKMetadataValueRange.h"
#include "HKConcept.h"
#include "HKAllergyRecordType.h"
#include "HKProxyProvider.h"
#include "HKSleepSchedule.h"
#include "HKSynchronousObserverSet.h"
#include "HKRegionAvailability.h"
#include "_HKUncheckedRegionAvailability.h"
#include "_HKAnyCountryAvailability.h"
#include "_HKAllowedInSomeCountriesAvailability.h"
#include "HKCloudSyncShareParticipantManager.h"
#include "HKHealthStoreIdentifier.h"
#include "HKClinicalAccountProvenance.h"
#include "HKRegionAvailabilityOverride.h"
#include "HKCurrentActivityCacheQuery.h"
#include "HKCurrentActivityCacheQueryServerConfiguration.h"
#include "_HKSleepQueryResultBuilder.h"
#include "HKGymKitDataSource.h"
#include "HKQuantity.h"
#include "_HKAppURLSpecification.h"
#include "_HKXMLValidator.h"
#include "_HKValidationErrorTracker.h"
#include "_HKTaskCompletionCounter.h"
#include "_HKZipArchiveExtractor.h"
#include "HKPendingOperationRecord.h"
#include "HKRetryableOperation.h"
#include "_HKEntitlements.h"
#include "HKOnboardingCompletion.h"
#include "HKConceptStoreServerConfiguration.h"
#include "HKRecalibrateEstimatesRequestRecord.h"
#include "HKAccountOwnerType.h"
#include "HKCloudSyncRecordZoneIDDescription.h"
#include "HKHeartRateSummaryReading.h"
#include "HKFeatureAvailabilityRequirementOnboardingRecordIsNotPresentForMutuallyExclusiveFeature.h"
#include "HKFeatureAvailabilityOnboardingRecordRequirement.h"
#include "HKSharingAuthorizationRecipientStore.h"
#include "HKSharingAuthorizationRecipientStoreTaskConfiguration.h"
#include "HKSignedClinicalDataRecord.h"
#include "_HKArchiveCreator.h"
#include "HKSharedSummaryCloudSyncManager.h"
#include "HKCodedValueCollection.h"
#include "HKFeatureAvailabilityRequirementOnboardingRecordIsPresent.h"
#include "HKCodableCondensedWorkoutCollection.h"
#include "HKHeartbeatSeriesBuilder.h"
#include "HKObject.h"
#include "HKBadge.h"
#include "HKDevice.h"
#include "HKDatabaseValidation.h"
#include "HKRemoteFeatureAvailabilityWatchOSVersionGreaterThanRule.h"
#include "HKFeatureAvailabilityRequirementActiveRemoteDeviceIsPresent.h"
#include "HKRemoteFeatureAvailabilityCompoundRule.h"
#include "HKFeatureStatus.h"
#include "HKHeartbeatSeriesQuery.h"
#include "HKMedicalCodingCollection.h"
#include "HKSleepDaySummaryQuery.h"
#include "HKSleepDaySummaryQueryConfiguration.h"
#include "HKCodableQuantitySeries.h"
#include "HKSleepAnalysis.h"
#include "HKTokenKeychainItem.h"
#include "HKCloudSyncAccountInfo.h"
#include "HKFixedCurrentCountryCodeProvider.h"
#include "HKCurrentLocaleCountryCodeProvider.h"
#include "HKSampleQuery.h"
#include "_HKSampleQueryConfiguration.h"
#include "HKConceptAttribute.h"
#include "HKClinicalGatewayReference.h"
#include "HKAuthorizationStore.h"
#include "HKFeatureAvailabilityRequirementCountryIsSupportedOnLocalDevice.h"
#include "HKUserDomainConceptStore.h"
#include "_HKDiscreteQuantitySampleComparisonFilter.h"
#include "_HKMedicalUserDomainConceptComparisonFilter.h"
#include "HKDiscreteQuantitySample.h"
#include "HKFeatureAvailabilityRequirementFeatureIsNotRemotelyDisabled.h"
#include "HKObjectAuthorizationPromptSession.h"
#include "HKClinicalGatewayFeature.h"
#include "_HKTimePeriod.h"
#include "HKClinicalRecord.h"
#include "HKCloudSyncDatabaseDescription.h"
#include "_HKDateRangeQuery.h"
#include "HKFeatureAvailabilityRequirementBooleanUserDefaultEvaluator.h"
#include "HKNanoRegistryPairingAndSwitchingNotificationDataSource.h"
#include "HKPersistentTimer.h"
#include "HKQuantitySeriesSampleBuilder.h"
#include "HKQuantitySeriesSampleBuilderTaskServerConfiguration.h"
#include "HKFHIRIdentifier.h"
#include "HKHealthService.h"
#include "HKBloodTypeObject.h"
#include "HKBiologicalSexObject.h"
#include "HKFitzpatrickSkinTypeObject.h"
#include "HKWheelchairUseObject.h"
#include "HKActivityMoveModeObject.h"
#include "HKCardioFitnessMedicationsUseObject.h"
#include "HKRemoteFeatureAvailabilityActiveWatchAtrialFibrillationDetectionVersionGreaterThanRule.h"
#include "_HKCFGNode.h"
#include "_HKCFGNonTerminalNode.h"
#include "_HKCFGTerminalNode.h"
#include "_HKCFGEmptyStringNode.h"
#include "_HKCFGNodeCache.h"
#include "_HKCFGParseContext.h"
#include "_HKCFGExpression.h"
#include "_HKCFGReplacementRule.h"
#include "_HKCFGNonTerminal.h"
#include "_HKCFGTerminal.h"
#include "_HKCFGStringTerminal.h"
#include "_HKCFGCharacterTerminal.h"
#include "_HKCFGIntegerTerminal.h"
#include "_HKCFGDoubleTerminal.h"
#include "_HKCFGCharacterSequenceTerminal.h"
#include "_HKContextFreeGrammar.h"
#include "HKObserverQuery.h"
#include "_HKObserverQueryServerConfiguration.h"
#include "HKDaemonTransaction.h"
#include "HKFeatureAvailabilityRequirementFeatureIsOn.h"
#include "HKWorkoutDataSource.h"
#include "HKWorkoutDataSourceConfiguration.h"
#include "HKCloudSyncObserverStatus.h"
#include "HKCloudSyncObserver.h"
#include "HKSharingAuthorization.h"
#include "HKCDADocumentSample.h"
#include "HKCDADocument.h"
#include "_HKCDADocumentExtractedFields.h"
#include "HKQuerySortConstraint.h"
#include "HKFeatureAvailabilityRequirementNotInStoreDemoMode.h"
#include "HKCodableQuantitySeriesEnumerationResultCollection.h"
#include "HKFeatureAvailabilityRequirementFeatureFlagIsEnabled.h"
#include "HKWorkoutControl.h"
#include "HKHealthWrapMessageConfiguration.h"
#include "HKHealthWrapMessage.h"
#include "HKIdentifierConceptSelection.h"
#include "HKRemoteFeatureAvailabilityWatchRegionEqualsRule.h"
#include "HKMedicalRecordsStore.h"
#include "HKSource.h"
#include "HKStatisticsQuery.h"
#include "_HKStatisticsQueryServerConfiguration.h"
#include "HKMedicalRecordOriginIdentifier.h"
#include "HKCountrySet.h"
#include "HKHealthWrapCodableMessageKey.h"
#include "_HKBooleanFilter.h"
#include "HKReferenceRange.h"
#include "_HKFitnessFriendActivitySnapshot.h"
#include "HKOntologyEducationContent.h"
#include "HKWorkoutRouteQuery.h"
#include "_HKWorkoutRouteQueryServerConfiguration.h"
#include "HKNanoRegistryDeviceUtility.h"
#include "HKElectrocardiogramActiveAlgorithmVersion.h"
#include "HKUserDomainConceptQuery.h"
#include "HKUserDomainConceptQueryConfiguration.h"
#include "_HKUserDomainConceptQueryResult.h"
#include "HKProductVersions.h"
#include "HKUserDomainConcept.h"
#include "HKFeatureAvailabilityRequirements.h"
#include "_HKSampleTypeQuery.h"
#include "HKQuery.h"
#include "HKQueryServerConfiguration.h"
#include "_HKElectrocardiogramComparisonFilter.h"
#include "HKHeartRhythmOnboardingHistory.h"
#include "HKAuthorizationPresentationRequest.h"
#include "HKSignedClinicalDataRecordType.h"
#include "HKFeatureAvailabilityRequirementHeartRateIsEnabledInPrivacy.h"
#include "_HKDelayedOperation.h"
#include "HKAuthorizationRequestRecord.h"
#include "HKDateIntervalTree.h"
#include "HKClinicalProviderSearchResult.h"
#include "HKSleepAnalysisUtilities.h"
#include "HKPIIRedactor.h"
#include "HKProcedureRecordType.h"
#include "HKMetadataValidationUtilities.h"
#include "HKDiagnosticTestResultType.h"
#include "HKConceptSelection.h"
#include "HKFeatureAvailabilityOnboardingEligibility.h"
#include "HKQuantitySeriesSampleQuery.h"
#include "_HKQuantitySeriesSampleQueryServerConfiguration.h"
#include "HKHealthWrapCodableMessageHeader.h"
#include "HKRatioValue.h"
#include "HKInspectableValue.h"
#include "HKHealthRecordsStore.h"
#include "HKCloudSyncShareParticipantDescription.h"
#include "_HKBackgroundObservationExtensionRemoteContext.h"
#include "HKWorkoutCondenserControl.h"
#include "HKMedicalUserDomainConcept.h"
#include "HKDatabaseControl.h"
#include "HKAnchoredObjectQuery.h"
#include "_HKAnchoredObjectQueryServerConfiguration.h"
#include "HKMedicalRecord.h"
#include "HKSampleIteratorQueryCursor.h"
#include "HKElectrocardiogramBuilder.h"
#include "HKQueryAnchor.h"
#include "HKStaticSyncControl.h"
#include "HKAllowedCountries.h"
#include "_HKAllowedCountriesInLocalSet.h"
#include "_HKAllowedCountriesInLocalAndRemoteIntersectionMissingRemoteRestriction.h"
#include "_HKAllowedCountriesInIntersectionOfLocalAndRemoteSet.h"
#include "HKNonMPNDeviceRegionFeatureSupportedStateProvider.h"
#include "HKTaskServerProxyProvider.h"
#include "HKRemoteFeatureAvailabilityWatchOSVersionEqualsRule.h"
#include "_HKHeartRateRecoveryQueryUtility.h"
#include "_HKDimension.h"
#include "_HKBaseDimension.h"
#include "_HKCompoundDimension.h"
#include "HKActivitySummaryQuery.h"
#include "HKActivitySummaryQueryServerConfiguration.h"
#include "HKSourceStore.h"
#include "HKFeatureAvailabilityRequirementMutuallyExclusiveFeatureIsOff.h"
#include "HKWorkoutBuilderSampleQuery.h"
#include "_HKWorkoutBuilderSampleQueryConfiguration.h"
#include "HKFeatureAvailabilityRequirementProfileIsNotFamilySetupPairingProfile.h"
#include "_HKVerifiableClinicalRecordComparisonFilter.h"
#include "HKClinicalGatewayEndpointSchemaParameter.h"
#include "HKUCUMUnitDisplayConverter.h"
#include "HKCountryMonitorControl.h"
#include "HKCumulativeQuantitySeriesSample.h"
#include "HKStateMachinePendingEvent.h"
#include "HKStateMachineState.h"
#include "HKStateMachineTransition.h"
#include "HKStateMachine.h"
#include "HKWorkoutConfiguration.h"
#include "HKUserDomainConceptLinkCollection.h"
#include "HKConditionRecordType.h"
#include "HKHealthRecordsIngestionPerAccountOutcome.h"
#include "HKDateInterval.h"
#include "HKPairedFeatureAttributes.h"
#include "HKDeviceStore.h"
#include "HKFeatureAvailabilityRequirementsEvaluation.h"
#include "HKFeatureAvailabilityRequirementSet.h"
#include "HKClinicalBrand.h"
#include "HKRemoteFeatureAvailabilityBaseRule.h"
#include "HKRemoteFeatureAvailabilityAlwaysTrueRule.h"
#include "HKRemoteFeatureAvailabilityAlwaysFalseRule.h"
#include "HKFeatureOnboardingRecord.h"
#include "HKChartableCodedQuantity.h"
#include "HKElectrocardiogramVoltageMeasurement.h"
#include "HKElectrocardiogramQuery.h"
#include "HKRemoteFeatureAvailabilityActiveWatchAtrialFibrillationDetectionVersionLessThanRule.h"
#include "HKMedicalIDStore.h"
#include "_HKQueryUtilities.h"
#include "HKSemanticDate.h"
#include "HKActiveWatchRemoteFeatureAvailabilityDataSource.h"
#include "HKSummarySharingEntryStore.h"
#include "HKSharedSummary.h"
#include "HKConceptIndexKeyPath.h"
#include "HKConceptIndexUtilities.h"
#include "HKIndexableObject.h"
#include "_HKObservationBlock.h"
#include "_HKBridgedObserverSet.h"
#include "HKObserverBridgeHandle.h"
#include "HKObserverBridge.h"
#include "HKElectrocardiogramSession.h"
#include "HKElectrocardiogramSessionConfiguration.h"
#include "HKElectrocardiogramSessionTaskConfiguration.h"
#include "HKHealthServiceDiscovery.h"
#include "HKHealthServiceSession.h"
#include "HKCodableQuantitySeriesDatum.h"
#include "_HKFitnessMachineConnection.h"
#include "HKValueHistogramSegment.h"
#include "HKValueHistogram.h"
#include "HKValueHistogramCollection.h"
#include "HKHealthStoreProvider.h"
#include "HKRemoteFeatureAvailabilityWatchOSBuildVersionGreaterThanRule.h"
#include "HKPluginProxyProvider.h"
#include "_HKActivityCacheComparisonFilter.h"
#include "HKMedicationDispenseRecordType.h"
#include "HKQuantityRange.h"
#include "_HKFactorization.h"
#include "_HKMutableFactorization.h"
#include "HKHealthRecordsAccountInfoStore.h"
#include "HKDiagnosticTestReportType.h"
#include "HKFeatureAvailabilityStoreServerConfiguration.h"
#include "HKTaskConfiguration.h"
#include "HKSignedClinicalDataItem.h"
#include "HKJSONValidator.h"
#include "HKCSVParser.h"
#include "HKCoverageRecordType.h"
#include "HKCodableOntologyEducationContentSection.h"
#include "HKDiagnosticTestResult.h"
#include "HKQueryDescriptor.h"
#include "HKSeriesBuilder.h"
#include "HKMedicationDosage.h"
#include "_HKFitnessMachineSessionConfiguration.h"
#include "HKECGAvailabilityEngine.h"
#include "_HKDeepBreathingSession.h"
#include "HKLiveWorkoutDataSource.h"
#include "HKHeartbeatSequenceSample.h"
#include "_HKCategorySampleComparisonFilter.h"
#include "HKContributor.h"
#include "HKObjectType.h"
#include "HKQuantityType.h"
#include "HKCategoryType.h"
#include "HKCharacteristicType.h"
#include "HKCorrelationType.h"
#include "HKDocumentType.h"
#include "HKWorkoutType.h"
#include "HKSeriesType.h"
#include "HKActivitySummaryType.h"
#include "HKAudiogramSampleType.h"
#include "HKElectrocardiogramType.h"
#include "HKSampleType.h"
#include "HKHeartbeatSequenceSampleType.h"
#include "HKFeatureAttributes.h"
#include "_HKActivityStatisticsQuery.h"
#include "_HKActivityStatisticsQueryServerConfiguration.h"
#include "HKMultiTypeSampleIterator.h"
#include "HKRemoteFeatureAvailabilityWatchModelNumberHasPrefixRule.h"
#include "HKUserDomainConceptLink.h"
#include "HKWorkoutSession.h"
#include "HKWorkoutSessionTaskConfiguration.h"
#include "HKStatistics.h"
#include "_HKSampleQueryResult.h"
#include "_HKCurrentActivitySummaryQuery.h"
#include "_HKCurrentActivitySummaryQueryServerConfiguration.h"
#include "_HKWristDetectionSettingManagerObserverBridge.h"
#include "HKWristDetectionSettingDataSource.h"
#include "HKCloudSyncControl.h"
#include "HKMedicalType.h"
#include "_HKSampleComparisonFilter.h"
#include "HKDataFlowLink.h"
#include "HKSharedSummaryTransactionBuilder.h"
#include "HKSharedSummaryTransactionBuilderTaskConfiguration.h"
#include "HKClinicalProviderSearchResultsPage.h"
#include "HKCardioFitnessLevelData.h"
#include "HKCardioFitnessLookupProperties.h"
#include "HKCardioFitnessClassificationUtilities.h"
#include "HKKeyValueDomain.h"
#include "HKKeyValueDomainServerConfiguration.h"
#include "HKVerifiableClinicalRecordQuery.h"
#include "_HKVerifiableClinicalRecordQueryServerConfiguration.h"
#include "HKFHIRIdentifierElement.h"
#include "HKQuantityDatum.h"
#include "_HKCDADocumentSampleComparisonFilter.h"
#include "HKSeriesSample.h"
#include "_HKUserDefaultsBridgedObserver.h"
#include "HKUserDefaultsDataSource.h"
#include "HKMedicalDate.h"
#include "HKDiagnosticTestReport.h"
#include "HKChartableCodedQuantitySet.h"
#include "_HKDateCalendarUnitKey.h"
#include "HKSeriesBuilderConfiguration.h"
#include "HKCoverageRecord.h"
#include "HKFeatureAvailabilityRequirementCapabilityIsSupportedOnActiveRemoteDevice.h"
#include "HKAudiogramSample.h"
#include "_HKAudiogramDiagnosticSensitivityPoint.h"
#include "HKAudiogramSensitivityPoint.h"
#include "HKFeatureAvailabilityRequirementSatisfactionOverridesDataSource.h"
#include "HKDataCollector.h"
#include "HKDataCollectorTaskServerConfiguration.h"
#include "HKDataCollectorCollectionConfiguration.h"
#include "_HKDataCollectorPendingBatch.h"
#include "_HKDataCollectorFlushRequest.h"
#include "HKCodableQuantitySeriesEnumerationResult.h"
#include "_HKCompressionEngine.h"
#include "HKRemoteFeatureAvailabilityWatchOSBuildVersionLessThanRule.h"
#include "HKClinicalProviderSearchQueryDescription.h"
#include "HKSampleListDataProviderFilter.h"
#include "HKQuantitySeriesSampleEditor.h"
#include "HKQuantitySeriesSampleEditorTaskServerConfiguration.h"
#include "HKHeartRateSummaryStatisticsBucket.h"
#include "HKActivityCache.h"
#include "HKMedicationRecord.h"
#include "HKSharedSummaryQuery.h"
#include "_HKSharedSummaryQueryServerConfiguration.h"
#include "HKRemoteFeatureAvailabilityWatchCompanionDevicePlatformEqualsRule.h"
#include "_HKQuantityDistributionQuery.h"
#include "_HKQuantityDistributionQueryServerConfiguration.h"
#include "_HKQuantityDistributionData.h"
#include "HKEntitlementStore.h"
#include "HKQuantitySample.h"
#include "HKUserDomainConceptPropertyCollection.h"
#include "HKWristDetectionSettingManager.h"
#include "HKFHIRResource.h"
#include "HKEADFFileParser.h"
#include "_HKDateIntervalCollection.h"
#include "HKSignedClinicalDataUtilities.h"
#include "HKRelationshipConceptSelection.h"
#include "HKSignedClinicalDataSubject.h"
#include "HKAllConceptSelection.h"
#include "_HKMedicalIDData.h"
#include "_HKEmergencyContact.h"
#include "_HKClinicalContact.h"
#include "HKCountrySetBitmaskPath.h"
#include "HKRemoteFeatureAvailabilityOnboardingCountryCodeRule.h"
#include "_HKActivitySummaryComparisonFilter.h"
#include "HKHealthRecordsIngestionOutcome.h"
#include "HKWatchAppAvailability.h"
#include "_HKActivityStatisticsQueryResult.h"
#include "HKSourceQuery.h"
#include "HKFeatureAvailabilityOnboardingCompletionEligibility.h"
#include "_HKFitnessFriendAchievement.h"
#include "_HKFitnessMachine.h"
#include "HKSharingRecipientAuthorizationStore.h"
#include "HKSharingRecipientAuthorizationStoreTaskConfiguration.h"
#include "HKCurrentActivityCacheQueryResult.h"
#include "HKFeatureAvailabilityStore.h"
#include "HKActivitySummary.h"
#include "_HKCurrentWorkoutSnapshot.h"
#include "HKQueryServerProxyProvider.h"
#include "HKWorkoutRouteDataSource.h"
#include "HKWorkoutRouteBuilder.h"
#include "HKXPCEventObserver.h"
#include "HKFeatureAvailabilityRequirementOnboardingRecordIsNotPresent.h"
#include "HKUnit.h"
#include "_HKCompoundUnit.h"
#include "HKBaseUnit.h"
#include "HKMassUnit.h"
#include "HKLengthUnit.h"
#include "HKVolumeUnit.h"
#include "HKPressureUnit.h"
#include "HKDecibelAWeightedSoundPressureLevelUnit.h"
#include "HKTimeUnit.h"
#include "HKEnergyUnit.h"
#include "HKTemperatureUnit.h"
#include "HKConductanceUnit.h"
#include "HKElectricPotentialDifferenceUnit.h"
#include "HKFrequencyUnit.h"
#include "HKScalarUnit.h"
#include "HKNonConvertibleIUUnit.h"
#include "HKPotentiallyNonConvertibleMassUnit.h"
#include "HKEquivalentsUnit.h"
#include "HKMoleUnit.h"
#include "HKTiterUnit.h"
#include "HKDecibelHearingLevelUnit.h"
#include "_HKComparisonFilter.h"
#include "HKHeartRhythmAvailability.h"
#include "HKRemoteFeatureAvailabilityWatchBuildTypeEqualsRule.h"
#include "HKSleepPeriodSegment.h"
#include "HKSleepPeriod.h"
#include "HKPPTPluginManager.h"
#include "HKPPT.h"
#include "HKProfileIdentifier.h"
#include "HKVerifiableClinicalRecord.h"
#include "HKAttributeConceptSelection.h"
#include "HKHealthWrapCodablePayloadHeader.h"
#include "HKConceptStore.h"
#include "_HKActivityStatisticsStandHourInfo.h"
#include "_HKActivityStatisticsQuantityInfo.h"
#include "_HKActivityStatisticsWorkoutInfo.h"
#include "HKConceptQuery.h"
#include "HKConceptQueryConfiguration.h"
#include "HKHeartbeatSeriesSample.h"
#include "HKAllergyReaction.h"
#include "HKInspectableValueCollection.h"
#include "_HKExpiringCompletionTimer.h"
#include "HKSortedQueryAnchor.h"
#include "HKCodableCondensedWorkout.h"
#include "HKHealthWrapCodableKeyValue.h"
#include "HKHealthWrapEncryptor.h"
#include "HKSharedSummaryTransaction.h"
#include "HKClinicalType.h"
#include "HKCloudSyncZoneDescription.h"
#include "HKGPXExporter.h"
#include "HKVerifiableClinicalRecordSubject.h"
#include "HKStatisticsCollectionQuery.h"
#include "HKStatisticsCollection.h"
#include "_HKStatisticsCollectionQueryServerConfiguration.h"
#include "HKStatisticsCollectionCacheSettings.h"
#include "HKClinicalGatewayEndpointSchema.h"
#include "HKRemoteFeatureAvailabilityActiveWatchElectrocardiogramVersionEqualsRule.h"
#include "HKRemoteFeatureAvailabilityIOSVersionLessThanRule.h"
#include "_HKXMLExtractor.h"
#include "_HKXMLExtractorElement.h"
#include "_HKXMLExtractorSpecification.h"
#include "HKSummarySharingEntry.h"
#include "HKSleepDaySummary.h"
#include "HKSampleIteratorQuery.h"
#include "_HKSampleIteratorQueryServerConfiguration.h"
#include "HKAudioExposureValue.h"
#include "HKAudioExposureUtilities.h"
#include "HKVaccinationRecordType.h"
#include "_HKWheelchairUseCharacteristicCache.h"
#include "HKFeatureAvailabilityRequirementWristDetectionIsEnabledForActiveWatch.h"
#include "HKFeatureAvailabilityRequirementNotAgeGatedForUserDefaultsKey.h"
#include "HKFeatureAvailabilityRequirementSatisfactionOverrides.h"
#include "HKRemoteFeatureAvailabilityWatchOSVersionLessThanRule.h"
#include "_HKLocationShifter.h"
#include "HKConceptSynthesizer.h"
#include "HKLiveWorkoutBuilder.h"
#include "HKClinicalAccount.h"
#include "HKClinicalAccountLoginCompletionState.h"
#include "HKFeatureAvailabilityRequirementSeedIsNotExpired.h"
#include "HKFeatureAvailabilityMustBeTrueRequirement.h"
#include "HKCorrelationQuery.h"
#include "_HKCorrelationQueryServerConfiguration.h"
#include "HKProfileStore.h"
#include "HKClinicalProvider.h"
#include "HKDocumentSample.h"
#include "_HKWeakObserversMap.h"
#include "_HKXMLTranslator.h"
#include "HKFHIRVersion.h"
#include "HKDarwinNotificationDataSource.h"
#include "HKFeatureAvailabilityRequirementHealthAppIsNotHidden.h"
#include "HKUserDomainConceptProperty.h"
#include "HKTableFormatter.h"
#include "_HKQuantitySampleComparisonFilter.h"
#include "HKFeatureAvailabilityLocalRequirementEvaluationContext.h"
#include "HKFeatureAvailabilityRequirementEvaluationDataSource.h"
#include "HKFeatureAvailabilityRequirementOnboardedBeforeTimeAgo.h"
#include "HKOntologyEducationContentSection.h"
#include "HKCoverageClassification.h"
#include "_HKXPCConnection.h"
#include "_HKXPCExportedObjectProxy.h"
#include "_HKConceptIndexableComparisonFilter.h"
#include "HKCorrelation.h"
#include "_HKCorrelationPlaceholder.h"
#include "_HKDiagnosticTestResultComparisonFilter.h"
#include "HKValueHistogramCollectionQuery.h"
#include "HKValueHistogramCollectionQueryServerConfiguration.h"
#include "_HKFitnessFriendWorkout.h"
#include "HKWorkout.h"
#include "HKWorkoutEvent.h"
#include "HKOAuth2Credential.h"
#include "HKSecondaryDevicePairingAgent.h"
#include "HKSecondaryPairedDeviceConfiguration.h"
#include "_HKWorkoutEvent.h"
#include "HKCategorySample.h"
#include "HKRemoteFeatureAvailabilityIOSBuildVersionEqualsRule.h"
#include "_HKDatabaseChangesQuery.h"
#include "HKSampleTypeChange.h"
#include "_HKDatabaseChangesQueryServerConfiguration.h"
#include "_HKUserDomainConceptComparisonFilter.h"
#include "HKConditionRecord.h"
#include "_HKFirstPartyWorkoutSnapshot.h"
#include "_HKMobileAssetDownloadManager.h"
#include "_HKMobileAssetDownloadOperation.h"
#include "HKDiagnosticStore.h"
#include "HKClinicalSharingStatus.h"
#include "HKNotificationStore.h"
#include "HKVerifiableClinicalRecordType.h"
#include "HKSample.h"
#include "_HKSleepPeriodSegment.h"
#include "_HKSleepPeriod.h"
#include "HKSleepDay.h"
#include "HKRemoteFeatureAvailabilityRuleSet.h"
#include "_HKAuthorizationRecord.h"
#include "HKConceptResolutionDefinition.h"
#include "_HKBehavior.h"
#include "HKProcedureRecord.h"
#include "HKRemoteFeatureAvailabilityActiveWatchElectrocardiogramVersionLessThanRule.h"
#include "HKUnknownRecord.h"
#include "HKRemoteFeatureAvailabilityActiveWatchAtrialFibrillationDetectionVersionEqualsRule.h"
#include "_HKSampleQueryUtility.h"
#include "HKAllergyRecord.h"
#include "HKHealthWrapCodableValue.h"
#include "HKSampleCountQuery.h"
#include "_HKSampleCountQueryServerConfiguration.h"
#include "HKListUserDomainConcept.h"
#include "HKJSONVisitor.h"
#include "HKUserDomainConceptTypeIdentifier.h"
#include "_HKListUserDomainConceptComparisonFilter.h"
#include "_HKEmergencyContactWrapper.h"
#include "_HKBackgroundObservationExtensionContext.h"
#include "_HKBackgroundObservationExtensionHostContext.h"
#include "HKNanoSyncPairedDevicesSnapshot.h"
#include "HKNanoSyncPairedDeviceInfo.h"
#include "_HKCompoundFilter.h"
#include "HKHeartRateSummary.h"
#include "_HKWorkoutComparisonFilter.h"
#include "HKSignedClinicalDataIssuer.h"
#include "HKMedicationRecordType.h"
#include "HKDeviceQuery.h"
#include "HKSleepQuery.h"
#include "HKCloudSyncRepositoryDescription.h"
#include "HKVaccinationRecord.h"
#include "HKMedicalDateInterval.h"
#include "HKObjectAuthorizationPromptSessionMetadata.h"
#include "HKObjectAuthorizationPromptSessionContext.h"
#include "HKHeartRateSummaryStatistics.h"
#include "HKHeartRateSummaryWorkoutStatistics.h"
#include "HKHeartRateSummaryWorkoutRecoveryStatistics.h"
#include "HKHeartRateSummaryBreatheStatistics.h"
#include "HKDocumentQuery.h"
#include "_HKDocumentQueryServerConfiguration.h"
#include "HKCalendarCache.h"
#include "_HKDaemonPreferences.h"
#include "_HKWorkoutRouteStore.h"
#include "HKBeatToBeatInstantaneousBPM.h"
#include "HKHeartRateVariabilityUtilities.h"
#include "HKBackgroundObservationExtension.h"
#include "HKConceptRelationship.h"
#include "HKHealthServicesManager.h"
#include "HKMobileCountryCodeManager.h"
#include "HKMobileCountryCode.h"
#include "HKCloudSyncRecordIDDescription.h"
#include "HKSourceRevision.h"
#include "HKECGOnboardingVersion.h"
#include "_HKFilter.h"
#include "HKOAuth2TokenSession.h"
#include "HKMedicalCoding.h"
#include "HKGymKitMetricsDataSource.h"
#include "_HKFeatureAvailabilityProvidingObserverBridge.h"
#include "HKFeatureAvailabilityProvidingDataSource.h"
#include "_HKObjectComparisonFilter.h"
#include "HKElectrocardiogram.h"
#include "HKInspectableValueInRange.h"
#include "HKRemoteFeatureAvailabilityIOSVersionEqualsRule.h"
