// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBINTENTSLOTVALUE_H
#define _INPBINTENTSLOTVALUE_H

@class PBCodable, NSString, NSArray;
@protocol _INPBIntentSlotValue, NSSecureCoding, NSCopying;



@interface _INPBIntentSlotValue : PBCodable <_INPBIntentSlotValue, NSSecureCoding, NSCopying>

 {
    ? _payloadAccountTypes;
    ? _payloadAlarmPeriods;
    ? _payloadAlarmRepeatSchedules;
    ? _payloadAlarmSearchTypes;
    ? _payloadBalanceTypes;
    ? _payloadBillTypes;
    ? _payloadBinarySettingValues;
    ? _payloadBoundedSettingValues;
    ? _payloadCallAudioRoutes;
    ? _payloadCallCapabilities;
    ? _payloadCallDestinationTypes;
    ? _payloadCallRecordTypes;
    ? _payloadCarAirCirculationModes;
    ? _payloadCarAudioSources;
    ? _payloadCarDefrosters;
    ? _payloadCarSeats;
    ? _payloadCarSignalIdentifiers;
    ? _payloadChangeAlarmStatusOperations;
    ? _payloadDateSearchTypes;
    ? _payloadDeviceTypes;
    ? _payloadFileEntityTypes;
    ? _payloadFilePropertyNames;
    ? _payloadFilePropertyQualifiers;
    ? _payloadFileSearchScopes;
    ? _payloadFileShareModes;
    ? _payloadFileTypes;
    ? _payloadHomeAttributeTypes;
    ? _payloadHomeAttributeValueTypes;
    ? _payloadHomeDeviceTypes;
    ? _payloadHomeEntityTypes;
    ? _payloadLocationSearchTypes;
    ? _payloadMediaAffinityTypes;
    ? _payloadMessageAttributes;
    ? _payloadMessageEffects;
    ? _payloadMessageTypes;
    ? _payloadNotebookItemTypes;
    ? _payloadNumericSettingUnits;
    ? _payloadOutgoingMessageTypes;
    ? _payloadParsecCategories;
    ? _payloadPaymentStatus;
    ? _payloadPersonalPlaceTypes;
    ? _payloadPhotoAttributes;
    ? _payloadPlaybackQueueLocations;
    ? _payloadPlaybackRepeatModes;
    ? _payloadPreferredCallProviders;
    ? _payloadRadioTypes;
    ? _payloadReadActionTypes;
    ? _payloadRelativeReferences;
    ? _payloadRelativeSettings;
    ? _payloadSettingActions;
    ? _payloadTaskPriorities;
    ? _payloadTaskReferences;
    ? _payloadTaskStatus;
    ? _payloadTemporalEventTriggerTypes;
    ? _payloadTimerStates;
    ? _payloadTimerTypes;
    ? _payloadUpdateAlarmOperations;
    ? _payloadUserNotificationTypes;
    ? _payloadVisualCodeTypes;
    ? _payloadWellnessObjectTypes;
    ? _payloadWellnessQueryResultTypes;
    ? _payloadWellnessQuestionTypes;
    ? _payloadWorkoutGoalUnitTypes;
    ? _payloadWorkoutLocationTypes;
    ? _payloadWorkoutSequenceLabels;
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasType;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *int payloadAccountTypes;
@property (readonly, nonatomic) NSUInteger payloadAccountTypesCount;
@property (copy, nonatomic) NSArray *payloadActivities; // ivar: _payloadActivities
@property (readonly, nonatomic) NSUInteger payloadActivitiesCount;
@property (copy, nonatomic) NSArray *payloadActivityLists; // ivar: _payloadActivityLists
@property (readonly, nonatomic) NSUInteger payloadActivityListsCount;
@property (readonly, nonatomic) *int payloadAlarmPeriods;
@property (readonly, nonatomic) NSUInteger payloadAlarmPeriodsCount;
@property (readonly, nonatomic) *int payloadAlarmRepeatSchedules;
@property (readonly, nonatomic) NSUInteger payloadAlarmRepeatSchedulesCount;
@property (readonly, nonatomic) *int payloadAlarmSearchTypes;
@property (readonly, nonatomic) NSUInteger payloadAlarmSearchTypesCount;
@property (copy, nonatomic) NSArray *payloadAlarmSearchs; // ivar: _payloadAlarmSearchs
@property (readonly, nonatomic) NSUInteger payloadAlarmSearchsCount;
@property (copy, nonatomic) NSArray *payloadAlarms; // ivar: _payloadAlarms
@property (readonly, nonatomic) NSUInteger payloadAlarmsCount;
@property (copy, nonatomic) NSArray *payloadAnnouncements; // ivar: _payloadAnnouncements
@property (readonly, nonatomic) NSUInteger payloadAnnouncementsCount;
@property (copy, nonatomic) NSArray *payloadAppIdentifiers; // ivar: _payloadAppIdentifiers
@property (readonly, nonatomic) NSUInteger payloadAppIdentifiersCount;
@property (copy, nonatomic) NSArray *payloadArchivedObjects; // ivar: _payloadArchivedObjects
@property (readonly, nonatomic) NSUInteger payloadArchivedObjectsCount;
@property (readonly, nonatomic) *int payloadBalanceTypes;
@property (readonly, nonatomic) NSUInteger payloadBalanceTypesCount;
@property (copy, nonatomic) NSArray *payloadBillDetailsValues; // ivar: _payloadBillDetailsValues
@property (readonly, nonatomic) NSUInteger payloadBillDetailsValuesCount;
@property (copy, nonatomic) NSArray *payloadBillPayeeValues; // ivar: _payloadBillPayeeValues
@property (readonly, nonatomic) NSUInteger payloadBillPayeeValuesCount;
@property (readonly, nonatomic) *int payloadBillTypes;
@property (readonly, nonatomic) NSUInteger payloadBillTypesCount;
@property (readonly, nonatomic) *int payloadBinarySettingValues;
@property (readonly, nonatomic) NSUInteger payloadBinarySettingValuesCount;
@property (readonly, nonatomic) *int payloadBoundedSettingValues;
@property (readonly, nonatomic) NSUInteger payloadBoundedSettingValuesCount;
@property (readonly, nonatomic) *int payloadCallAudioRoutes;
@property (readonly, nonatomic) NSUInteger payloadCallAudioRoutesCount;
@property (readonly, nonatomic) *int payloadCallCapabilities;
@property (readonly, nonatomic) NSUInteger payloadCallCapabilitiesCount;
@property (readonly, nonatomic) *int payloadCallDestinationTypes;
@property (readonly, nonatomic) NSUInteger payloadCallDestinationTypesCount;
@property (copy, nonatomic) NSArray *payloadCallGroupConversations; // ivar: _payloadCallGroupConversations
@property (readonly, nonatomic) NSUInteger payloadCallGroupConversationsCount;
@property (copy, nonatomic) NSArray *payloadCallGroups; // ivar: _payloadCallGroups
@property (readonly, nonatomic) NSUInteger payloadCallGroupsCount;
@property (copy, nonatomic) NSArray *payloadCallRecordFilters; // ivar: _payloadCallRecordFilters
@property (readonly, nonatomic) NSUInteger payloadCallRecordFiltersCount;
@property (readonly, nonatomic) *int payloadCallRecordTypes;
@property (readonly, nonatomic) NSUInteger payloadCallRecordTypesCount;
@property (copy, nonatomic) NSArray *payloadCallRecordValues; // ivar: _payloadCallRecordValues
@property (readonly, nonatomic) NSUInteger payloadCallRecordValuesCount;
@property (readonly, nonatomic) *int payloadCarAirCirculationModes;
@property (readonly, nonatomic) NSUInteger payloadCarAirCirculationModesCount;
@property (readonly, nonatomic) *int payloadCarAudioSources;
@property (readonly, nonatomic) NSUInteger payloadCarAudioSourcesCount;
@property (readonly, nonatomic) *int payloadCarDefrosters;
@property (readonly, nonatomic) NSUInteger payloadCarDefrostersCount;
@property (readonly, nonatomic) *int payloadCarSeats;
@property (readonly, nonatomic) NSUInteger payloadCarSeatsCount;
@property (readonly, nonatomic) *int payloadCarSignalIdentifiers;
@property (readonly, nonatomic) NSUInteger payloadCarSignalIdentifiersCount;
@property (readonly, nonatomic) *int payloadChangeAlarmStatusOperations;
@property (readonly, nonatomic) NSUInteger payloadChangeAlarmStatusOperationsCount;
@property (copy, nonatomic) NSArray *payloadChargingConnectorTypes; // ivar: _payloadChargingConnectorTypes
@property (readonly, nonatomic) NSUInteger payloadChargingConnectorTypesCount;
@property (copy, nonatomic) NSArray *payloadContactEventTriggers; // ivar: _payloadContactEventTriggers
@property (readonly, nonatomic) NSUInteger payloadContactEventTriggersCount;
@property (copy, nonatomic) NSArray *payloadContactLists; // ivar: _payloadContactLists
@property (readonly, nonatomic) NSUInteger payloadContactListsCount;
@property (copy, nonatomic) NSArray *payloadContactValues; // ivar: _payloadContactValues
@property (readonly, nonatomic) NSUInteger payloadContactValuesCount;
@property (copy, nonatomic) NSArray *payloadCurrencyAmounts; // ivar: _payloadCurrencyAmounts
@property (readonly, nonatomic) NSUInteger payloadCurrencyAmountsCount;
@property (copy, nonatomic) NSArray *payloadCustomObjects; // ivar: _payloadCustomObjects
@property (readonly, nonatomic) NSUInteger payloadCustomObjectsCount;
@property (copy, nonatomic) NSArray *payloadDataStringLists; // ivar: _payloadDataStringLists
@property (readonly, nonatomic) NSUInteger payloadDataStringListsCount;
@property (copy, nonatomic) NSArray *payloadDataStrings; // ivar: _payloadDataStrings
@property (readonly, nonatomic) NSUInteger payloadDataStringsCount;
@property (readonly, nonatomic) *int payloadDateSearchTypes;
@property (readonly, nonatomic) NSUInteger payloadDateSearchTypesCount;
@property (copy, nonatomic) NSArray *payloadDateTimeRangeLists; // ivar: _payloadDateTimeRangeLists
@property (readonly, nonatomic) NSUInteger payloadDateTimeRangeListsCount;
@property (copy, nonatomic) NSArray *payloadDateTimeRangeValues; // ivar: _payloadDateTimeRangeValues
@property (readonly, nonatomic) NSUInteger payloadDateTimeRangeValuesCount;
@property (copy, nonatomic) NSArray *payloadDateTimeValues; // ivar: _payloadDateTimeValues
@property (readonly, nonatomic) NSUInteger payloadDateTimeValuesCount;
@property (copy, nonatomic) NSArray *payloadDeviceDetails; // ivar: _payloadDeviceDetails
@property (readonly, nonatomic) NSUInteger payloadDeviceDetailsCount;
@property (readonly, nonatomic) *int payloadDeviceTypes;
@property (readonly, nonatomic) NSUInteger payloadDeviceTypesCount;
@property (copy, nonatomic) NSArray *payloadDevices; // ivar: _payloadDevices
@property (readonly, nonatomic) NSUInteger payloadDevicesCount;
@property (copy, nonatomic) NSArray *payloadDialingContacts; // ivar: _payloadDialingContacts
@property (readonly, nonatomic) NSUInteger payloadDialingContactsCount;
@property (copy, nonatomic) NSArray *payloadDistanceLists; // ivar: _payloadDistanceLists
@property (readonly, nonatomic) NSUInteger payloadDistanceListsCount;
@property (copy, nonatomic) NSArray *payloadDistanceValues; // ivar: _payloadDistanceValues
@property (readonly, nonatomic) NSUInteger payloadDistanceValuesCount;
@property (copy, nonatomic) NSArray *payloadDoubleLists; // ivar: _payloadDoubleLists
@property (readonly, nonatomic) NSUInteger payloadDoubleListsCount;
@property (copy, nonatomic) NSArray *payloadDoubleValues; // ivar: _payloadDoubleValues
@property (readonly, nonatomic) NSUInteger payloadDoubleValuesCount;
@property (copy, nonatomic) NSArray *payloadEnergyValues; // ivar: _payloadEnergyValues
@property (readonly, nonatomic) NSUInteger payloadEnergyValuesCount;
@property (copy, nonatomic) NSArray *payloadEnumerations; // ivar: _payloadEnumerations
@property (readonly, nonatomic) NSUInteger payloadEnumerationsCount;
@property (copy, nonatomic) NSArray *payloadEventLists; // ivar: _payloadEventLists
@property (readonly, nonatomic) NSUInteger payloadEventListsCount;
@property (copy, nonatomic) NSArray *payloadEvents; // ivar: _payloadEvents
@property (readonly, nonatomic) NSUInteger payloadEventsCount;
@property (readonly, nonatomic) *int payloadFileEntityTypes;
@property (readonly, nonatomic) NSUInteger payloadFileEntityTypesCount;
@property (copy, nonatomic) NSArray *payloadFileProperties; // ivar: _payloadFileProperties
@property (readonly, nonatomic) NSUInteger payloadFilePropertiesCount;
@property (readonly, nonatomic) *int payloadFilePropertyNames;
@property (readonly, nonatomic) NSUInteger payloadFilePropertyNamesCount;
@property (readonly, nonatomic) *int payloadFilePropertyQualifiers;
@property (readonly, nonatomic) NSUInteger payloadFilePropertyQualifiersCount;
@property (copy, nonatomic) NSArray *payloadFilePropertyValues; // ivar: _payloadFilePropertyValues
@property (readonly, nonatomic) NSUInteger payloadFilePropertyValuesCount;
@property (readonly, nonatomic) *int payloadFileSearchScopes;
@property (readonly, nonatomic) NSUInteger payloadFileSearchScopesCount;
@property (readonly, nonatomic) *int payloadFileShareModes;
@property (readonly, nonatomic) NSUInteger payloadFileShareModesCount;
@property (readonly, nonatomic) *int payloadFileTypes;
@property (readonly, nonatomic) NSUInteger payloadFileTypesCount;
@property (copy, nonatomic) NSArray *payloadFiles; // ivar: _payloadFiles
@property (readonly, nonatomic) NSUInteger payloadFilesCount;
@property (copy, nonatomic) NSArray *payloadFinancialAccountValues; // ivar: _payloadFinancialAccountValues
@property (readonly, nonatomic) NSUInteger payloadFinancialAccountValuesCount;
@property (copy, nonatomic) NSArray *payloadGeographicalFeatureLists; // ivar: _payloadGeographicalFeatureLists
@property (readonly, nonatomic) NSUInteger payloadGeographicalFeatureListsCount;
@property (copy, nonatomic) NSArray *payloadGeographicalFeatures; // ivar: _payloadGeographicalFeatures
@property (readonly, nonatomic) NSUInteger payloadGeographicalFeaturesCount;
@property (copy, nonatomic) NSArray *payloadGetSettingResponseDatas; // ivar: _payloadGetSettingResponseDatas
@property (readonly, nonatomic) NSUInteger payloadGetSettingResponseDatasCount;
@property (readonly, nonatomic) *int payloadHomeAttributeTypes;
@property (readonly, nonatomic) NSUInteger payloadHomeAttributeTypesCount;
@property (readonly, nonatomic) *int payloadHomeAttributeValueTypes;
@property (readonly, nonatomic) NSUInteger payloadHomeAttributeValueTypesCount;
@property (copy, nonatomic) NSArray *payloadHomeAttributeValues; // ivar: _payloadHomeAttributeValues
@property (readonly, nonatomic) NSUInteger payloadHomeAttributeValuesCount;
@property (copy, nonatomic) NSArray *payloadHomeAttributes; // ivar: _payloadHomeAttributes
@property (readonly, nonatomic) NSUInteger payloadHomeAttributesCount;
@property (readonly, nonatomic) *int payloadHomeDeviceTypes;
@property (readonly, nonatomic) NSUInteger payloadHomeDeviceTypesCount;
@property (copy, nonatomic) NSArray *payloadHomeEntities; // ivar: _payloadHomeEntities
@property (readonly, nonatomic) NSUInteger payloadHomeEntitiesCount;
@property (readonly, nonatomic) *int payloadHomeEntityTypes;
@property (readonly, nonatomic) NSUInteger payloadHomeEntityTypesCount;
@property (copy, nonatomic) NSArray *payloadHomeFilters; // ivar: _payloadHomeFilters
@property (readonly, nonatomic) NSUInteger payloadHomeFiltersCount;
@property (copy, nonatomic) NSArray *payloadHomeUserTasks; // ivar: _payloadHomeUserTasks
@property (readonly, nonatomic) NSUInteger payloadHomeUserTasksCount;
@property (copy, nonatomic) NSArray *payloadIntegerLists; // ivar: _payloadIntegerLists
@property (readonly, nonatomic) NSUInteger payloadIntegerListsCount;
@property (copy, nonatomic) NSArray *payloadIntegerValues; // ivar: _payloadIntegerValues
@property (readonly, nonatomic) NSUInteger payloadIntegerValuesCount;
@property (copy, nonatomic) NSArray *payloadIntentExecutionResults; // ivar: _payloadIntentExecutionResults
@property (readonly, nonatomic) NSUInteger payloadIntentExecutionResultsCount;
@property (copy, nonatomic) NSArray *payloadIntents; // ivar: _payloadIntents
@property (readonly, nonatomic) NSUInteger payloadIntentsCount;
@property (copy, nonatomic) NSArray *payloadLocationLists; // ivar: _payloadLocationLists
@property (readonly, nonatomic) NSUInteger payloadLocationListsCount;
@property (readonly, nonatomic) *int payloadLocationSearchTypes;
@property (readonly, nonatomic) NSUInteger payloadLocationSearchTypesCount;
@property (copy, nonatomic) NSArray *payloadLocations; // ivar: _payloadLocations
@property (readonly, nonatomic) NSUInteger payloadLocationsCount;
@property (copy, nonatomic) NSArray *payloadLongLists; // ivar: _payloadLongLists
@property (readonly, nonatomic) NSUInteger payloadLongListsCount;
@property (copy, nonatomic) NSArray *payloadLongValues; // ivar: _payloadLongValues
@property (readonly, nonatomic) NSUInteger payloadLongValuesCount;
@property (copy, nonatomic) NSArray *payloadMassValues; // ivar: _payloadMassValues
@property (readonly, nonatomic) NSUInteger payloadMassValuesCount;
@property (readonly, nonatomic) *int payloadMediaAffinityTypes;
@property (readonly, nonatomic) NSUInteger payloadMediaAffinityTypesCount;
@property (copy, nonatomic) NSArray *payloadMediaDestinations; // ivar: _payloadMediaDestinations
@property (readonly, nonatomic) NSUInteger payloadMediaDestinationsCount;
@property (copy, nonatomic) NSArray *payloadMediaItemGroups; // ivar: _payloadMediaItemGroups
@property (readonly, nonatomic) NSUInteger payloadMediaItemGroupsCount;
@property (copy, nonatomic) NSArray *payloadMediaItemValues; // ivar: _payloadMediaItemValues
@property (readonly, nonatomic) NSUInteger payloadMediaItemValuesCount;
@property (copy, nonatomic) NSArray *payloadMediaSearchs; // ivar: _payloadMediaSearchs
@property (readonly, nonatomic) NSUInteger payloadMediaSearchsCount;
@property (readonly, nonatomic) *int payloadMessageAttributes;
@property (readonly, nonatomic) NSUInteger payloadMessageAttributesCount;
@property (readonly, nonatomic) *int payloadMessageEffects;
@property (readonly, nonatomic) NSUInteger payloadMessageEffectsCount;
@property (readonly, nonatomic) *int payloadMessageTypes;
@property (readonly, nonatomic) NSUInteger payloadMessageTypesCount;
@property (copy, nonatomic) NSArray *payloadModifyNicknames; // ivar: _payloadModifyNicknames
@property (readonly, nonatomic) NSUInteger payloadModifyNicknamesCount;
@property (copy, nonatomic) NSArray *payloadModifyRelationships; // ivar: _payloadModifyRelationships
@property (readonly, nonatomic) NSUInteger payloadModifyRelationshipsCount;
@property (copy, nonatomic) NSArray *payloadNoteContents; // ivar: _payloadNoteContents
@property (readonly, nonatomic) NSUInteger payloadNoteContentsCount;
@property (readonly, nonatomic) *int payloadNotebookItemTypes;
@property (readonly, nonatomic) NSUInteger payloadNotebookItemTypesCount;
@property (copy, nonatomic) NSArray *payloadNotes; // ivar: _payloadNotes
@property (readonly, nonatomic) NSUInteger payloadNotesCount;
@property (readonly, nonatomic) *int payloadNumericSettingUnits;
@property (readonly, nonatomic) NSUInteger payloadNumericSettingUnitsCount;
@property (copy, nonatomic) NSArray *payloadNumericSettingValues; // ivar: _payloadNumericSettingValues
@property (readonly, nonatomic) NSUInteger payloadNumericSettingValuesCount;
@property (readonly, nonatomic) *int payloadOutgoingMessageTypes;
@property (readonly, nonatomic) NSUInteger payloadOutgoingMessageTypesCount;
@property (readonly, nonatomic) *int payloadParsecCategories;
@property (readonly, nonatomic) NSUInteger payloadParsecCategoriesCount;
@property (copy, nonatomic) NSArray *payloadPaymentAmountValues; // ivar: _payloadPaymentAmountValues
@property (readonly, nonatomic) NSUInteger payloadPaymentAmountValuesCount;
@property (copy, nonatomic) NSArray *payloadPaymentMethodLists; // ivar: _payloadPaymentMethodLists
@property (readonly, nonatomic) NSUInteger payloadPaymentMethodListsCount;
@property (copy, nonatomic) NSArray *payloadPaymentMethodValues; // ivar: _payloadPaymentMethodValues
@property (readonly, nonatomic) NSUInteger payloadPaymentMethodValuesCount;
@property (readonly, nonatomic) *int payloadPaymentStatus;
@property (readonly, nonatomic) NSUInteger payloadPaymentStatusCount;
@property (readonly, nonatomic) *int payloadPersonalPlaceTypes;
@property (readonly, nonatomic) NSUInteger payloadPersonalPlaceTypesCount;
@property (readonly, nonatomic) *int payloadPhotoAttributes;
@property (readonly, nonatomic) NSUInteger payloadPhotoAttributesCount;
@property (copy, nonatomic) NSArray *payloadPlaceLists; // ivar: _payloadPlaceLists
@property (readonly, nonatomic) NSUInteger payloadPlaceListsCount;
@property (copy, nonatomic) NSArray *payloadPlaces; // ivar: _payloadPlaces
@property (readonly, nonatomic) NSUInteger payloadPlacesCount;
@property (readonly, nonatomic) *int payloadPlaybackQueueLocations;
@property (readonly, nonatomic) NSUInteger payloadPlaybackQueueLocationsCount;
@property (readonly, nonatomic) *int payloadPlaybackRepeatModes;
@property (readonly, nonatomic) NSUInteger payloadPlaybackRepeatModesCount;
@property (readonly, nonatomic) *int payloadPreferredCallProviders;
@property (readonly, nonatomic) NSUInteger payloadPreferredCallProvidersCount;
@property (copy, nonatomic) NSArray *payloadPrimitiveBools; // ivar: _payloadPrimitiveBools
@property (readonly, nonatomic) NSUInteger payloadPrimitiveBoolsCount;
@property (copy, nonatomic) NSArray *payloadPrimitiveDoubles; // ivar: _payloadPrimitiveDoubles
@property (readonly, nonatomic) NSUInteger payloadPrimitiveDoublesCount;
@property (copy, nonatomic) NSArray *payloadPrimitiveInts; // ivar: _payloadPrimitiveInts
@property (readonly, nonatomic) NSUInteger payloadPrimitiveIntsCount;
@property (copy, nonatomic) NSArray *payloadPrimitiveLongs; // ivar: _payloadPrimitiveLongs
@property (readonly, nonatomic) NSUInteger payloadPrimitiveLongsCount;
@property (copy, nonatomic) NSArray *payloadPrimitiveStrings; // ivar: _payloadPrimitiveStrings
@property (readonly, nonatomic) NSUInteger payloadPrimitiveStringsCount;
@property (copy, nonatomic) NSArray *payloadPrivateAddMediaIntentDatas; // ivar: _payloadPrivateAddMediaIntentDatas
@property (readonly, nonatomic) NSUInteger payloadPrivateAddMediaIntentDatasCount;
@property (copy, nonatomic) NSArray *payloadPrivatePlayMediaIntentDatas; // ivar: _payloadPrivatePlayMediaIntentDatas
@property (readonly, nonatomic) NSUInteger payloadPrivatePlayMediaIntentDatasCount;
@property (copy, nonatomic) NSArray *payloadPrivateSearchForMediaIntentDatas; // ivar: _payloadPrivateSearchForMediaIntentDatas
@property (readonly, nonatomic) NSUInteger payloadPrivateSearchForMediaIntentDatasCount;
@property (copy, nonatomic) NSArray *payloadPrivateUpdateMediaAffinityIntentDatas; // ivar: _payloadPrivateUpdateMediaAffinityIntentDatas
@property (readonly, nonatomic) NSUInteger payloadPrivateUpdateMediaAffinityIntentDatasCount;
@property (readonly, nonatomic) *int payloadRadioTypes;
@property (readonly, nonatomic) NSUInteger payloadRadioTypesCount;
@property (readonly, nonatomic) *int payloadReadActionTypes;
@property (readonly, nonatomic) NSUInteger payloadReadActionTypesCount;
@property (readonly, nonatomic) *int payloadRelativeReferences;
@property (readonly, nonatomic) NSUInteger payloadRelativeReferencesCount;
@property (readonly, nonatomic) *int payloadRelativeSettings;
@property (readonly, nonatomic) NSUInteger payloadRelativeSettingsCount;
@property (copy, nonatomic) NSArray *payloadSendMessageAttachments; // ivar: _payloadSendMessageAttachments
@property (readonly, nonatomic) NSUInteger payloadSendMessageAttachmentsCount;
@property (readonly, nonatomic) *int payloadSettingActions;
@property (readonly, nonatomic) NSUInteger payloadSettingActionsCount;
@property (copy, nonatomic) NSArray *payloadSettingMetadatas; // ivar: _payloadSettingMetadatas
@property (readonly, nonatomic) NSUInteger payloadSettingMetadatasCount;
@property (copy, nonatomic) NSArray *payloadShareDestinations; // ivar: _payloadShareDestinations
@property (readonly, nonatomic) NSUInteger payloadShareDestinationsCount;
@property (copy, nonatomic) NSArray *payloadSleepAlarmAttributes; // ivar: _payloadSleepAlarmAttributes
@property (readonly, nonatomic) NSUInteger payloadSleepAlarmAttributesCount;
@property (copy, nonatomic) NSArray *payloadSpatialEventTriggers; // ivar: _payloadSpatialEventTriggers
@property (readonly, nonatomic) NSUInteger payloadSpatialEventTriggersCount;
@property (copy, nonatomic) NSArray *payloadSpeedValues; // ivar: _payloadSpeedValues
@property (readonly, nonatomic) NSUInteger payloadSpeedValuesCount;
@property (copy, nonatomic) NSArray *payloadStringLists; // ivar: _payloadStringLists
@property (readonly, nonatomic) NSUInteger payloadStringListsCount;
@property (copy, nonatomic) NSArray *payloadStringValues; // ivar: _payloadStringValues
@property (readonly, nonatomic) NSUInteger payloadStringValuesCount;
@property (copy, nonatomic) NSArray *payloadSupportedTrafficIncidentTypes; // ivar: _payloadSupportedTrafficIncidentTypes
@property (readonly, nonatomic) NSUInteger payloadSupportedTrafficIncidentTypesCount;
@property (copy, nonatomic) NSArray *payloadTaskLists; // ivar: _payloadTaskLists
@property (readonly, nonatomic) NSUInteger payloadTaskListsCount;
@property (readonly, nonatomic) *int payloadTaskPriorities;
@property (readonly, nonatomic) NSUInteger payloadTaskPrioritiesCount;
@property (readonly, nonatomic) *int payloadTaskReferences;
@property (readonly, nonatomic) NSUInteger payloadTaskReferencesCount;
@property (readonly, nonatomic) *int payloadTaskStatus;
@property (readonly, nonatomic) NSUInteger payloadTaskStatusCount;
@property (copy, nonatomic) NSArray *payloadTasks; // ivar: _payloadTasks
@property (readonly, nonatomic) NSUInteger payloadTasksCount;
@property (copy, nonatomic) NSArray *payloadTemperatureLists; // ivar: _payloadTemperatureLists
@property (readonly, nonatomic) NSUInteger payloadTemperatureListsCount;
@property (copy, nonatomic) NSArray *payloadTemperatureValues; // ivar: _payloadTemperatureValues
@property (readonly, nonatomic) NSUInteger payloadTemperatureValuesCount;
@property (readonly, nonatomic) *int payloadTemporalEventTriggerTypes;
@property (readonly, nonatomic) NSUInteger payloadTemporalEventTriggerTypesCount;
@property (copy, nonatomic) NSArray *payloadTemporalEventTriggers; // ivar: _payloadTemporalEventTriggers
@property (readonly, nonatomic) NSUInteger payloadTemporalEventTriggersCount;
@property (readonly, nonatomic) *int payloadTimerStates;
@property (readonly, nonatomic) NSUInteger payloadTimerStatesCount;
@property (readonly, nonatomic) *int payloadTimerTypes;
@property (readonly, nonatomic) NSUInteger payloadTimerTypesCount;
@property (copy, nonatomic) NSArray *payloadTimers; // ivar: _payloadTimers
@property (readonly, nonatomic) NSUInteger payloadTimersCount;
@property (copy, nonatomic) NSArray *payloadURLValues; // ivar: _payloadURLValues
@property (readonly, nonatomic) NSUInteger payloadURLValuesCount;
@property (readonly, nonatomic) *int payloadUpdateAlarmOperations;
@property (readonly, nonatomic) NSUInteger payloadUpdateAlarmOperationsCount;
@property (readonly, nonatomic) *int payloadUserNotificationTypes;
@property (readonly, nonatomic) NSUInteger payloadUserNotificationTypesCount;
@property (readonly, nonatomic) *int payloadVisualCodeTypes;
@property (readonly, nonatomic) NSUInteger payloadVisualCodeTypesCount;
@property (copy, nonatomic) NSArray *payloadVoiceCommandDeviceInformations; // ivar: _payloadVoiceCommandDeviceInformations
@property (readonly, nonatomic) NSUInteger payloadVoiceCommandDeviceInformationsCount;
@property (copy, nonatomic) NSArray *payloadVolumeValues; // ivar: _payloadVolumeValues
@property (readonly, nonatomic) NSUInteger payloadVolumeValuesCount;
@property (copy, nonatomic) NSArray *payloadWellnessMetadataPairs; // ivar: _payloadWellnessMetadataPairs
@property (readonly, nonatomic) NSUInteger payloadWellnessMetadataPairsCount;
@property (copy, nonatomic) NSArray *payloadWellnessObjectResultValues; // ivar: _payloadWellnessObjectResultValues
@property (readonly, nonatomic) NSUInteger payloadWellnessObjectResultValuesCount;
@property (readonly, nonatomic) *int payloadWellnessObjectTypes;
@property (readonly, nonatomic) NSUInteger payloadWellnessObjectTypesCount;
@property (readonly, nonatomic) *int payloadWellnessQueryResultTypes;
@property (readonly, nonatomic) NSUInteger payloadWellnessQueryResultTypesCount;
@property (readonly, nonatomic) *int payloadWellnessQuestionTypes;
@property (readonly, nonatomic) NSUInteger payloadWellnessQuestionTypesCount;
@property (copy, nonatomic) NSArray *payloadWellnessUnitTypes; // ivar: _payloadWellnessUnitTypes
@property (readonly, nonatomic) NSUInteger payloadWellnessUnitTypesCount;
@property (copy, nonatomic) NSArray *payloadWellnessValues; // ivar: _payloadWellnessValues
@property (readonly, nonatomic) NSUInteger payloadWellnessValuesCount;
@property (copy, nonatomic) NSArray *payloadWorkoutAssociatedItems; // ivar: _payloadWorkoutAssociatedItems
@property (readonly, nonatomic) NSUInteger payloadWorkoutAssociatedItemsCount;
@property (copy, nonatomic) NSArray *payloadWorkoutCustomizations; // ivar: _payloadWorkoutCustomizations
@property (readonly, nonatomic) NSUInteger payloadWorkoutCustomizationsCount;
@property (readonly, nonatomic) *int payloadWorkoutGoalUnitTypes;
@property (readonly, nonatomic) NSUInteger payloadWorkoutGoalUnitTypesCount;
@property (readonly, nonatomic) *int payloadWorkoutLocationTypes;
@property (readonly, nonatomic) NSUInteger payloadWorkoutLocationTypesCount;
@property (readonly, nonatomic) *int payloadWorkoutSequenceLabels;
@property (readonly, nonatomic) NSUInteger payloadWorkoutSequenceLabelsCount;
@property (readonly) Class superclass;
@property (nonatomic) int type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(Class)payloadActivityListType;
+(Class)payloadActivityType;
+(Class)payloadAlarmSearchType;
+(Class)payloadAlarmType;
+(Class)payloadAnnouncementType;
+(Class)payloadAppIdentifierType;
+(Class)payloadArchivedObjectType;
+(Class)payloadBillDetailsValueType;
+(Class)payloadBillPayeeValueType;
+(Class)payloadCallGroupConversationType;
+(Class)payloadCallGroupType;
+(Class)payloadCallRecordFilterType;
+(Class)payloadCallRecordValueType;
+(Class)payloadContactEventTriggerType;
+(Class)payloadContactListType;
+(Class)payloadContactValueType;
+(Class)payloadCurrencyAmountType;
+(Class)payloadCustomObjectType;
+(Class)payloadDataStringListType;
+(Class)payloadDataStringType;
+(Class)payloadDateTimeRangeListType;
+(Class)payloadDateTimeRangeValueType;
+(Class)payloadDateTimeValueType;
+(Class)payloadDeviceDetailType;
+(Class)payloadDeviceType;
+(Class)payloadDialingContactType;
+(Class)payloadDistanceListType;
+(Class)payloadDistanceValueType;
+(Class)payloadDoubleListType;
+(Class)payloadDoubleValueType;
+(Class)payloadEnergyValueType;
+(Class)payloadEventListType;
+(Class)payloadEventType;
+(Class)payloadFilePropertyType;
+(Class)payloadFilePropertyValueType;
+(Class)payloadFileType;
+(Class)payloadFinancialAccountValueType;
+(Class)payloadGeographicalFeatureListType;
+(Class)payloadGeographicalFeatureType;
+(Class)payloadGetSettingResponseDataType;
+(Class)payloadHomeAttributeType;
+(Class)payloadHomeAttributeValueType;
+(Class)payloadHomeEntityType;
+(Class)payloadHomeFilterType;
+(Class)payloadHomeUserTaskType;
+(Class)payloadIntegerListType;
+(Class)payloadIntegerValueType;
+(Class)payloadIntentExecutionResultType;
+(Class)payloadIntentType;
+(Class)payloadLocationListType;
+(Class)payloadLocationType;
+(Class)payloadLongListType;
+(Class)payloadLongValueType;
+(Class)payloadMassValueType;
+(Class)payloadMediaDestinationType;
+(Class)payloadMediaItemGroupType;
+(Class)payloadMediaItemValueType;
+(Class)payloadMediaSearchType;
+(Class)payloadModifyNicknameType;
+(Class)payloadModifyRelationshipType;
+(Class)payloadNoteContentType;
+(Class)payloadNoteType;
+(Class)payloadNumericSettingValueType;
+(Class)payloadPaymentAmountValueType;
+(Class)payloadPaymentMethodListType;
+(Class)payloadPaymentMethodValueType;
+(Class)payloadPlaceListType;
+(Class)payloadPlaceType;
+(Class)payloadPrivateAddMediaIntentDataType;
+(Class)payloadPrivatePlayMediaIntentDataType;
+(Class)payloadPrivateSearchForMediaIntentDataType;
+(Class)payloadPrivateUpdateMediaAffinityIntentDataType;
+(Class)payloadSendMessageAttachmentType;
+(Class)payloadSettingMetadataType;
+(Class)payloadShareDestinationType;
+(Class)payloadSleepAlarmAttributeType;
+(Class)payloadSpatialEventTriggerType;
+(Class)payloadSpeedValueType;
+(Class)payloadStringListType;
+(Class)payloadStringValueType;
+(Class)payloadSupportedTrafficIncidentTypeType;
+(Class)payloadTaskListType;
+(Class)payloadTaskType;
+(Class)payloadTemperatureListType;
+(Class)payloadTemperatureValueType;
+(Class)payloadTemporalEventTriggerType;
+(Class)payloadTimerType;
+(Class)payloadURLValueType;
+(Class)payloadVoiceCommandDeviceInformationType;
+(Class)payloadVolumeValueType;
+(Class)payloadWellnessMetadataPairType;
+(Class)payloadWellnessObjectResultValueType;
+(Class)payloadWellnessUnitTypeType;
+(Class)payloadWellnessValueType;
+(Class)payloadWorkoutAssociatedItemType;
+(Class)payloadWorkoutCustomizationType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)payloadPrimitiveBoolAtIndex:(NSUInteger)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(CGFloat)payloadPrimitiveDoubleAtIndex:(NSUInteger)arg0 ;
-(NSInteger)payloadEnumerationAtIndex:(NSUInteger)arg0 ;
-(NSInteger)payloadPrimitiveLongAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)payloadAccountTypesAsString:(int)arg0 ;
-(id)payloadActivityAtIndex:(NSUInteger)arg0 ;
-(id)payloadActivityListAtIndex:(NSUInteger)arg0 ;
-(id)payloadAlarmAtIndex:(NSUInteger)arg0 ;
-(id)payloadAlarmPeriodsAsString:(int)arg0 ;
-(id)payloadAlarmRepeatSchedulesAsString:(int)arg0 ;
-(id)payloadAlarmSearchAtIndex:(NSUInteger)arg0 ;
-(id)payloadAlarmSearchTypesAsString:(int)arg0 ;
-(id)payloadAnnouncementAtIndex:(NSUInteger)arg0 ;
-(id)payloadAppIdentifierAtIndex:(NSUInteger)arg0 ;
-(id)payloadArchivedObjectAtIndex:(NSUInteger)arg0 ;
-(id)payloadBalanceTypesAsString:(int)arg0 ;
-(id)payloadBillDetailsValueAtIndex:(NSUInteger)arg0 ;
-(id)payloadBillPayeeValueAtIndex:(NSUInteger)arg0 ;
-(id)payloadBillTypesAsString:(int)arg0 ;
-(id)payloadBinarySettingValuesAsString:(int)arg0 ;
-(id)payloadBoundedSettingValuesAsString:(int)arg0 ;
-(id)payloadCallAudioRoutesAsString:(int)arg0 ;
-(id)payloadCallCapabilitiesAsString:(int)arg0 ;
-(id)payloadCallDestinationTypesAsString:(int)arg0 ;
-(id)payloadCallGroupAtIndex:(NSUInteger)arg0 ;
-(id)payloadCallGroupConversationAtIndex:(NSUInteger)arg0 ;
-(id)payloadCallRecordFilterAtIndex:(NSUInteger)arg0 ;
-(id)payloadCallRecordTypesAsString:(int)arg0 ;
-(id)payloadCallRecordValueAtIndex:(NSUInteger)arg0 ;
-(id)payloadCarAirCirculationModesAsString:(int)arg0 ;
-(id)payloadCarAudioSourcesAsString:(int)arg0 ;
-(id)payloadCarDefrostersAsString:(int)arg0 ;
-(id)payloadCarSeatsAsString:(int)arg0 ;
-(id)payloadCarSignalIdentifiersAsString:(int)arg0 ;
-(id)payloadChangeAlarmStatusOperationsAsString:(int)arg0 ;
-(id)payloadChargingConnectorTypeAtIndex:(NSUInteger)arg0 ;
-(id)payloadContactEventTriggerAtIndex:(NSUInteger)arg0 ;
-(id)payloadContactListAtIndex:(NSUInteger)arg0 ;
-(id)payloadContactValueAtIndex:(NSUInteger)arg0 ;
-(id)payloadCurrencyAmountAtIndex:(NSUInteger)arg0 ;
-(id)payloadCustomObjectAtIndex:(NSUInteger)arg0 ;
-(id)payloadDataStringAtIndex:(NSUInteger)arg0 ;
-(id)payloadDataStringListAtIndex:(NSUInteger)arg0 ;
-(id)payloadDateSearchTypesAsString:(int)arg0 ;
-(id)payloadDateTimeRangeListAtIndex:(NSUInteger)arg0 ;
-(id)payloadDateTimeRangeValueAtIndex:(NSUInteger)arg0 ;
-(id)payloadDateTimeValueAtIndex:(NSUInteger)arg0 ;
-(id)payloadDeviceAtIndex:(NSUInteger)arg0 ;
-(id)payloadDeviceDetailAtIndex:(NSUInteger)arg0 ;
-(id)payloadDeviceTypesAsString:(int)arg0 ;
-(id)payloadDialingContactAtIndex:(NSUInteger)arg0 ;
-(id)payloadDistanceListAtIndex:(NSUInteger)arg0 ;
-(id)payloadDistanceValueAtIndex:(NSUInteger)arg0 ;
-(id)payloadDoubleListAtIndex:(NSUInteger)arg0 ;
-(id)payloadDoubleValueAtIndex:(NSUInteger)arg0 ;
-(id)payloadEnergyValueAtIndex:(NSUInteger)arg0 ;
-(id)payloadEventAtIndex:(NSUInteger)arg0 ;
-(id)payloadEventListAtIndex:(NSUInteger)arg0 ;
-(id)payloadFileAtIndex:(NSUInteger)arg0 ;
-(id)payloadFileEntityTypesAsString:(int)arg0 ;
-(id)payloadFilePropertyAtIndex:(NSUInteger)arg0 ;
-(id)payloadFilePropertyNamesAsString:(int)arg0 ;
-(id)payloadFilePropertyQualifiersAsString:(int)arg0 ;
-(id)payloadFilePropertyValueAtIndex:(NSUInteger)arg0 ;
-(id)payloadFileSearchScopesAsString:(int)arg0 ;
-(id)payloadFileShareModesAsString:(int)arg0 ;
-(id)payloadFileTypesAsString:(int)arg0 ;
-(id)payloadFinancialAccountValueAtIndex:(NSUInteger)arg0 ;
-(id)payloadGeographicalFeatureAtIndex:(NSUInteger)arg0 ;
-(id)payloadGeographicalFeatureListAtIndex:(NSUInteger)arg0 ;
-(id)payloadGetSettingResponseDataAtIndex:(NSUInteger)arg0 ;
-(id)payloadHomeAttributeAtIndex:(NSUInteger)arg0 ;
-(id)payloadHomeAttributeTypesAsString:(int)arg0 ;
-(id)payloadHomeAttributeValueAtIndex:(NSUInteger)arg0 ;
-(id)payloadHomeAttributeValueTypesAsString:(int)arg0 ;
-(id)payloadHomeDeviceTypesAsString:(int)arg0 ;
-(id)payloadHomeEntityAtIndex:(NSUInteger)arg0 ;
-(id)payloadHomeEntityTypesAsString:(int)arg0 ;
-(id)payloadHomeFilterAtIndex:(NSUInteger)arg0 ;
-(id)payloadHomeUserTaskAtIndex:(NSUInteger)arg0 ;
-(id)payloadIntegerListAtIndex:(NSUInteger)arg0 ;
-(id)payloadIntegerValueAtIndex:(NSUInteger)arg0 ;
-(id)payloadIntentAtIndex:(NSUInteger)arg0 ;
-(id)payloadIntentExecutionResultAtIndex:(NSUInteger)arg0 ;
-(id)payloadLocationAtIndex:(NSUInteger)arg0 ;
-(id)payloadLocationListAtIndex:(NSUInteger)arg0 ;
-(id)payloadLocationSearchTypesAsString:(int)arg0 ;
-(id)payloadLongListAtIndex:(NSUInteger)arg0 ;
-(id)payloadLongValueAtIndex:(NSUInteger)arg0 ;
-(id)payloadMassValueAtIndex:(NSUInteger)arg0 ;
-(id)payloadMediaAffinityTypesAsString:(int)arg0 ;
-(id)payloadMediaDestinationAtIndex:(NSUInteger)arg0 ;
-(id)payloadMediaItemGroupAtIndex:(NSUInteger)arg0 ;
-(id)payloadMediaItemValueAtIndex:(NSUInteger)arg0 ;
-(id)payloadMediaSearchAtIndex:(NSUInteger)arg0 ;
-(id)payloadMessageAttributesAsString:(int)arg0 ;
-(id)payloadMessageEffectsAsString:(int)arg0 ;
-(id)payloadMessageTypesAsString:(int)arg0 ;
-(id)payloadModifyNicknameAtIndex:(NSUInteger)arg0 ;
-(id)payloadModifyRelationshipAtIndex:(NSUInteger)arg0 ;
-(id)payloadNoteAtIndex:(NSUInteger)arg0 ;
-(id)payloadNoteContentAtIndex:(NSUInteger)arg0 ;
-(id)payloadNotebookItemTypesAsString:(int)arg0 ;
-(id)payloadNumericSettingUnitsAsString:(int)arg0 ;
-(id)payloadNumericSettingValueAtIndex:(NSUInteger)arg0 ;
-(id)payloadOutgoingMessageTypesAsString:(int)arg0 ;
-(id)payloadParsecCategoriesAsString:(int)arg0 ;
-(id)payloadPaymentAmountValueAtIndex:(NSUInteger)arg0 ;
-(id)payloadPaymentMethodListAtIndex:(NSUInteger)arg0 ;
-(id)payloadPaymentMethodValueAtIndex:(NSUInteger)arg0 ;
-(id)payloadPaymentStatusAsString:(int)arg0 ;
-(id)payloadPersonalPlaceTypesAsString:(int)arg0 ;
-(id)payloadPhotoAttributesAsString:(int)arg0 ;
-(id)payloadPlaceAtIndex:(NSUInteger)arg0 ;
-(id)payloadPlaceListAtIndex:(NSUInteger)arg0 ;
-(id)payloadPlaybackQueueLocationsAsString:(int)arg0 ;
-(id)payloadPlaybackRepeatModesAsString:(int)arg0 ;
-(id)payloadPreferredCallProvidersAsString:(int)arg0 ;
-(id)payloadPrimitiveStringAtIndex:(NSUInteger)arg0 ;
-(id)payloadPrivateAddMediaIntentDataAtIndex:(NSUInteger)arg0 ;
-(id)payloadPrivatePlayMediaIntentDataAtIndex:(NSUInteger)arg0 ;
-(id)payloadPrivateSearchForMediaIntentDataAtIndex:(NSUInteger)arg0 ;
-(id)payloadPrivateUpdateMediaAffinityIntentDataAtIndex:(NSUInteger)arg0 ;
-(id)payloadRadioTypesAsString:(int)arg0 ;
-(id)payloadReadActionTypesAsString:(int)arg0 ;
-(id)payloadRelativeReferencesAsString:(int)arg0 ;
-(id)payloadRelativeSettingsAsString:(int)arg0 ;
-(id)payloadSendMessageAttachmentAtIndex:(NSUInteger)arg0 ;
-(id)payloadSettingActionsAsString:(int)arg0 ;
-(id)payloadSettingMetadataAtIndex:(NSUInteger)arg0 ;
-(id)payloadShareDestinationAtIndex:(NSUInteger)arg0 ;
-(id)payloadSleepAlarmAttributeAtIndex:(NSUInteger)arg0 ;
-(id)payloadSpatialEventTriggerAtIndex:(NSUInteger)arg0 ;
-(id)payloadSpeedValueAtIndex:(NSUInteger)arg0 ;
-(id)payloadStringListAtIndex:(NSUInteger)arg0 ;
-(id)payloadStringValueAtIndex:(NSUInteger)arg0 ;
-(id)payloadSupportedTrafficIncidentTypeAtIndex:(NSUInteger)arg0 ;
-(id)payloadTaskAtIndex:(NSUInteger)arg0 ;
-(id)payloadTaskListAtIndex:(NSUInteger)arg0 ;
-(id)payloadTaskPrioritiesAsString:(int)arg0 ;
-(id)payloadTaskReferencesAsString:(int)arg0 ;
-(id)payloadTaskStatusAsString:(int)arg0 ;
-(id)payloadTemperatureListAtIndex:(NSUInteger)arg0 ;
-(id)payloadTemperatureValueAtIndex:(NSUInteger)arg0 ;
-(id)payloadTemporalEventTriggerAtIndex:(NSUInteger)arg0 ;
-(id)payloadTemporalEventTriggerTypesAsString:(int)arg0 ;
-(id)payloadTimerAtIndex:(NSUInteger)arg0 ;
-(id)payloadTimerStatesAsString:(int)arg0 ;
-(id)payloadTimerTypesAsString:(int)arg0 ;
-(id)payloadURLValueAtIndex:(NSUInteger)arg0 ;
-(id)payloadUpdateAlarmOperationsAsString:(int)arg0 ;
-(id)payloadUserNotificationTypesAsString:(int)arg0 ;
-(id)payloadVisualCodeTypesAsString:(int)arg0 ;
-(id)payloadVoiceCommandDeviceInformationAtIndex:(NSUInteger)arg0 ;
-(id)payloadVolumeValueAtIndex:(NSUInteger)arg0 ;
-(id)payloadWellnessMetadataPairAtIndex:(NSUInteger)arg0 ;
-(id)payloadWellnessObjectResultValueAtIndex:(NSUInteger)arg0 ;
-(id)payloadWellnessObjectTypesAsString:(int)arg0 ;
-(id)payloadWellnessQueryResultTypesAsString:(int)arg0 ;
-(id)payloadWellnessQuestionTypesAsString:(int)arg0 ;
-(id)payloadWellnessUnitTypeAtIndex:(NSUInteger)arg0 ;
-(id)payloadWellnessValueAtIndex:(NSUInteger)arg0 ;
-(id)payloadWorkoutAssociatedItemAtIndex:(NSUInteger)arg0 ;
-(id)payloadWorkoutCustomizationAtIndex:(NSUInteger)arg0 ;
-(id)payloadWorkoutGoalUnitTypesAsString:(int)arg0 ;
-(id)payloadWorkoutLocationTypesAsString:(int)arg0 ;
-(id)payloadWorkoutSequenceLabelsAsString:(int)arg0 ;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsPayloadAccountTypes:(id)arg0 ;
-(int)StringAsPayloadAlarmPeriods:(id)arg0 ;
-(int)StringAsPayloadAlarmRepeatSchedules:(id)arg0 ;
-(int)StringAsPayloadAlarmSearchTypes:(id)arg0 ;
-(int)StringAsPayloadBalanceTypes:(id)arg0 ;
-(int)StringAsPayloadBillTypes:(id)arg0 ;
-(int)StringAsPayloadBinarySettingValues:(id)arg0 ;
-(int)StringAsPayloadBoundedSettingValues:(id)arg0 ;
-(int)StringAsPayloadCallAudioRoutes:(id)arg0 ;
-(int)StringAsPayloadCallCapabilities:(id)arg0 ;
-(int)StringAsPayloadCallDestinationTypes:(id)arg0 ;
-(int)StringAsPayloadCallRecordTypes:(id)arg0 ;
-(int)StringAsPayloadCarAirCirculationModes:(id)arg0 ;
-(int)StringAsPayloadCarAudioSources:(id)arg0 ;
-(int)StringAsPayloadCarDefrosters:(id)arg0 ;
-(int)StringAsPayloadCarSeats:(id)arg0 ;
-(int)StringAsPayloadCarSignalIdentifiers:(id)arg0 ;
-(int)StringAsPayloadChangeAlarmStatusOperations:(id)arg0 ;
-(int)StringAsPayloadDateSearchTypes:(id)arg0 ;
-(int)StringAsPayloadDeviceTypes:(id)arg0 ;
-(int)StringAsPayloadFileEntityTypes:(id)arg0 ;
-(int)StringAsPayloadFilePropertyNames:(id)arg0 ;
-(int)StringAsPayloadFilePropertyQualifiers:(id)arg0 ;
-(int)StringAsPayloadFileSearchScopes:(id)arg0 ;
-(int)StringAsPayloadFileShareModes:(id)arg0 ;
-(int)StringAsPayloadFileTypes:(id)arg0 ;
-(int)StringAsPayloadHomeAttributeTypes:(id)arg0 ;
-(int)StringAsPayloadHomeAttributeValueTypes:(id)arg0 ;
-(int)StringAsPayloadHomeDeviceTypes:(id)arg0 ;
-(int)StringAsPayloadHomeEntityTypes:(id)arg0 ;
-(int)StringAsPayloadLocationSearchTypes:(id)arg0 ;
-(int)StringAsPayloadMediaAffinityTypes:(id)arg0 ;
-(int)StringAsPayloadMessageAttributes:(id)arg0 ;
-(int)StringAsPayloadMessageEffects:(id)arg0 ;
-(int)StringAsPayloadMessageTypes:(id)arg0 ;
-(int)StringAsPayloadNotebookItemTypes:(id)arg0 ;
-(int)StringAsPayloadNumericSettingUnits:(id)arg0 ;
-(int)StringAsPayloadOutgoingMessageTypes:(id)arg0 ;
-(int)StringAsPayloadParsecCategories:(id)arg0 ;
-(int)StringAsPayloadPaymentStatus:(id)arg0 ;
-(int)StringAsPayloadPersonalPlaceTypes:(id)arg0 ;
-(int)StringAsPayloadPhotoAttributes:(id)arg0 ;
-(int)StringAsPayloadPlaybackQueueLocations:(id)arg0 ;
-(int)StringAsPayloadPlaybackRepeatModes:(id)arg0 ;
-(int)StringAsPayloadPreferredCallProviders:(id)arg0 ;
-(int)StringAsPayloadRadioTypes:(id)arg0 ;
-(int)StringAsPayloadReadActionTypes:(id)arg0 ;
-(int)StringAsPayloadRelativeReferences:(id)arg0 ;
-(int)StringAsPayloadRelativeSettings:(id)arg0 ;
-(int)StringAsPayloadSettingActions:(id)arg0 ;
-(int)StringAsPayloadTaskPriorities:(id)arg0 ;
-(int)StringAsPayloadTaskReferences:(id)arg0 ;
-(int)StringAsPayloadTaskStatus:(id)arg0 ;
-(int)StringAsPayloadTemporalEventTriggerTypes:(id)arg0 ;
-(int)StringAsPayloadTimerStates:(id)arg0 ;
-(int)StringAsPayloadTimerTypes:(id)arg0 ;
-(int)StringAsPayloadUpdateAlarmOperations:(id)arg0 ;
-(int)StringAsPayloadUserNotificationTypes:(id)arg0 ;
-(int)StringAsPayloadVisualCodeTypes:(id)arg0 ;
-(int)StringAsPayloadWellnessObjectTypes:(id)arg0 ;
-(int)StringAsPayloadWellnessQueryResultTypes:(id)arg0 ;
-(int)StringAsPayloadWellnessQuestionTypes:(id)arg0 ;
-(int)StringAsPayloadWorkoutGoalUnitTypes:(id)arg0 ;
-(int)StringAsPayloadWorkoutLocationTypes:(id)arg0 ;
-(int)StringAsPayloadWorkoutSequenceLabels:(id)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(int)payloadAccountTypeAtIndex:(NSUInteger)arg0 ;
-(int)payloadAlarmPeriodAtIndex:(NSUInteger)arg0 ;
-(int)payloadAlarmRepeatScheduleAtIndex:(NSUInteger)arg0 ;
-(int)payloadAlarmSearchTypeAtIndex:(NSUInteger)arg0 ;
-(int)payloadBalanceTypeAtIndex:(NSUInteger)arg0 ;
-(int)payloadBillTypeAtIndex:(NSUInteger)arg0 ;
-(int)payloadBinarySettingValueAtIndex:(NSUInteger)arg0 ;
-(int)payloadBoundedSettingValueAtIndex:(NSUInteger)arg0 ;
-(int)payloadCallAudioRouteAtIndex:(NSUInteger)arg0 ;
-(int)payloadCallCapabilityAtIndex:(NSUInteger)arg0 ;
-(int)payloadCallDestinationTypeAtIndex:(NSUInteger)arg0 ;
-(int)payloadCallRecordTypeAtIndex:(NSUInteger)arg0 ;
-(int)payloadCarAirCirculationModeAtIndex:(NSUInteger)arg0 ;
-(int)payloadCarAudioSourceAtIndex:(NSUInteger)arg0 ;
-(int)payloadCarDefrosterAtIndex:(NSUInteger)arg0 ;
-(int)payloadCarSeatAtIndex:(NSUInteger)arg0 ;
-(int)payloadCarSignalIdentifierAtIndex:(NSUInteger)arg0 ;
-(int)payloadChangeAlarmStatusOperationAtIndex:(NSUInteger)arg0 ;
-(int)payloadDateSearchTypeAtIndex:(NSUInteger)arg0 ;
-(int)payloadDeviceTypeAtIndex:(NSUInteger)arg0 ;
-(int)payloadFileEntityTypeAtIndex:(NSUInteger)arg0 ;
-(int)payloadFilePropertyNameAtIndex:(NSUInteger)arg0 ;
-(int)payloadFilePropertyQualifierAtIndex:(NSUInteger)arg0 ;
-(int)payloadFileSearchScopeAtIndex:(NSUInteger)arg0 ;
-(int)payloadFileShareModeAtIndex:(NSUInteger)arg0 ;
-(int)payloadFileTypeAtIndex:(NSUInteger)arg0 ;
-(int)payloadHomeAttributeTypeAtIndex:(NSUInteger)arg0 ;
-(int)payloadHomeAttributeValueTypeAtIndex:(NSUInteger)arg0 ;
-(int)payloadHomeDeviceTypeAtIndex:(NSUInteger)arg0 ;
-(int)payloadHomeEntityTypeAtIndex:(NSUInteger)arg0 ;
-(int)payloadLocationSearchTypeAtIndex:(NSUInteger)arg0 ;
-(int)payloadMediaAffinityTypeAtIndex:(NSUInteger)arg0 ;
-(int)payloadMessageAttributeAtIndex:(NSUInteger)arg0 ;
-(int)payloadMessageEffectAtIndex:(NSUInteger)arg0 ;
-(int)payloadMessageTypeAtIndex:(NSUInteger)arg0 ;
-(int)payloadNotebookItemTypeAtIndex:(NSUInteger)arg0 ;
-(int)payloadNumericSettingUnitAtIndex:(NSUInteger)arg0 ;
-(int)payloadOutgoingMessageTypeAtIndex:(NSUInteger)arg0 ;
-(int)payloadParsecCategoryAtIndex:(NSUInteger)arg0 ;
-(int)payloadPaymentStatusAtIndex:(NSUInteger)arg0 ;
-(int)payloadPersonalPlaceTypeAtIndex:(NSUInteger)arg0 ;
-(int)payloadPhotoAttributeAtIndex:(NSUInteger)arg0 ;
-(int)payloadPlaybackQueueLocationAtIndex:(NSUInteger)arg0 ;
-(int)payloadPlaybackRepeatModeAtIndex:(NSUInteger)arg0 ;
-(int)payloadPreferredCallProviderAtIndex:(NSUInteger)arg0 ;
-(int)payloadPrimitiveIntAtIndex:(NSUInteger)arg0 ;
-(int)payloadRadioTypeAtIndex:(NSUInteger)arg0 ;
-(int)payloadReadActionTypeAtIndex:(NSUInteger)arg0 ;
-(int)payloadRelativeReferenceAtIndex:(NSUInteger)arg0 ;
-(int)payloadRelativeSettingAtIndex:(NSUInteger)arg0 ;
-(int)payloadSettingActionAtIndex:(NSUInteger)arg0 ;
-(int)payloadTaskPriorityAtIndex:(NSUInteger)arg0 ;
-(int)payloadTaskReferenceAtIndex:(NSUInteger)arg0 ;
-(int)payloadTaskStatusAtIndex:(NSUInteger)arg0 ;
-(int)payloadTemporalEventTriggerTypeAtIndex:(NSUInteger)arg0 ;
-(int)payloadTimerStateAtIndex:(NSUInteger)arg0 ;
-(int)payloadTimerTypeAtIndex:(NSUInteger)arg0 ;
-(int)payloadUpdateAlarmOperationAtIndex:(NSUInteger)arg0 ;
-(int)payloadUserNotificationTypeAtIndex:(NSUInteger)arg0 ;
-(int)payloadVisualCodeTypeAtIndex:(NSUInteger)arg0 ;
-(int)payloadWellnessObjectTypeAtIndex:(NSUInteger)arg0 ;
-(int)payloadWellnessQueryResultTypeAtIndex:(NSUInteger)arg0 ;
-(int)payloadWellnessQuestionTypeAtIndex:(NSUInteger)arg0 ;
-(int)payloadWorkoutGoalUnitTypeAtIndex:(NSUInteger)arg0 ;
-(int)payloadWorkoutLocationTypeAtIndex:(NSUInteger)arg0 ;
-(int)payloadWorkoutSequenceLabelAtIndex:(NSUInteger)arg0 ;
-(void)addPayloadAccountType:(int)arg0 ;
-(void)addPayloadActivity:(id)arg0 ;
-(void)addPayloadActivityList:(id)arg0 ;
-(void)addPayloadAlarm:(id)arg0 ;
-(void)addPayloadAlarmPeriod:(int)arg0 ;
-(void)addPayloadAlarmRepeatSchedule:(int)arg0 ;
-(void)addPayloadAlarmSearch:(id)arg0 ;
-(void)addPayloadAlarmSearchType:(int)arg0 ;
-(void)addPayloadAnnouncement:(id)arg0 ;
-(void)addPayloadAppIdentifier:(id)arg0 ;
-(void)addPayloadArchivedObject:(id)arg0 ;
-(void)addPayloadBalanceType:(int)arg0 ;
-(void)addPayloadBillDetailsValue:(id)arg0 ;
-(void)addPayloadBillPayeeValue:(id)arg0 ;
-(void)addPayloadBillType:(int)arg0 ;
-(void)addPayloadBinarySettingValue:(int)arg0 ;
-(void)addPayloadBoundedSettingValue:(int)arg0 ;
-(void)addPayloadCallAudioRoute:(int)arg0 ;
-(void)addPayloadCallCapability:(int)arg0 ;
-(void)addPayloadCallDestinationType:(int)arg0 ;
-(void)addPayloadCallGroup:(id)arg0 ;
-(void)addPayloadCallGroupConversation:(id)arg0 ;
-(void)addPayloadCallRecordFilter:(id)arg0 ;
-(void)addPayloadCallRecordType:(int)arg0 ;
-(void)addPayloadCallRecordValue:(id)arg0 ;
-(void)addPayloadCarAirCirculationMode:(int)arg0 ;
-(void)addPayloadCarAudioSource:(int)arg0 ;
-(void)addPayloadCarDefroster:(int)arg0 ;
-(void)addPayloadCarSeat:(int)arg0 ;
-(void)addPayloadCarSignalIdentifier:(int)arg0 ;
-(void)addPayloadChangeAlarmStatusOperation:(int)arg0 ;
-(void)addPayloadChargingConnectorType:(id)arg0 ;
-(void)addPayloadContactEventTrigger:(id)arg0 ;
-(void)addPayloadContactList:(id)arg0 ;
-(void)addPayloadContactValue:(id)arg0 ;
-(void)addPayloadCurrencyAmount:(id)arg0 ;
-(void)addPayloadCustomObject:(id)arg0 ;
-(void)addPayloadDataString:(id)arg0 ;
-(void)addPayloadDataStringList:(id)arg0 ;
-(void)addPayloadDateSearchType:(int)arg0 ;
-(void)addPayloadDateTimeRangeList:(id)arg0 ;
-(void)addPayloadDateTimeRangeValue:(id)arg0 ;
-(void)addPayloadDateTimeValue:(id)arg0 ;
-(void)addPayloadDevice:(id)arg0 ;
-(void)addPayloadDeviceDetail:(id)arg0 ;
-(void)addPayloadDeviceType:(int)arg0 ;
-(void)addPayloadDialingContact:(id)arg0 ;
-(void)addPayloadDistanceList:(id)arg0 ;
-(void)addPayloadDistanceValue:(id)arg0 ;
-(void)addPayloadDoubleList:(id)arg0 ;
-(void)addPayloadDoubleValue:(id)arg0 ;
-(void)addPayloadEnergyValue:(id)arg0 ;
-(void)addPayloadEnumeration:(NSInteger)arg0 ;
-(void)addPayloadEvent:(id)arg0 ;
-(void)addPayloadEventList:(id)arg0 ;
-(void)addPayloadFile:(id)arg0 ;
-(void)addPayloadFileEntityType:(int)arg0 ;
-(void)addPayloadFileProperty:(id)arg0 ;
-(void)addPayloadFilePropertyName:(int)arg0 ;
-(void)addPayloadFilePropertyQualifier:(int)arg0 ;
-(void)addPayloadFilePropertyValue:(id)arg0 ;
-(void)addPayloadFileSearchScope:(int)arg0 ;
-(void)addPayloadFileShareMode:(int)arg0 ;
-(void)addPayloadFileType:(int)arg0 ;
-(void)addPayloadFinancialAccountValue:(id)arg0 ;
-(void)addPayloadGeographicalFeature:(id)arg0 ;
-(void)addPayloadGeographicalFeatureList:(id)arg0 ;
-(void)addPayloadGetSettingResponseData:(id)arg0 ;
-(void)addPayloadHomeAttribute:(id)arg0 ;
-(void)addPayloadHomeAttributeType:(int)arg0 ;
-(void)addPayloadHomeAttributeValue:(id)arg0 ;
-(void)addPayloadHomeAttributeValueType:(int)arg0 ;
-(void)addPayloadHomeDeviceType:(int)arg0 ;
-(void)addPayloadHomeEntity:(id)arg0 ;
-(void)addPayloadHomeEntityType:(int)arg0 ;
-(void)addPayloadHomeFilter:(id)arg0 ;
-(void)addPayloadHomeUserTask:(id)arg0 ;
-(void)addPayloadIntegerList:(id)arg0 ;
-(void)addPayloadIntegerValue:(id)arg0 ;
-(void)addPayloadIntent:(id)arg0 ;
-(void)addPayloadIntentExecutionResult:(id)arg0 ;
-(void)addPayloadLocation:(id)arg0 ;
-(void)addPayloadLocationList:(id)arg0 ;
-(void)addPayloadLocationSearchType:(int)arg0 ;
-(void)addPayloadLongList:(id)arg0 ;
-(void)addPayloadLongValue:(id)arg0 ;
-(void)addPayloadMassValue:(id)arg0 ;
-(void)addPayloadMediaAffinityType:(int)arg0 ;
-(void)addPayloadMediaDestination:(id)arg0 ;
-(void)addPayloadMediaItemGroup:(id)arg0 ;
-(void)addPayloadMediaItemValue:(id)arg0 ;
-(void)addPayloadMediaSearch:(id)arg0 ;
-(void)addPayloadMessageAttribute:(int)arg0 ;
-(void)addPayloadMessageEffect:(int)arg0 ;
-(void)addPayloadMessageType:(int)arg0 ;
-(void)addPayloadModifyNickname:(id)arg0 ;
-(void)addPayloadModifyRelationship:(id)arg0 ;
-(void)addPayloadNote:(id)arg0 ;
-(void)addPayloadNoteContent:(id)arg0 ;
-(void)addPayloadNotebookItemType:(int)arg0 ;
-(void)addPayloadNumericSettingUnit:(int)arg0 ;
-(void)addPayloadNumericSettingValue:(id)arg0 ;
-(void)addPayloadOutgoingMessageType:(int)arg0 ;
-(void)addPayloadParsecCategory:(int)arg0 ;
-(void)addPayloadPaymentAmountValue:(id)arg0 ;
-(void)addPayloadPaymentMethodList:(id)arg0 ;
-(void)addPayloadPaymentMethodValue:(id)arg0 ;
-(void)addPayloadPaymentStatus:(int)arg0 ;
-(void)addPayloadPersonalPlaceType:(int)arg0 ;
-(void)addPayloadPhotoAttribute:(int)arg0 ;
-(void)addPayloadPlace:(id)arg0 ;
-(void)addPayloadPlaceList:(id)arg0 ;
-(void)addPayloadPlaybackQueueLocation:(int)arg0 ;
-(void)addPayloadPlaybackRepeatMode:(int)arg0 ;
-(void)addPayloadPreferredCallProvider:(int)arg0 ;
-(void)addPayloadPrimitiveBool:(BOOL)arg0 ;
-(void)addPayloadPrimitiveDouble:(CGFloat)arg0 ;
-(void)addPayloadPrimitiveInt:(int)arg0 ;
-(void)addPayloadPrimitiveLong:(NSInteger)arg0 ;
-(void)addPayloadPrimitiveString:(id)arg0 ;
-(void)addPayloadPrivateAddMediaIntentData:(id)arg0 ;
-(void)addPayloadPrivatePlayMediaIntentData:(id)arg0 ;
-(void)addPayloadPrivateSearchForMediaIntentData:(id)arg0 ;
-(void)addPayloadPrivateUpdateMediaAffinityIntentData:(id)arg0 ;
-(void)addPayloadRadioType:(int)arg0 ;
-(void)addPayloadReadActionType:(int)arg0 ;
-(void)addPayloadRelativeReference:(int)arg0 ;
-(void)addPayloadRelativeSetting:(int)arg0 ;
-(void)addPayloadSendMessageAttachment:(id)arg0 ;
-(void)addPayloadSettingAction:(int)arg0 ;
-(void)addPayloadSettingMetadata:(id)arg0 ;
-(void)addPayloadShareDestination:(id)arg0 ;
-(void)addPayloadSleepAlarmAttribute:(id)arg0 ;
-(void)addPayloadSpatialEventTrigger:(id)arg0 ;
-(void)addPayloadSpeedValue:(id)arg0 ;
-(void)addPayloadStringList:(id)arg0 ;
-(void)addPayloadStringValue:(id)arg0 ;
-(void)addPayloadSupportedTrafficIncidentType:(id)arg0 ;
-(void)addPayloadTask:(id)arg0 ;
-(void)addPayloadTaskList:(id)arg0 ;
-(void)addPayloadTaskPriority:(int)arg0 ;
-(void)addPayloadTaskReference:(int)arg0 ;
-(void)addPayloadTaskStatus:(int)arg0 ;
-(void)addPayloadTemperatureList:(id)arg0 ;
-(void)addPayloadTemperatureValue:(id)arg0 ;
-(void)addPayloadTemporalEventTrigger:(id)arg0 ;
-(void)addPayloadTemporalEventTriggerType:(int)arg0 ;
-(void)addPayloadTimer:(id)arg0 ;
-(void)addPayloadTimerState:(int)arg0 ;
-(void)addPayloadTimerType:(int)arg0 ;
-(void)addPayloadURLValue:(id)arg0 ;
-(void)addPayloadUpdateAlarmOperation:(int)arg0 ;
-(void)addPayloadUserNotificationType:(int)arg0 ;
-(void)addPayloadVisualCodeType:(int)arg0 ;
-(void)addPayloadVoiceCommandDeviceInformation:(id)arg0 ;
-(void)addPayloadVolumeValue:(id)arg0 ;
-(void)addPayloadWellnessMetadataPair:(id)arg0 ;
-(void)addPayloadWellnessObjectResultValue:(id)arg0 ;
-(void)addPayloadWellnessObjectType:(int)arg0 ;
-(void)addPayloadWellnessQueryResultType:(int)arg0 ;
-(void)addPayloadWellnessQuestionType:(int)arg0 ;
-(void)addPayloadWellnessUnitType:(id)arg0 ;
-(void)addPayloadWellnessValue:(id)arg0 ;
-(void)addPayloadWorkoutAssociatedItem:(id)arg0 ;
-(void)addPayloadWorkoutCustomization:(id)arg0 ;
-(void)addPayloadWorkoutGoalUnitType:(int)arg0 ;
-(void)addPayloadWorkoutLocationType:(int)arg0 ;
-(void)addPayloadWorkoutSequenceLabel:(int)arg0 ;
-(void)clearPayloadAccountTypes;
-(void)clearPayloadActivities;
-(void)clearPayloadActivityLists;
-(void)clearPayloadAlarmPeriods;
-(void)clearPayloadAlarmRepeatSchedules;
-(void)clearPayloadAlarmSearchTypes;
-(void)clearPayloadAlarmSearchs;
-(void)clearPayloadAlarms;
-(void)clearPayloadAnnouncements;
-(void)clearPayloadAppIdentifiers;
-(void)clearPayloadArchivedObjects;
-(void)clearPayloadBalanceTypes;
-(void)clearPayloadBillDetailsValues;
-(void)clearPayloadBillPayeeValues;
-(void)clearPayloadBillTypes;
-(void)clearPayloadBinarySettingValues;
-(void)clearPayloadBoundedSettingValues;
-(void)clearPayloadCallAudioRoutes;
-(void)clearPayloadCallCapabilities;
-(void)clearPayloadCallDestinationTypes;
-(void)clearPayloadCallGroupConversations;
-(void)clearPayloadCallGroups;
-(void)clearPayloadCallRecordFilters;
-(void)clearPayloadCallRecordTypes;
-(void)clearPayloadCallRecordValues;
-(void)clearPayloadCarAirCirculationModes;
-(void)clearPayloadCarAudioSources;
-(void)clearPayloadCarDefrosters;
-(void)clearPayloadCarSeats;
-(void)clearPayloadCarSignalIdentifiers;
-(void)clearPayloadChangeAlarmStatusOperations;
-(void)clearPayloadChargingConnectorTypes;
-(void)clearPayloadContactEventTriggers;
-(void)clearPayloadContactLists;
-(void)clearPayloadContactValues;
-(void)clearPayloadCurrencyAmounts;
-(void)clearPayloadCustomObjects;
-(void)clearPayloadDataStringLists;
-(void)clearPayloadDataStrings;
-(void)clearPayloadDateSearchTypes;
-(void)clearPayloadDateTimeRangeLists;
-(void)clearPayloadDateTimeRangeValues;
-(void)clearPayloadDateTimeValues;
-(void)clearPayloadDeviceDetails;
-(void)clearPayloadDeviceTypes;
-(void)clearPayloadDevices;
-(void)clearPayloadDialingContacts;
-(void)clearPayloadDistanceLists;
-(void)clearPayloadDistanceValues;
-(void)clearPayloadDoubleLists;
-(void)clearPayloadDoubleValues;
-(void)clearPayloadEnergyValues;
-(void)clearPayloadEnumerations;
-(void)clearPayloadEventLists;
-(void)clearPayloadEvents;
-(void)clearPayloadFileEntityTypes;
-(void)clearPayloadFileProperties;
-(void)clearPayloadFilePropertyNames;
-(void)clearPayloadFilePropertyQualifiers;
-(void)clearPayloadFilePropertyValues;
-(void)clearPayloadFileSearchScopes;
-(void)clearPayloadFileShareModes;
-(void)clearPayloadFileTypes;
-(void)clearPayloadFiles;
-(void)clearPayloadFinancialAccountValues;
-(void)clearPayloadGeographicalFeatureLists;
-(void)clearPayloadGeographicalFeatures;
-(void)clearPayloadGetSettingResponseDatas;
-(void)clearPayloadHomeAttributeTypes;
-(void)clearPayloadHomeAttributeValueTypes;
-(void)clearPayloadHomeAttributeValues;
-(void)clearPayloadHomeAttributes;
-(void)clearPayloadHomeDeviceTypes;
-(void)clearPayloadHomeEntities;
-(void)clearPayloadHomeEntityTypes;
-(void)clearPayloadHomeFilters;
-(void)clearPayloadHomeUserTasks;
-(void)clearPayloadIntegerLists;
-(void)clearPayloadIntegerValues;
-(void)clearPayloadIntentExecutionResults;
-(void)clearPayloadIntents;
-(void)clearPayloadLocationLists;
-(void)clearPayloadLocationSearchTypes;
-(void)clearPayloadLocations;
-(void)clearPayloadLongLists;
-(void)clearPayloadLongValues;
-(void)clearPayloadMassValues;
-(void)clearPayloadMediaAffinityTypes;
-(void)clearPayloadMediaDestinations;
-(void)clearPayloadMediaItemGroups;
-(void)clearPayloadMediaItemValues;
-(void)clearPayloadMediaSearchs;
-(void)clearPayloadMessageAttributes;
-(void)clearPayloadMessageEffects;
-(void)clearPayloadMessageTypes;
-(void)clearPayloadModifyNicknames;
-(void)clearPayloadModifyRelationships;
-(void)clearPayloadNoteContents;
-(void)clearPayloadNotebookItemTypes;
-(void)clearPayloadNotes;
-(void)clearPayloadNumericSettingUnits;
-(void)clearPayloadNumericSettingValues;
-(void)clearPayloadOutgoingMessageTypes;
-(void)clearPayloadParsecCategories;
-(void)clearPayloadPaymentAmountValues;
-(void)clearPayloadPaymentMethodLists;
-(void)clearPayloadPaymentMethodValues;
-(void)clearPayloadPaymentStatus;
-(void)clearPayloadPersonalPlaceTypes;
-(void)clearPayloadPhotoAttributes;
-(void)clearPayloadPlaceLists;
-(void)clearPayloadPlaces;
-(void)clearPayloadPlaybackQueueLocations;
-(void)clearPayloadPlaybackRepeatModes;
-(void)clearPayloadPreferredCallProviders;
-(void)clearPayloadPrimitiveBools;
-(void)clearPayloadPrimitiveDoubles;
-(void)clearPayloadPrimitiveInts;
-(void)clearPayloadPrimitiveLongs;
-(void)clearPayloadPrimitiveStrings;
-(void)clearPayloadPrivateAddMediaIntentDatas;
-(void)clearPayloadPrivatePlayMediaIntentDatas;
-(void)clearPayloadPrivateSearchForMediaIntentDatas;
-(void)clearPayloadPrivateUpdateMediaAffinityIntentDatas;
-(void)clearPayloadRadioTypes;
-(void)clearPayloadReadActionTypes;
-(void)clearPayloadRelativeReferences;
-(void)clearPayloadRelativeSettings;
-(void)clearPayloadSendMessageAttachments;
-(void)clearPayloadSettingActions;
-(void)clearPayloadSettingMetadatas;
-(void)clearPayloadShareDestinations;
-(void)clearPayloadSleepAlarmAttributes;
-(void)clearPayloadSpatialEventTriggers;
-(void)clearPayloadSpeedValues;
-(void)clearPayloadStringLists;
-(void)clearPayloadStringValues;
-(void)clearPayloadSupportedTrafficIncidentTypes;
-(void)clearPayloadTaskLists;
-(void)clearPayloadTaskPriorities;
-(void)clearPayloadTaskReferences;
-(void)clearPayloadTaskStatus;
-(void)clearPayloadTasks;
-(void)clearPayloadTemperatureLists;
-(void)clearPayloadTemperatureValues;
-(void)clearPayloadTemporalEventTriggerTypes;
-(void)clearPayloadTemporalEventTriggers;
-(void)clearPayloadTimerStates;
-(void)clearPayloadTimerTypes;
-(void)clearPayloadTimers;
-(void)clearPayloadURLValues;
-(void)clearPayloadUpdateAlarmOperations;
-(void)clearPayloadUserNotificationTypes;
-(void)clearPayloadVisualCodeTypes;
-(void)clearPayloadVoiceCommandDeviceInformations;
-(void)clearPayloadVolumeValues;
-(void)clearPayloadWellnessMetadataPairs;
-(void)clearPayloadWellnessObjectResultValues;
-(void)clearPayloadWellnessObjectTypes;
-(void)clearPayloadWellnessQueryResultTypes;
-(void)clearPayloadWellnessQuestionTypes;
-(void)clearPayloadWellnessUnitTypes;
-(void)clearPayloadWellnessValues;
-(void)clearPayloadWorkoutAssociatedItems;
-(void)clearPayloadWorkoutCustomizations;
-(void)clearPayloadWorkoutGoalUnitTypes;
-(void)clearPayloadWorkoutLocationTypes;
-(void)clearPayloadWorkoutSequenceLabels;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif