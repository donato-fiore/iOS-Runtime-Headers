

#include "SGModelHyperparameters.h"
#include "SGQuickResponsesClassificationParameters.h"
#include "SGQuickResponsesPredictionParameters.h"
#include "SGQuickResponsesReplyModel.h"
#include "SGQuickResponsesReplies.h"
#include "SGCustomResponsesParameters.h"
#include "SGQuickResponsesConfig.h"
#include "SGModelAsset.h"
#include "SGNestedArray.h"
#include "SGQuickResponsesReplyOption.h"
#include "SGQuickResponsesPersonalization.h"
#include "SGStringPreprocessingTransformer.h"
#include "SGStringPreprocessor.h"
#include "SGPipelineTransformer.h"
#include "SGQuickResponse.h"
#include "SGQuickResponsesInference.h"
#include "SGQuickResponsesModel.h"
#include "SGModelSampler.h"
#include "SGQuickResponsesTransformerInstance.h"
#include "SGQuickResponsesModelRules.h"
#include "SGQuickResponsesStore.h"
#include "SGQuickResponsesRecords.h"
#include "SGQuickResponsesReplyRecord.h"
#include "SGQuickResponsesEngagementDeltas.h"
#include "SGLazyInit.h"
#include "SGTokenizerML.h"
#include "SGLexiconML.h"
#include "SGDeduperML.h"
#include "SGConversationTracker.h"
#include "SGConversationTurn.h"
#include "SGStringLabelingTransformer.h"
#include "SGTextLabelTransformer.h"
#include "SGQuickResponsesClassificationModel.h"
#include "SGLanguageDetection.h"
#include "SGDefaultAssets.h"
#include "SGMessagePair.h"
#include "SGMessagePairIterator.h"
#include "SGModelSource.h"
#include "SGModelFeatures.h"
#include "SGRandomization.h"
#include "SGTokenJoiningTransformer.h"
#include "SGSelectiveTransformer.h"
#include "SGQuickResponsesRanking.h"
#include "SGQuickResponsesScoring.h"
#include "SGQuickResponsesDistributingCount.h"
#include "SGQuickResponsesClassScore.h"
#include "SGQuickResponsesCategoryScore.h"
#include "SGQuickResponsesDatabase.h"
