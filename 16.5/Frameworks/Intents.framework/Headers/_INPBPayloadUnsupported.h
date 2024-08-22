// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBPAYLOADUNSUPPORTED_H
#define _INPBPAYLOADUNSUPPORTED_H

@class PBCodable, NSArray, NSString;
@protocol _INPBPayloadUnsupported, NSSecureCoding, NSCopying;



@interface _INPBPayloadUnsupported : PBCodable <_INPBPayloadUnsupported, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) int addCallParticipantIntentParticipantsUnsupportedReason; // ivar: _addCallParticipantIntentParticipantsUnsupportedReason
@property (nonatomic) int addMediaIntentMediaDestinationUnsupportedReason; // ivar: _addMediaIntentMediaDestinationUnsupportedReason
@property (nonatomic) int addMediaIntentMediaItemsUnsupportedReason; // ivar: _addMediaIntentMediaItemsUnsupportedReason
@property (nonatomic) int addTasksIntentContactEventTriggerUnsupportedReason; // ivar: _addTasksIntentContactEventTriggerUnsupportedReason
@property (nonatomic) int addTasksIntentTargetTaskListMembersUnsupportedReason; // ivar: _addTasksIntentTargetTaskListMembersUnsupportedReason
@property (nonatomic) int addTasksIntentTemporalEventTriggerUnsupportedReason; // ivar: _addTasksIntentTemporalEventTriggerUnsupportedReason
@property (nonatomic) int changeAlarmStatusIntentAlarmsUnsupportedReason; // ivar: _changeAlarmStatusIntentAlarmsUnsupportedReason
@property (copy, nonatomic) NSArray *conflictingParameters; // ivar: _conflictingParameters
@property (readonly, nonatomic) NSUInteger conflictingParametersCount;
@property (nonatomic) int createTimerIntentLabelUnsupportedReason; // ivar: _createTimerIntentLabelUnsupportedReason
@property (nonatomic) unsigned int customUnsupportedReason; // ivar: _customUnsupportedReason
@property (nonatomic) int dateTimeRangeUnsupportedReason; // ivar: _dateTimeRangeUnsupportedReason
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) int deleteAlarmIntentAlarmsUnsupportedReason; // ivar: _deleteAlarmIntentAlarmsUnsupportedReason
@property (nonatomic) int deleteTasksIntentTaskListUnsupportedReason; // ivar: _deleteTasksIntentTaskListUnsupportedReason
@property (nonatomic) int deleteTasksIntentTaskUnsupportedReason; // ivar: _deleteTasksIntentTaskUnsupportedReason
@property (readonly, copy) NSString *description;
@property (nonatomic) int findDeviceAndPlaySoundIntentDeviceUnsupportedReason; // ivar: _findDeviceAndPlaySoundIntentDeviceUnsupportedReason
@property (nonatomic) BOOL hasAddCallParticipantIntentParticipantsUnsupportedReason;
@property (nonatomic) BOOL hasAddMediaIntentMediaDestinationUnsupportedReason;
@property (nonatomic) BOOL hasAddMediaIntentMediaItemsUnsupportedReason;
@property (nonatomic) BOOL hasAddTasksIntentContactEventTriggerUnsupportedReason;
@property (nonatomic) BOOL hasAddTasksIntentTargetTaskListMembersUnsupportedReason;
@property (nonatomic) BOOL hasAddTasksIntentTemporalEventTriggerUnsupportedReason;
@property (nonatomic) BOOL hasChangeAlarmStatusIntentAlarmsUnsupportedReason;
@property (nonatomic) BOOL hasCreateTimerIntentLabelUnsupportedReason;
@property (nonatomic) BOOL hasCustomUnsupportedReason;
@property (nonatomic) BOOL hasDateTimeRangeUnsupportedReason;
@property (nonatomic) BOOL hasDeleteAlarmIntentAlarmsUnsupportedReason;
@property (nonatomic) BOOL hasDeleteTasksIntentTaskListUnsupportedReason;
@property (nonatomic) BOOL hasDeleteTasksIntentTaskUnsupportedReason;
@property (nonatomic) BOOL hasFindDeviceAndPlaySoundIntentDeviceUnsupportedReason;
@property (nonatomic) BOOL hasJoinCallIntentGroupConversationUnsupportedReason;
@property (nonatomic) BOOL hasParticipantUnsupportedReason;
@property (nonatomic) BOOL hasPlayMediaIntentMediaItemsUnsupportedReason;
@property (nonatomic) BOOL hasPlayMediaIntentPlaybackSpeedUnsupportedReason;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) BOOL hasReportIncidentIntentIncidentTypeUnsupportedReason;
@property (nonatomic) BOOL hasRequestPaymentIntentCurrencyAmountUnsupportedReason;
@property (nonatomic) BOOL hasRequestPaymentIntentPayerUnsupportedReason;
@property (nonatomic) BOOL hasRunWorkflowIntentWorkflowUnsupportedReason;
@property (nonatomic) BOOL hasSaveHealthSampleIntentRecordDateUnsupportedReason;
@property (nonatomic) BOOL hasSearchAlarmIntentAlarmsUnsupportedReason;
@property (nonatomic) BOOL hasSearchForMediaIntentMediaItemsUnsupportedReason;
@property (nonatomic) BOOL hasSendAnnouncementIntentAnnouncementUnsupportedReason;
@property (nonatomic) BOOL hasSendAnnouncementIntentRecipientsUnsupportedReason;
@property (nonatomic) BOOL hasSendMessageIntentRecipientUnsupportedReason;
@property (nonatomic) BOOL hasSendPaymentIntentCurrencyAmountUnsupportedReason;
@property (nonatomic) BOOL hasSendPaymentIntentPayeeUnsupportedReason;
@property (nonatomic) BOOL hasSetTaskAttributeIntentContactEventTriggerUnsupportedReason;
@property (nonatomic) BOOL hasSetTaskAttributeIntentTemporalEventTriggerUnsupportedReason;
@property (nonatomic) BOOL hasSetTimerAttributeIntentTargetTimerUnsupportedReason;
@property (nonatomic) BOOL hasShareETAIntentRecipientUnsupportedReason;
@property (nonatomic) BOOL hasSnoozeAlarmIntentAlarmsUnsupportedReason;
@property (nonatomic) BOOL hasSnoozeTasksIntentTaskUnsupportedReason;
@property (nonatomic) BOOL hasStartCallIntentCallCapabilityUnsupportedReason;
@property (nonatomic) BOOL hasStartCallIntentCallRecordToCallBackUnsupportedReason;
@property (nonatomic) BOOL hasStartCallIntentContactsUnsupportedReason;
@property (nonatomic) BOOL hasStartCallIntentPreferredCallProviderUnsupportedReason;
@property (nonatomic) BOOL hasStopShareETAIntentRecipientUnsupportedReason;
@property (nonatomic) BOOL hasTargetEventUnsupportedReason;
@property (nonatomic) BOOL hasUpdateAlarmIntentAlarmUnsupportedReason;
@property (nonatomic) BOOL hasUpdateMediaAffinityIntentMediaItemsUnsupportedReason;
@property (readonly) NSUInteger hash;
@property (nonatomic) int joinCallIntentGroupConversationUnsupportedReason; // ivar: _joinCallIntentGroupConversationUnsupportedReason
@property (nonatomic) int participantUnsupportedReason; // ivar: _participantUnsupportedReason
@property (nonatomic) int playMediaIntentMediaItemsUnsupportedReason; // ivar: _playMediaIntentMediaItemsUnsupportedReason
@property (nonatomic) int playMediaIntentPlaybackSpeedUnsupportedReason; // ivar: _playMediaIntentPlaybackSpeedUnsupportedReason
@property (nonatomic) int reason; // ivar: _reason
@property (nonatomic) int reportIncidentIntentIncidentTypeUnsupportedReason; // ivar: _reportIncidentIntentIncidentTypeUnsupportedReason
@property (nonatomic) int requestPaymentIntentCurrencyAmountUnsupportedReason; // ivar: _requestPaymentIntentCurrencyAmountUnsupportedReason
@property (nonatomic) int requestPaymentIntentPayerUnsupportedReason; // ivar: _requestPaymentIntentPayerUnsupportedReason
@property (nonatomic) int runWorkflowIntentWorkflowUnsupportedReason; // ivar: _runWorkflowIntentWorkflowUnsupportedReason
@property (nonatomic) int saveHealthSampleIntentRecordDateUnsupportedReason; // ivar: _saveHealthSampleIntentRecordDateUnsupportedReason
@property (nonatomic) int searchAlarmIntentAlarmsUnsupportedReason; // ivar: _searchAlarmIntentAlarmsUnsupportedReason
@property (nonatomic) int searchForMediaIntentMediaItemsUnsupportedReason; // ivar: _searchForMediaIntentMediaItemsUnsupportedReason
@property (nonatomic) int sendAnnouncementIntentAnnouncementUnsupportedReason; // ivar: _sendAnnouncementIntentAnnouncementUnsupportedReason
@property (nonatomic) int sendAnnouncementIntentRecipientsUnsupportedReason; // ivar: _sendAnnouncementIntentRecipientsUnsupportedReason
@property (nonatomic) int sendMessageIntentRecipientUnsupportedReason; // ivar: _sendMessageIntentRecipientUnsupportedReason
@property (nonatomic) int sendPaymentIntentCurrencyAmountUnsupportedReason; // ivar: _sendPaymentIntentCurrencyAmountUnsupportedReason
@property (nonatomic) int sendPaymentIntentPayeeUnsupportedReason; // ivar: _sendPaymentIntentPayeeUnsupportedReason
@property (nonatomic) int setTaskAttributeIntentContactEventTriggerUnsupportedReason; // ivar: _setTaskAttributeIntentContactEventTriggerUnsupportedReason
@property (nonatomic) int setTaskAttributeIntentTemporalEventTriggerUnsupportedReason; // ivar: _setTaskAttributeIntentTemporalEventTriggerUnsupportedReason
@property (nonatomic) int setTimerAttributeIntentTargetTimerUnsupportedReason; // ivar: _setTimerAttributeIntentTargetTimerUnsupportedReason
@property (nonatomic) int shareETAIntentRecipientUnsupportedReason; // ivar: _shareETAIntentRecipientUnsupportedReason
@property (nonatomic) int snoozeAlarmIntentAlarmsUnsupportedReason; // ivar: _snoozeAlarmIntentAlarmsUnsupportedReason
@property (nonatomic) int snoozeTasksIntentTaskUnsupportedReason; // ivar: _snoozeTasksIntentTaskUnsupportedReason
@property (nonatomic) int startCallIntentCallCapabilityUnsupportedReason; // ivar: _startCallIntentCallCapabilityUnsupportedReason
@property (nonatomic) int startCallIntentCallRecordToCallBackUnsupportedReason; // ivar: _startCallIntentCallRecordToCallBackUnsupportedReason
@property (nonatomic) int startCallIntentContactsUnsupportedReason; // ivar: _startCallIntentContactsUnsupportedReason
@property (nonatomic) int startCallIntentPreferredCallProviderUnsupportedReason; // ivar: _startCallIntentPreferredCallProviderUnsupportedReason
@property (nonatomic) int stopShareETAIntentRecipientUnsupportedReason; // ivar: _stopShareETAIntentRecipientUnsupportedReason
@property (readonly) Class superclass;
@property (nonatomic) int targetEventUnsupportedReason; // ivar: _targetEventUnsupportedReason
@property (nonatomic) int updateAlarmIntentAlarmUnsupportedReason; // ivar: _updateAlarmIntentAlarmUnsupportedReason
@property (nonatomic) int updateMediaAffinityIntentMediaItemsUnsupportedReason; // ivar: _updateMediaAffinityIntentMediaItemsUnsupportedReason


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)addCallParticipantIntentParticipantsUnsupportedReasonAsString:(int)arg0 ;
-(id)addMediaIntentMediaDestinationUnsupportedReasonAsString:(int)arg0 ;
-(id)addMediaIntentMediaItemsUnsupportedReasonAsString:(int)arg0 ;
-(id)addTasksIntentContactEventTriggerUnsupportedReasonAsString:(int)arg0 ;
-(id)addTasksIntentTargetTaskListMembersUnsupportedReasonAsString:(int)arg0 ;
-(id)addTasksIntentTemporalEventTriggerUnsupportedReasonAsString:(int)arg0 ;
-(id)changeAlarmStatusIntentAlarmsUnsupportedReasonAsString:(int)arg0 ;
-(id)conflictingParametersAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createTimerIntentLabelUnsupportedReasonAsString:(int)arg0 ;
-(id)dateTimeRangeUnsupportedReasonAsString:(int)arg0 ;
-(id)deleteAlarmIntentAlarmsUnsupportedReasonAsString:(int)arg0 ;
-(id)deleteTasksIntentTaskListUnsupportedReasonAsString:(int)arg0 ;
-(id)deleteTasksIntentTaskUnsupportedReasonAsString:(int)arg0 ;
-(id)dictionaryRepresentation;
-(id)findDeviceAndPlaySoundIntentDeviceUnsupportedReasonAsString:(int)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)joinCallIntentGroupConversationUnsupportedReasonAsString:(int)arg0 ;
-(id)participantUnsupportedReasonAsString:(int)arg0 ;
-(id)playMediaIntentMediaItemsUnsupportedReasonAsString:(int)arg0 ;
-(id)playMediaIntentPlaybackSpeedUnsupportedReasonAsString:(int)arg0 ;
-(id)reasonAsString:(int)arg0 ;
-(id)reportIncidentIntentIncidentTypeUnsupportedReasonAsString:(int)arg0 ;
-(id)requestPaymentIntentCurrencyAmountUnsupportedReasonAsString:(int)arg0 ;
-(id)requestPaymentIntentPayerUnsupportedReasonAsString:(int)arg0 ;
-(id)runWorkflowIntentWorkflowUnsupportedReasonAsString:(int)arg0 ;
-(id)saveHealthSampleIntentRecordDateUnsupportedReasonAsString:(int)arg0 ;
-(id)searchAlarmIntentAlarmsUnsupportedReasonAsString:(int)arg0 ;
-(id)searchForMediaIntentMediaItemsUnsupportedReasonAsString:(int)arg0 ;
-(id)sendAnnouncementIntentAnnouncementUnsupportedReasonAsString:(int)arg0 ;
-(id)sendAnnouncementIntentRecipientsUnsupportedReasonAsString:(int)arg0 ;
-(id)sendMessageIntentRecipientUnsupportedReasonAsString:(int)arg0 ;
-(id)sendPaymentIntentCurrencyAmountUnsupportedReasonAsString:(int)arg0 ;
-(id)sendPaymentIntentPayeeUnsupportedReasonAsString:(int)arg0 ;
-(id)setTaskAttributeIntentContactEventTriggerUnsupportedReasonAsString:(int)arg0 ;
-(id)setTaskAttributeIntentTemporalEventTriggerUnsupportedReasonAsString:(int)arg0 ;
-(id)setTimerAttributeIntentTargetTimerUnsupportedReasonAsString:(int)arg0 ;
-(id)shareETAIntentRecipientUnsupportedReasonAsString:(int)arg0 ;
-(id)snoozeAlarmIntentAlarmsUnsupportedReasonAsString:(int)arg0 ;
-(id)snoozeTasksIntentTaskUnsupportedReasonAsString:(int)arg0 ;
-(id)startCallIntentCallCapabilityUnsupportedReasonAsString:(int)arg0 ;
-(id)startCallIntentCallRecordToCallBackUnsupportedReasonAsString:(int)arg0 ;
-(id)startCallIntentContactsUnsupportedReasonAsString:(int)arg0 ;
-(id)startCallIntentPreferredCallProviderUnsupportedReasonAsString:(int)arg0 ;
-(id)stopShareETAIntentRecipientUnsupportedReasonAsString:(int)arg0 ;
-(id)targetEventUnsupportedReasonAsString:(int)arg0 ;
-(id)updateAlarmIntentAlarmUnsupportedReasonAsString:(int)arg0 ;
-(id)updateMediaAffinityIntentMediaItemsUnsupportedReasonAsString:(int)arg0 ;
-(int)StringAsAddCallParticipantIntentParticipantsUnsupportedReason:(id)arg0 ;
-(int)StringAsAddMediaIntentMediaDestinationUnsupportedReason:(id)arg0 ;
-(int)StringAsAddMediaIntentMediaItemsUnsupportedReason:(id)arg0 ;
-(int)StringAsAddTasksIntentContactEventTriggerUnsupportedReason:(id)arg0 ;
-(int)StringAsAddTasksIntentTargetTaskListMembersUnsupportedReason:(id)arg0 ;
-(int)StringAsAddTasksIntentTemporalEventTriggerUnsupportedReason:(id)arg0 ;
-(int)StringAsChangeAlarmStatusIntentAlarmsUnsupportedReason:(id)arg0 ;
-(int)StringAsCreateTimerIntentLabelUnsupportedReason:(id)arg0 ;
-(int)StringAsDateTimeRangeUnsupportedReason:(id)arg0 ;
-(int)StringAsDeleteAlarmIntentAlarmsUnsupportedReason:(id)arg0 ;
-(int)StringAsDeleteTasksIntentTaskListUnsupportedReason:(id)arg0 ;
-(int)StringAsDeleteTasksIntentTaskUnsupportedReason:(id)arg0 ;
-(int)StringAsFindDeviceAndPlaySoundIntentDeviceUnsupportedReason:(id)arg0 ;
-(int)StringAsJoinCallIntentGroupConversationUnsupportedReason:(id)arg0 ;
-(int)StringAsParticipantUnsupportedReason:(id)arg0 ;
-(int)StringAsPlayMediaIntentMediaItemsUnsupportedReason:(id)arg0 ;
-(int)StringAsPlayMediaIntentPlaybackSpeedUnsupportedReason:(id)arg0 ;
-(int)StringAsReason:(id)arg0 ;
-(int)StringAsReportIncidentIntentIncidentTypeUnsupportedReason:(id)arg0 ;
-(int)StringAsRequestPaymentIntentCurrencyAmountUnsupportedReason:(id)arg0 ;
-(int)StringAsRequestPaymentIntentPayerUnsupportedReason:(id)arg0 ;
-(int)StringAsRunWorkflowIntentWorkflowUnsupportedReason:(id)arg0 ;
-(int)StringAsSaveHealthSampleIntentRecordDateUnsupportedReason:(id)arg0 ;
-(int)StringAsSearchAlarmIntentAlarmsUnsupportedReason:(id)arg0 ;
-(int)StringAsSearchForMediaIntentMediaItemsUnsupportedReason:(id)arg0 ;
-(int)StringAsSendAnnouncementIntentAnnouncementUnsupportedReason:(id)arg0 ;
-(int)StringAsSendAnnouncementIntentRecipientsUnsupportedReason:(id)arg0 ;
-(int)StringAsSendMessageIntentRecipientUnsupportedReason:(id)arg0 ;
-(int)StringAsSendPaymentIntentCurrencyAmountUnsupportedReason:(id)arg0 ;
-(int)StringAsSendPaymentIntentPayeeUnsupportedReason:(id)arg0 ;
-(int)StringAsSetTaskAttributeIntentContactEventTriggerUnsupportedReason:(id)arg0 ;
-(int)StringAsSetTaskAttributeIntentTemporalEventTriggerUnsupportedReason:(id)arg0 ;
-(int)StringAsSetTimerAttributeIntentTargetTimerUnsupportedReason:(id)arg0 ;
-(int)StringAsShareETAIntentRecipientUnsupportedReason:(id)arg0 ;
-(int)StringAsSnoozeAlarmIntentAlarmsUnsupportedReason:(id)arg0 ;
-(int)StringAsSnoozeTasksIntentTaskUnsupportedReason:(id)arg0 ;
-(int)StringAsStartCallIntentCallCapabilityUnsupportedReason:(id)arg0 ;
-(int)StringAsStartCallIntentCallRecordToCallBackUnsupportedReason:(id)arg0 ;
-(int)StringAsStartCallIntentContactsUnsupportedReason:(id)arg0 ;
-(int)StringAsStartCallIntentPreferredCallProviderUnsupportedReason:(id)arg0 ;
-(int)StringAsStopShareETAIntentRecipientUnsupportedReason:(id)arg0 ;
-(int)StringAsTargetEventUnsupportedReason:(id)arg0 ;
-(int)StringAsUpdateAlarmIntentAlarmUnsupportedReason:(id)arg0 ;
-(int)StringAsUpdateMediaAffinityIntentMediaItemsUnsupportedReason:(id)arg0 ;
-(void)addConflictingParameters:(id)arg0 ;
-(void)clearConflictingParameters;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif