

#include "VSSpeechSynthesisTask.h"
#include "VSAudioMappedInfoAVSBAR.h"
#include "VSAudioPlaybackServiceAVSBAR.h"
#include "VSVoiceBooster.h"
#include "VSDurationEstimationTask.h"
#include "VSHMHomeManager.h"
#include "VSSpeechSpeakTask.h"
#include "VSSpeechServerTask.h"
#include "VSSpeechXPCHandler.h"
#include "VSOspreyTTSCore.h"
#include "VSPostInstallService.h"
#include "VSVoicePreviewTask.h"
#include "VSSpeechCacheAudio.h"
#include "VSSpeechCache.h"
#include "OPTTSTTSRequestFeatureFlags.h"
#include "OPTTSTextToSpeechVoice.h"
#include "OPTTSTextToSpeechResource.h"
#include "OPTTSTextToSpeechMeta.h"
#include "OPTTSTextToSpeechRequestMeta.h"
#include "OPTTSTextToSpeechRequestContext.h"
#include "OPTTSTextToSpeechRequestExperiment.h"
#include "OPTTSTextToSpeechRequest.h"
#include "OPTTSTextToSpeechRequest_ContextInfoEntry.h"
#include "OPTTSAudioDescription.h"
#include "OPTTSWordTimingInfo.h"
#include "OPTTSTextToSpeechResponse.h"
#include "OPTTSStartTextToSpeechStreamingRequest.h"
#include "OPTTSStartTextToSpeechStreamingRequest_ContextInfoEntry.h"
#include "OPTTSBeginTextToSpeechStreamingResponse.h"
#include "OPTTSPartialTextToSpeechStreamingResponse.h"
#include "OPTTSFinalTextToSpeechStreamingResponse.h"
#include "OPTTSTextToSpeechRouterStreamingStreamingRequest.h"
#include "OPTTSTextToSpeechRouterStreamingStreamingResponse.h"
#include "VSHHManagementClient.h"
#include "VSAudioMappedInfoAT.h"
#include "VSAudioPlaybackServiceAT.h"
#include "VSAudioRouteInfo.h"
#include "VSAudioPlaybackService.h"
#include "VSDeviceTTSCore.h"
#include "VSCacheDeleteService.h"
#include "VSTimeoutCondition.h"
#include "VSDownloadService.h"
#include "OspreyTTSService.h"
#include "VSDiagnosticService.h"
#include "VSSiriServerConfiguration.h"
#include "VSShortTermCache.h"
#include "VSSiriInlineTTSStreamTask.h"
#include "VSSpeechPresynthesizedTask.h"
#include "VSSpeechAudioPowerService.h"
#include "VSInlineStreamService.h"
#include "OPTTSMutableTTSRequestFeatureFlags.h"
#include "OPTTSMutableTextToSpeechVoice.h"
#include "OPTTSMutableTextToSpeechResource.h"
#include "OPTTSMutableTextToSpeechMeta.h"
#include "OPTTSMutableTextToSpeechRequestMeta.h"
#include "OPTTSMutableTextToSpeechRequestContext.h"
#include "OPTTSMutableTextToSpeechRequestExperiment.h"
#include "OPTTSMutableTextToSpeechRequest.h"
#include "OPTTSMutableTextToSpeechRequest_ContextInfoEntry.h"
#include "OPTTSMutableAudioDescription.h"
#include "OPTTSMutableWordTimingInfo.h"
#include "OPTTSMutableTextToSpeechResponse.h"
#include "OPTTSMutableStartTextToSpeechStreamingRequest.h"
#include "OPTTSMutableStartTextToSpeechStreamingRequest_ContextInfoEntry.h"
#include "OPTTSMutableBeginTextToSpeechStreamingResponse.h"
#include "OPTTSMutablePartialTextToSpeechStreamingResponse.h"
#include "OPTTSMutableFinalTextToSpeechStreamingResponse.h"
#include "OPTTSMutableTextToSpeechRouterStreamingStreamingRequest.h"
#include "OPTTSMutableTextToSpeechRouterStreamingStreamingResponse.h"
#include "VSPrewarmService.h"
#include "VSServerTTSClient.h"
#include "VSCachingService.h"
#include "VSSpeechEngineVoiceResource.h"
#include "VSSpeechSynthesisCallbackResult.h"
#include "VSSpeechEngine.h"
#include "VSSiriInstrumentation.h"
#include "VSStreamAudioMappedInfo.h"
#include "VSStreamAudioData.h"
#include "VSSpeechTaskQueue.h"
#include "VSMemoryMap.h"
