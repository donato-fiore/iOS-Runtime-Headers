

#include "SCLSettingsSyncErrorBehavior.h"
#include "SCLSettingsSyncErrorHandler.h"
#include "SCLPBUnlockHistoryItem.h"
#include "SCLScheduleRecurrence.h"
#include "SCLSchoolModeXPCClient.h"
#include "SCLPBScheduleSettings.h"
#include "SCLSimpleSchedule.h"
#include "SCLMutableSimpleSchedule.h"
#include "SCLSettingsSyncState.h"
#include "SCLSettingsSyncStateSynced.h"
#include "SCLSettingsSyncStatePendingSend.h"
#include "SCLSettingsSyncStateSending.h"
#include "SCLSettingsSyncStateSent.h"
#include "SCLSettingsSyncStateFailed.h"
#include "SCLHistoryGroupKey.h"
#include "SCLHistoryGroup.h"
#include "SCLScheduleFormatter.h"
#include "SCLScheduleFormatterItem.h"
#include "SCLScheduleTimeFormatter.h"
#include "SCLTimeIntervalsFormatter.h"
#include "SCLTransportService.h"
#include "SCLSuppressSchoolModeAssertion.h"
#include "SCLSchoolMode.h"
#include "SCLSchoolModeConfiguration.h"
#include "SCLUnlockHistoryItem.h"
#include "SCLUnlockEvent.h"
#include "SCLSchedulingParameters.h"
#include "SCLSchedulingEngine.h"
#include "SCLInterruptBehaviorResolutionRecord.h"
#include "SCLSchoolModeServer.h"
#include "SCLInterruptBehaviorResolution.h"
#include "SCLInterruptBehaviorResolver.h"
#include "SCLSchedule.h"
#include "SCLTransportController.h"
#include "SCLState.h"
#include "SCLPBScheduleRequestResponse.h"
#include "SCLPBScheduleRecurrence.h"
#include "SCLPBScheduleRequest.h"
#include "SCLSchoolModeCoordinator.h"
#include "SCLSchoolModeCoordinatorConfiguration.h"
#include "SCLTimeInterval.h"
#include "SCLPBTimeInterval.h"
#include "SCLPersistentSettings.h"
#include "SCLScheduleSettings.h"
#include "SCLMutableScheduleSettings.h"
#include "SCLScheduleIntervalFormatter.h"
#include "SCLWatchServer.h"
#include "SCLRecurrenceSchedule.h"
#include "SCLActiveDurationAnalyticsSource.h"
#include "SCLUnlockHistoryPersistentStore.h"
#include "SCLInterruptEvent.h"
#include "SCLMutableInterruptEvent.h"
#include "SCLSchoolModeServerSettings.h"
#include "SCLDailySchedule.h"
#include "SCLMutableDailySchedule.h"
#include "SCLSettingsSyncCoordinator.h"
#include "SCLScheduleAttributes.h"
#include "SCLPBScheduleTime.h"
#include "SCLSuppressSchoolModeAssertionManager.h"
#include "SCLSuppressSchoolModeAssertionClient.h"
#include "SCLScheduleTime.h"
#include "SCLMutableScheduleTime.h"
#include "SCLContact.h"
#include "SCLMutableContact.h"
#include "SCLSchoolModeClientProxy.h"
#include "SCLSchoolModeManager.h"
#include "SCLSchoolModeManagerConfiguration.h"
#include "SCLSchoolModeWakeScheduler.h"
#include "SCLInterruptEventBehavior.h"
#include "SCLSettingsSyncContext.h"
#include "SCLSettingsSyncStateMachine.h"
