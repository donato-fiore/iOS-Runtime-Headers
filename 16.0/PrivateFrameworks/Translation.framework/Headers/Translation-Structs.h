typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct AudioStreamBasicDescription {
    CGFloat mSampleRate;
    unsigned int mFormatID;
    unsigned int mFormatFlags;
    unsigned int mBytesPerPacket;
    unsigned int mFramesPerPacket;
    unsigned int mBytesPerFrame;
    unsigned int mChannelsPerFrame;
    unsigned int mBitsPerChannel;
    unsigned int mReserved;
} AudioStreamBasicDescription;

typedef struct OpaqueAudioQueue {
} // Error Processing Struct Fields

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct _opaque_pthread_cond_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_cond_t;

typedef struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> {
    uint8_t __a_value;
    BOOL field1;
} __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>>;

typedef struct atomic<bool> {
    __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> __a_;
} atomic<bool>;

typedef struct OpaqueAudioConverter {
} // Error Processing Struct Fields

typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct CGRect {
    CGPoint origin;
    CGSize size;
} CGRect;

typedef struct __GSEvent {
} // Error Processing Struct Fields

typedef struct ? {
    BOOL hasOverrideClient;
    BOOL hasOverrideHost;
    BOOL hasInputAssistantItem;
    BOOL suppressSoftwareKeyboard;
    BOOL conformsToUIKeyInputIsSet;
    BOOL conformsToUIKeyInput;
} ?;

typedef struct UIEdgeInsets {
    CGFloat top;
    CGFloat left;
    CGFloat bottom;
    CGFloat right;
} UIEdgeInsets;

typedef struct NSDirectionalEdgeInsets {
    CGFloat top;
    CGFloat leading;
    CGFloat bottom;
    CGFloat trailing;
} NSDirectionalEdgeInsets;

typedef struct opaqueCMSampleBuffer {
} // Error Processing Struct Fields

typedef struct ErrorMessage {
    unsigned char field0;
} ErrorMessage;

typedef struct Offset<siri::speech::qss_fb::ErrorMessage> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::ErrorMessage>;

typedef struct DisableSessionLog {
    unsigned char field0;
} DisableSessionLog;

typedef struct Offset<siri::speech::qss_fb::DisableSessionLog> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::DisableSessionLog>;

typedef struct ApgPronGuessMessage {
    unsigned char field0;
} ApgPronGuessMessage;

typedef struct Offset<siri::speech::qss_fb::ApgPronGuessMessage> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::ApgPronGuessMessage>;

typedef struct ApgBatchRecoverMessage {
    unsigned char field0;
} ApgBatchRecoverMessage;

typedef struct Offset<siri::speech::qss_fb::ApgBatchRecoverMessage> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::ApgBatchRecoverMessage>;

typedef struct AsrRecognitionMessage {
    unsigned char field0;
} AsrRecognitionMessage;

typedef struct Offset<siri::speech::qss_fb::AsrRecognitionMessage> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::AsrRecognitionMessage>;

typedef struct AsrErrorBlamerMessage {
    unsigned char field0;
} AsrErrorBlamerMessage;

typedef struct Offset<siri::speech::qss_fb::AsrErrorBlamerMessage> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::AsrErrorBlamerMessage>;

typedef struct AsrItnMessage {
    unsigned char field0;
} AsrItnMessage;

typedef struct Offset<siri::speech::qss_fb::AsrItnMessage> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::AsrItnMessage>;

typedef struct AsrTextNormalizationMessage {
    unsigned char field0;
} AsrTextNormalizationMessage;

typedef struct Offset<siri::speech::qss_fb::AsrTextNormalizationMessage> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::AsrTextNormalizationMessage>;

typedef struct AsrPostItnHammerMessage {
    unsigned char field0;
} AsrPostItnHammerMessage;

typedef struct Offset<siri::speech::qss_fb::AsrPostItnHammerMessage> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::AsrPostItnHammerMessage>;

typedef struct AsrKeywordFinderMessage {
    unsigned char field0;
} AsrKeywordFinderMessage;

typedef struct Offset<siri::speech::qss_fb::AsrKeywordFinderMessage> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::AsrKeywordFinderMessage>;

typedef struct AsrCorrectionsValidatorMessage {
    unsigned char field0;
} AsrCorrectionsValidatorMessage;

typedef struct Offset<siri::speech::qss_fb::AsrCorrectionsValidatorMessage> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::AsrCorrectionsValidatorMessage>;

typedef struct AsrGraphemeToPhonemeMessage {
    unsigned char field0;
} AsrGraphemeToPhonemeMessage;

typedef struct Offset<siri::speech::qss_fb::AsrGraphemeToPhonemeMessage> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::AsrGraphemeToPhonemeMessage>;

typedef struct BlazarMultiUserMessage {
    unsigned char field0;
} BlazarMultiUserMessage;

typedef struct Offset<siri::speech::qss_fb::BlazarMultiUserMessage> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::BlazarMultiUserMessage>;

typedef struct BlazarMultilingualMessage {
    unsigned char field0;
} BlazarMultilingualMessage;

typedef struct Offset<siri::speech::qss_fb::BlazarMultilingualMessage> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::BlazarMultilingualMessage>;

typedef struct BlazarSpeechTranslationMessage {
    unsigned char field0;
} BlazarSpeechTranslationMessage;

typedef struct Offset<siri::speech::qss_fb::BlazarSpeechTranslationMessage> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::BlazarSpeechTranslationMessage>;

typedef struct BlazarBatchTranslationMessage {
    unsigned char field0;
} BlazarBatchTranslationMessage;

typedef struct Offset<siri::speech::qss_fb::BlazarBatchTranslationMessage> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::BlazarBatchTranslationMessage>;

typedef struct BlazarTextToSpeechRouterMessage {
    unsigned char field0;
} BlazarTextToSpeechRouterMessage;

typedef struct Offset<siri::speech::qss_fb::BlazarTextToSpeechRouterMessage> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::BlazarTextToSpeechRouterMessage>;

typedef struct BlazarTextToSpeechRouterStreamingMessage {
    unsigned char field0;
} BlazarTextToSpeechRouterStreamingMessage;

typedef struct Offset<siri::speech::qss_fb::BlazarTextToSpeechRouterStreamingMessage> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::BlazarTextToSpeechRouterStreamingMessage>;

typedef struct BlazarServiceDiscoveryMessage {
    unsigned char field0;
} BlazarServiceDiscoveryMessage;

typedef struct Offset<siri::speech::qss_fb::BlazarServiceDiscoveryMessage> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::BlazarServiceDiscoveryMessage>;

typedef struct LmtLmScorerMessage {
    unsigned char field0;
} LmtLmScorerMessage;

typedef struct Offset<siri::speech::qss_fb::LmtLmScorerMessage> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::LmtLmScorerMessage>;

typedef struct NapgCreateLanguageProfileMessage {
    unsigned char field0;
} NapgCreateLanguageProfileMessage;

typedef struct Offset<siri::speech::qss_fb::NapgCreateLanguageProfileMessage> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::NapgCreateLanguageProfileMessage>;

typedef struct MtTranslationMessage {
    unsigned char field0;
} MtTranslationMessage;

typedef struct Offset<siri::speech::qss_fb::MtTranslationMessage> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::MtTranslationMessage>;

typedef struct MtStreamingTranslationMessage {
    unsigned char field0;
} MtStreamingTranslationMessage;

typedef struct Offset<siri::speech::qss_fb::MtStreamingTranslationMessage> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::MtStreamingTranslationMessage>;

typedef struct TtsTextToSpeechMessage {
    unsigned char field0;
} TtsTextToSpeechMessage;

typedef struct Offset<siri::speech::qss_fb::TtsTextToSpeechMessage> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::TtsTextToSpeechMessage>;

typedef struct TtsTextToSpeechStreamingMessage {
    unsigned char field0;
} TtsTextToSpeechStreamingMessage;

typedef struct Offset<siri::speech::qss_fb::TtsTextToSpeechStreamingMessage> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::TtsTextToSpeechStreamingMessage>;

typedef struct TtsTextToSpeechSpeechFeatureMessage {
    unsigned char field0;
} TtsTextToSpeechSpeechFeatureMessage;

typedef struct Offset<siri::speech::qss_fb::TtsTextToSpeechSpeechFeatureMessage> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::TtsTextToSpeechSpeechFeatureMessage>;

typedef struct NlShortcutFuzzyMatchMessage {
    unsigned char field0;
} NlShortcutFuzzyMatchMessage;

typedef struct Offset<siri::speech::qss_fb::NlShortcutFuzzyMatchMessage> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::NlShortcutFuzzyMatchMessage>;

typedef struct AfmAStarFuzzyMatchingMessage {
    unsigned char field0;
} AfmAStarFuzzyMatchingMessage;

typedef struct Offset<siri::speech::qss_fb::AfmAStarFuzzyMatchingMessage> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::AfmAStarFuzzyMatchingMessage>;

typedef struct SlsLanguageDetectionMessage {
    unsigned char field0;
} SlsLanguageDetectionMessage;

typedef struct Offset<siri::speech::qss_fb::SlsLanguageDetectionMessage> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::SlsLanguageDetectionMessage>;

typedef struct QssMessage {
    unsigned char field0;
} QssMessage;

typedef struct Offset<siri::speech::qss_fb::QssMessage> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::QssMessage>;

typedef struct UserLanguageProfile {
    unsigned char field0;
} UserLanguageProfile;

typedef struct Offset<siri::speech::schema_fb::UserLanguageProfile> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::UserLanguageProfile>;

typedef struct UserAcousticProfile {
    unsigned char field0;
} UserAcousticProfile;

typedef struct Offset<siri::speech::schema_fb::UserAcousticProfile> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::UserAcousticProfile>;

typedef struct RecognitionToken {
    unsigned char field0;
} RecognitionToken;

typedef struct Offset<siri::speech::schema_fb::RecognitionToken> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::RecognitionToken>;

typedef struct RecognitionPhraseTokens {
    unsigned char field0;
} RecognitionPhraseTokens;

typedef struct Offset<siri::speech::schema_fb::RecognitionPhraseTokens> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::RecognitionPhraseTokens>;

typedef struct RecognitionPhraseTokensAlternatives {
    unsigned char field0;
} RecognitionPhraseTokensAlternatives;

typedef struct Offset<siri::speech::schema_fb::RecognitionPhraseTokensAlternatives> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::RecognitionPhraseTokensAlternatives>;

typedef struct RecognitionSausage {
    unsigned char field0;
} RecognitionSausage;

typedef struct Offset<siri::speech::schema_fb::RecognitionSausage> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::RecognitionSausage>;

typedef struct SetAlternateRecognitionSausage {
    unsigned char field0;
} SetAlternateRecognitionSausage;

typedef struct Offset<siri::speech::schema_fb::SetAlternateRecognitionSausage> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::SetAlternateRecognitionSausage>;

typedef struct RecognitionChoice {
    unsigned char field0;
} RecognitionChoice;

typedef struct Offset<siri::speech::schema_fb::RecognitionChoice> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::RecognitionChoice>;

typedef struct RepeatedItnAlignment {
    unsigned char field0;
} RepeatedItnAlignment;

typedef struct Offset<siri::speech::schema_fb::RepeatedItnAlignment> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::RepeatedItnAlignment>;

typedef struct ChoiceAlignment {
    unsigned char field0;
} ChoiceAlignment;

typedef struct Offset<siri::speech::schema_fb::ChoiceAlignment> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::ChoiceAlignment>;

typedef struct RecognitionResult {
    unsigned char field0;
} RecognitionResult;

typedef struct Offset<siri::speech::schema_fb::RecognitionResult> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::RecognitionResult>;

typedef struct RequestStatsResponse {
    unsigned char field0;
} RequestStatsResponse;

typedef struct Offset<siri::speech::schema_fb::RequestStatsResponse> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::RequestStatsResponse>;

typedef struct BoolStat {
    unsigned char field0;
} BoolStat;

typedef struct Offset<siri::speech::schema_fb::RequestStatsResponse_::BoolStat> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::RequestStatsResponse_::BoolStat>;

typedef struct Int32Stat {
    unsigned char field0;
} Int32Stat;

typedef struct Offset<siri::speech::schema_fb::RequestStatsResponse_::Int32Stat> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::RequestStatsResponse_::Int32Stat>;

typedef struct DoubleStat {
    unsigned char field0;
} DoubleStat;

typedef struct Offset<siri::speech::schema_fb::RequestStatsResponse_::DoubleStat> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::RequestStatsResponse_::DoubleStat>;

typedef struct ItnAlignment {
    unsigned char field0;
} ItnAlignment;

typedef struct Offset<siri::speech::schema_fb::ItnAlignment> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::ItnAlignment>;

typedef struct AcousticFeature {
    unsigned char field0;
} AcousticFeature;

typedef struct Offset<siri::speech::schema_fb::AcousticFeature> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::AcousticFeature>;

typedef struct AudioAnalytics {
    unsigned char field0;
} AudioAnalytics;

typedef struct Offset<siri::speech::schema_fb::AudioAnalytics> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::AudioAnalytics>;

typedef struct SpeechRecognitionFeaturesEntry {
    unsigned char field0;
} SpeechRecognitionFeaturesEntry;

typedef struct Offset<siri::speech::schema_fb::AudioAnalytics_::SpeechRecognitionFeaturesEntry> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::AudioAnalytics_::SpeechRecognitionFeaturesEntry>;

typedef struct AcousticFeaturesEntry {
    unsigned char field0;
} AcousticFeaturesEntry;

typedef struct Offset<siri::speech::schema_fb::AudioAnalytics_::AcousticFeaturesEntry> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::AudioAnalytics_::AcousticFeaturesEntry>;

typedef struct FinalSpeechRecognitionResponse {
    unsigned char field0;
} FinalSpeechRecognitionResponse;

typedef struct Offset<siri::speech::schema_fb::FinalSpeechRecognitionResponse> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::FinalSpeechRecognitionResponse>;

typedef struct PartialSpeechRecognitionResponse {
    unsigned char field0;
} PartialSpeechRecognitionResponse;

typedef struct Offset<siri::speech::schema_fb::PartialSpeechRecognitionResponse> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::PartialSpeechRecognitionResponse>;

typedef struct StartSpeechRequest {
    unsigned char field0;
} StartSpeechRequest;

typedef struct Offset<siri::speech::schema_fb::StartSpeechRequest> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::StartSpeechRequest>;

typedef struct UserParameters {
    unsigned char field0;
} UserParameters;

typedef struct Offset<siri::speech::schema_fb::UserParameters> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::UserParameters>;

typedef struct MultiUserStartSpeechRequest {
    unsigned char field0;
} MultiUserStartSpeechRequest;

typedef struct Offset<siri::speech::schema_fb::MultiUserStartSpeechRequest> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::MultiUserStartSpeechRequest>;

typedef struct UpdateAudioInfo {
    unsigned char field0;
} UpdateAudioInfo;

typedef struct Offset<siri::speech::schema_fb::UpdateAudioInfo> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::UpdateAudioInfo>;

typedef struct ContextWithPronHints {
    unsigned char field0;
} ContextWithPronHints;

typedef struct Offset<siri::speech::schema_fb::ContextWithPronHints> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::ContextWithPronHints>;

typedef struct SetSpeechContext {
    unsigned char field0;
} SetSpeechContext;

typedef struct Offset<siri::speech::schema_fb::SetSpeechContext> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::SetSpeechContext>;

typedef struct SetSpeechProfile {
    unsigned char field0;
} SetSpeechProfile;

typedef struct Offset<siri::speech::schema_fb::SetSpeechProfile> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::SetSpeechProfile>;

typedef struct SetEndpointerState {
    unsigned char field0;
} SetEndpointerState;

typedef struct Offset<siri::speech::schema_fb::SetEndpointerState> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::SetEndpointerState>;

typedef struct AudioPacket {
    unsigned char field0;
} AudioPacket;

typedef struct Offset<siri::speech::schema_fb::AudioPacket> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::AudioPacket>;

typedef struct FinishAudio {
    unsigned char field0;
} FinishAudio;

typedef struct Offset<siri::speech::schema_fb::FinishAudio> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::FinishAudio>;

typedef struct ServerFeatureLatencyDistributionEntry {
    unsigned char field0;
} ServerFeatureLatencyDistributionEntry;

typedef struct Offset<siri::speech::schema_fb::FinishAudio_::ServerFeatureLatencyDistributionEntry> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::FinishAudio_::ServerFeatureLatencyDistributionEntry>;

typedef struct UpdatedAcousticProfile {
    unsigned char field0;
} UpdatedAcousticProfile;

typedef struct Offset<siri::speech::schema_fb::UpdatedAcousticProfile> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::UpdatedAcousticProfile>;

typedef struct Word {
    unsigned char field0;
} Word;

typedef struct Offset<siri::speech::schema_fb::Word> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::Word>;

typedef struct UserDataEntity {
    unsigned char field0;
} UserDataEntity;

typedef struct Offset<siri::speech::schema_fb::UserDataEntity> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::UserDataEntity>;

typedef struct CategoryData {
    unsigned char field0;
} CategoryData;

typedef struct Offset<siri::speech::schema_fb::CategoryData> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::CategoryData>;

typedef struct CreateLanguageProfileRequest {
    unsigned char field0;
} CreateLanguageProfileRequest;

typedef struct Offset<siri::speech::schema_fb::CreateLanguageProfileRequest> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::CreateLanguageProfileRequest>;

typedef struct CreateLanguageProfileResponse {
    unsigned char field0;
} CreateLanguageProfileResponse;

typedef struct Offset<siri::speech::schema_fb::CreateLanguageProfileResponse> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::CreateLanguageProfileResponse>;

typedef struct StartPronGuessRequest {
    unsigned char field0;
} StartPronGuessRequest;

typedef struct Offset<siri::speech::schema_fb::StartPronGuessRequest> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::StartPronGuessRequest>;

typedef struct CancelRequest {
    unsigned char field0;
} CancelRequest;

typedef struct Offset<siri::speech::schema_fb::CancelRequest> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::CancelRequest>;

typedef struct Pronunciation {
    unsigned char field0;
} Pronunciation;

typedef struct Offset<siri::speech::schema_fb::Pronunciation> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::Pronunciation>;

typedef struct VocToken {
    unsigned char field0;
} VocToken;

typedef struct Offset<siri::speech::schema_fb::VocToken> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::VocToken>;

typedef struct PronGuessResponse {
    unsigned char field0;
} PronGuessResponse;

typedef struct Offset<siri::speech::schema_fb::PronGuessResponse> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::PronGuessResponse>;

typedef struct RecoverPronsRequest {
    unsigned char field0;
} RecoverPronsRequest;

typedef struct Offset<siri::speech::schema_fb::RecoverPronsRequest> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::RecoverPronsRequest>;

typedef struct RecoverPronsResponse {
    unsigned char field0;
} RecoverPronsResponse;

typedef struct Offset<siri::speech::schema_fb::RecoverPronsResponse> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::RecoverPronsResponse>;

typedef struct StartBatchRecoverRequest {
    unsigned char field0;
} StartBatchRecoverRequest;

typedef struct Offset<siri::speech::schema_fb::StartBatchRecoverRequest> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::StartBatchRecoverRequest>;

typedef struct BatchRecoverFinalResponse {
    unsigned char field0;
} BatchRecoverFinalResponse;

typedef struct Offset<siri::speech::schema_fb::BatchRecoverFinalResponse> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::BatchRecoverFinalResponse>;

typedef struct ItnRequest {
    unsigned char field0;
} ItnRequest;

typedef struct Offset<siri::speech::schema_fb::ItnRequest> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::ItnRequest>;

typedef struct ItnResponse {
    unsigned char field0;
} ItnResponse;

typedef struct Offset<siri::speech::schema_fb::ItnResponse> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::ItnResponse>;

typedef struct PostItnHammerRequest {
    unsigned char field0;
} PostItnHammerRequest;

typedef struct Offset<siri::speech::schema_fb::PostItnHammerRequest> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::PostItnHammerRequest>;

typedef struct PostItnHammerResponse {
    unsigned char field0;
} PostItnHammerResponse;

typedef struct Offset<siri::speech::schema_fb::PostItnHammerResponse> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::PostItnHammerResponse>;

typedef struct TextNormalizationRequest {
    unsigned char field0;
} TextNormalizationRequest;

typedef struct Offset<siri::speech::schema_fb::TextNormalizationRequest> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TextNormalizationRequest>;

typedef struct NormalizedTokenVariant {
    unsigned char field0;
} NormalizedTokenVariant;

typedef struct Offset<siri::speech::schema_fb::NormalizedTokenVariant> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::NormalizedTokenVariant>;

typedef struct NormalizedToken {
    unsigned char field0;
} NormalizedToken;

typedef struct Offset<siri::speech::schema_fb::NormalizedToken> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::NormalizedToken>;

typedef struct TextNormalizationResponse {
    unsigned char field0;
} TextNormalizationResponse;

typedef struct Offset<siri::speech::schema_fb::TextNormalizationResponse> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TextNormalizationResponse>;

typedef struct PronChoice {
    unsigned char field0;
} PronChoice;

typedef struct Offset<siri::speech::schema_fb::PronChoice> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::PronChoice>;

typedef struct SanitizedPronToken {
    unsigned char field0;
} SanitizedPronToken;

typedef struct Offset<siri::speech::schema_fb::SanitizedPronToken> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::SanitizedPronToken>;

typedef struct TokenProns {
    unsigned char field0;
} TokenProns;

typedef struct Offset<siri::speech::schema_fb::TokenProns> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TokenProns>;

typedef struct SanitizedSequence {
    unsigned char field0;
} SanitizedSequence;

typedef struct Offset<siri::speech::schema_fb::TokenProns_::SanitizedSequence> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TokenProns_::SanitizedSequence>;

typedef struct GraphemeToPhonemeRequest {
    unsigned char field0;
} GraphemeToPhonemeRequest;

typedef struct Offset<siri::speech::schema_fb::GraphemeToPhonemeRequest> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::GraphemeToPhonemeRequest>;

typedef struct GraphemeToPhonemeResponse {
    unsigned char field0;
} GraphemeToPhonemeResponse;

typedef struct Offset<siri::speech::schema_fb::GraphemeToPhonemeResponse> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::GraphemeToPhonemeResponse>;

typedef struct Alignment {
    unsigned char field0;
} Alignment;

typedef struct Offset<siri::speech::schema_fb::Alignment> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::Alignment>;

typedef struct Span {
    unsigned char field0;
} Span;

typedef struct Offset<siri::speech::schema_fb::Span> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::Span>;

typedef struct RepeatedSpan {
    unsigned char field0;
} RepeatedSpan;

typedef struct Offset<siri::speech::schema_fb::RepeatedSpan> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::RepeatedSpan>;

typedef struct SpeechTranslationInfo {
    unsigned char field0;
} SpeechTranslationInfo;

typedef struct Offset<siri::speech::schema_fb::SpeechTranslationInfo> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::SpeechTranslationInfo>;

typedef struct SiriTranslationInfo {
    unsigned char field0;
} SiriTranslationInfo;

typedef struct Offset<siri::speech::schema_fb::SiriTranslationInfo> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::SiriTranslationInfo>;

typedef struct SiriPayloadTranslationInfo {
    unsigned char field0;
} SiriPayloadTranslationInfo;

typedef struct Offset<siri::speech::schema_fb::SiriPayloadTranslationInfo> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::SiriPayloadTranslationInfo>;

typedef struct WebTranslationInfo {
    unsigned char field0;
} WebTranslationInfo;

typedef struct Offset<siri::speech::schema_fb::WebTranslationInfo> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::WebTranslationInfo>;

typedef struct TranslationRequest {
    unsigned char field0;
} TranslationRequest;

typedef struct Offset<siri::speech::schema_fb::TranslationRequest> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TranslationRequest>;

typedef struct StreamingTranslationRequest {
    unsigned char field0;
} StreamingTranslationRequest;

typedef struct Offset<siri::speech::schema_fb::StreamingTranslationRequest> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::StreamingTranslationRequest>;

typedef struct TranslationResponse {
    unsigned char field0;
} TranslationResponse;

typedef struct Offset<siri::speech::schema_fb::TranslationResponse> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TranslationResponse>;

typedef struct TranslationToken {
    unsigned char field0;
} TranslationToken;

typedef struct Offset<siri::speech::schema_fb::TranslationResponse_::TranslationToken> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TranslationResponse_::TranslationToken>;

typedef struct TranslationPhrase {
    unsigned char field0;
} TranslationPhrase;

typedef struct Offset<siri::speech::schema_fb::TranslationResponse_::TranslationPhrase> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TranslationResponse_::TranslationPhrase>;

typedef struct EndPointLikelihood {
    unsigned char field0;
} EndPointLikelihood;

typedef struct Offset<siri::speech::schema_fb::EndPointLikelihood> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::EndPointLikelihood>;

typedef struct EndPointCandidate {
    unsigned char field0;
} EndPointCandidate;

typedef struct Offset<siri::speech::schema_fb::EndPointCandidate> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::EndPointCandidate>;

typedef struct SetRequestOrigin {
    unsigned char field0;
} SetRequestOrigin;

typedef struct Offset<siri::speech::schema_fb::SetRequestOrigin> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::SetRequestOrigin>;

typedef struct RecognitionProgress {
    unsigned char field0;
} RecognitionProgress;

typedef struct Offset<siri::speech::schema_fb::RecognitionProgress> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::RecognitionProgress>;

typedef struct ResetServerEndpointer {
    unsigned char field0;
} ResetServerEndpointer;

typedef struct Offset<siri::speech::schema_fb::ResetServerEndpointer> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::ResetServerEndpointer>;

typedef struct LatnnMitigatorResult {
    unsigned char field0;
} LatnnMitigatorResult;

typedef struct Offset<siri::speech::schema_fb::LatnnMitigatorResult> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::LatnnMitigatorResult>;

typedef struct RecognitionCandidate {
    unsigned char field0;
} RecognitionCandidate;

typedef struct Offset<siri::speech::schema_fb::RecognitionCandidate> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::RecognitionCandidate>;

typedef struct CheckForSpeechRequest {
    unsigned char field0;
} CheckForSpeechRequest;

typedef struct Offset<siri::speech::schema_fb::CheckForSpeechRequest> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::CheckForSpeechRequest>;

typedef struct CheckForSpeechResponse {
    unsigned char field0;
} CheckForSpeechResponse;

typedef struct Offset<siri::speech::schema_fb::CheckForSpeechResponse> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::CheckForSpeechResponse>;

typedef struct ErrorBlamerRequest {
    unsigned char field0;
} ErrorBlamerRequest;

typedef struct Offset<siri::speech::schema_fb::ErrorBlamerRequest> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::ErrorBlamerRequest>;

typedef struct ErrorBlamerResponse {
    unsigned char field0;
} ErrorBlamerResponse;

typedef struct Offset<siri::speech::schema_fb::ErrorBlamerResponse> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::ErrorBlamerResponse>;

typedef struct LmScorerToken {
    unsigned char field0;
} LmScorerToken;

typedef struct Offset<siri::speech::schema_fb::LmScorerToken> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::LmScorerToken>;

typedef struct LmScorerRequest {
    unsigned char field0;
} LmScorerRequest;

typedef struct Offset<siri::speech::schema_fb::LmScorerRequest> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::LmScorerRequest>;

typedef struct LmScorerResponse {
    unsigned char field0;
} LmScorerResponse;

typedef struct Offset<siri::speech::schema_fb::LmScorerResponse> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::LmScorerResponse>;

typedef struct AStarFuzzyMatchingConfig {
    unsigned char field0;
} AStarFuzzyMatchingConfig;

typedef struct Offset<siri::speech::schema_fb::AStarFuzzyMatchingConfig> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::AStarFuzzyMatchingConfig>;

typedef struct AStarFuzzyMatchingResult {
    unsigned char field0;
} AStarFuzzyMatchingResult;

typedef struct Offset<siri::speech::schema_fb::AStarFuzzyMatchingResult> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::AStarFuzzyMatchingResult>;

typedef struct AStarFuzzyMatchingRequest {
    unsigned char field0;
} AStarFuzzyMatchingRequest;

typedef struct Offset<siri::speech::schema_fb::AStarFuzzyMatchingRequest> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::AStarFuzzyMatchingRequest>;

typedef struct AStarFuzzyMatchingResponse {
    unsigned char field0;
} AStarFuzzyMatchingResponse;

typedef struct Offset<siri::speech::schema_fb::AStarFuzzyMatchingResponse> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::AStarFuzzyMatchingResponse>;

typedef struct Keyword {
    unsigned char field0;
} Keyword;

typedef struct Offset<siri::speech::schema_fb::Keyword> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::Keyword>;

typedef struct KeywordFinderRequest {
    unsigned char field0;
} KeywordFinderRequest;

typedef struct Offset<siri::speech::schema_fb::KeywordFinderRequest> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::KeywordFinderRequest>;

typedef struct KeywordFinderResponse {
    unsigned char field0;
} KeywordFinderResponse;

typedef struct Offset<siri::speech::schema_fb::KeywordFinderResponse> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::KeywordFinderResponse>;

typedef struct ServerEndpointFeatures {
    unsigned char field0;
} ServerEndpointFeatures;

typedef struct Offset<siri::speech::schema_fb::ServerEndpointFeatures> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::ServerEndpointFeatures>;

typedef struct CorrectionsValidatorRequest {
    unsigned char field0;
} CorrectionsValidatorRequest;

typedef struct Offset<siri::speech::schema_fb::CorrectionsValidatorRequest> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::CorrectionsValidatorRequest>;

typedef struct CorrectionsAlignment {
    unsigned char field0;
} CorrectionsAlignment;

typedef struct Offset<siri::speech::schema_fb::CorrectionsAlignment> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::CorrectionsAlignment>;

typedef struct CorrectionsValidatorResponse {
    unsigned char field0;
} CorrectionsValidatorResponse;

typedef struct Offset<siri::speech::schema_fb::CorrectionsValidatorResponse> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::CorrectionsValidatorResponse>;

typedef struct TTSRequestFeatureFlags {
    unsigned char field0;
} TTSRequestFeatureFlags;

typedef struct Offset<siri::speech::schema_fb::TTSRequestFeatureFlags> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TTSRequestFeatureFlags>;

typedef struct TextToSpeechVoice {
    unsigned char field0;
} TextToSpeechVoice;

typedef struct Offset<siri::speech::schema_fb::TextToSpeechVoice> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TextToSpeechVoice>;

typedef struct TextToSpeechResource {
    unsigned char field0;
} TextToSpeechResource;

typedef struct Offset<siri::speech::schema_fb::TextToSpeechResource> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TextToSpeechResource>;

typedef struct TextToSpeechMeta {
    unsigned char field0;
} TextToSpeechMeta;

typedef struct Offset<siri::speech::schema_fb::TextToSpeechMeta> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TextToSpeechMeta>;

typedef struct TextToSpeechRequestMeta {
    unsigned char field0;
} TextToSpeechRequestMeta;

typedef struct Offset<siri::speech::schema_fb::TextToSpeechRequestMeta> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TextToSpeechRequestMeta>;

typedef struct TextToSpeechRequestContext {
    unsigned char field0;
} TextToSpeechRequestContext;

typedef struct Offset<siri::speech::schema_fb::TextToSpeechRequestContext> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TextToSpeechRequestContext>;

typedef struct ContextInfoEntry {
    unsigned char field0;
} ContextInfoEntry;

typedef struct Offset<siri::speech::schema_fb::TextToSpeechRequestContext_::ContextInfoEntry> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TextToSpeechRequestContext_::ContextInfoEntry>;

typedef struct TextToSpeechRequestExperiment {
    unsigned char field0;
} TextToSpeechRequestExperiment;

typedef struct Offset<siri::speech::schema_fb::TextToSpeechRequestExperiment> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TextToSpeechRequestExperiment>;

typedef struct TTSWordPhonemes {
    unsigned char field0;
} TTSWordPhonemes;

typedef struct Offset<siri::speech::schema_fb::TTSWordPhonemes> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TTSWordPhonemes>;

typedef struct TTSPhonemeSequence {
    unsigned char field0;
} TTSPhonemeSequence;

typedef struct Offset<siri::speech::schema_fb::TTSPhonemeSequence> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TTSPhonemeSequence>;

typedef struct TTSNeuralPhonemeSequence {
    unsigned char field0;
} TTSNeuralPhonemeSequence;

typedef struct Offset<siri::speech::schema_fb::TTSNeuralPhonemeSequence> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TTSNeuralPhonemeSequence>;

typedef struct TTSPrompts {
    unsigned char field0;
} TTSPrompts;

typedef struct Offset<siri::speech::schema_fb::TTSPrompts> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TTSPrompts>;

typedef struct TTSReplacement {
    unsigned char field0;
} TTSReplacement;

typedef struct Offset<siri::speech::schema_fb::TTSReplacement> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TTSReplacement>;

typedef struct TTSNormalizedText {
    unsigned char field0;
} TTSNormalizedText;

typedef struct Offset<siri::speech::schema_fb::TTSNormalizedText> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TTSNormalizedText>;

typedef struct TextToSpeechFeature {
    unsigned char field0;
} TextToSpeechFeature;

typedef struct Offset<siri::speech::schema_fb::TextToSpeechFeature> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TextToSpeechFeature>;

typedef struct TextToSpeechRequestDebug {
    unsigned char field0;
} TextToSpeechRequestDebug;

typedef struct Offset<siri::speech::schema_fb::TextToSpeechRequestDebug> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TextToSpeechRequestDebug>;

typedef struct TextToSpeechVoiceResource {
    unsigned char field0;
} TextToSpeechVoiceResource;

typedef struct Offset<siri::speech::schema_fb::TextToSpeechVoiceResource> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TextToSpeechVoiceResource>;

typedef struct TextToSpeechUserProfile {
    unsigned char field0;
} TextToSpeechUserProfile;

typedef struct Offset<siri::speech::schema_fb::TextToSpeechUserProfile> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TextToSpeechUserProfile>;

typedef struct TextToSpeechRequestDevConfig {
    unsigned char field0;
} TextToSpeechRequestDevConfig;

typedef struct Offset<siri::speech::schema_fb::TextToSpeechRequestDevConfig> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TextToSpeechRequestDevConfig>;

typedef struct TextToSpeechResponseDevData {
    unsigned char field0;
} TextToSpeechResponseDevData;

typedef struct Offset<siri::speech::schema_fb::TextToSpeechResponseDevData> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TextToSpeechResponseDevData>;

typedef struct TextToSpeechRequest {
    unsigned char field0;
} TextToSpeechRequest;

typedef struct Offset<siri::speech::schema_fb::TextToSpeechRequest> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TextToSpeechRequest>;

typedef struct Offset<siri::speech::schema_fb::TextToSpeechRequest_::ContextInfoEntry> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TextToSpeechRequest_::ContextInfoEntry>;

typedef struct TextToSpeechUserVoiceProfile {
    unsigned char field0;
} TextToSpeechUserVoiceProfile;

typedef struct Offset<siri::speech::schema_fb::TextToSpeechUserVoiceProfile> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TextToSpeechUserVoiceProfile>;

typedef struct TextToSpeechRequestProsodyTransferConfig {
    unsigned char field0;
} TextToSpeechRequestProsodyTransferConfig;

typedef struct Offset<siri::speech::schema_fb::TextToSpeechRequestProsodyTransferConfig> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TextToSpeechRequestProsodyTransferConfig>;

typedef struct AudioDescription {
    unsigned char field0;
} AudioDescription;

typedef struct Offset<siri::speech::schema_fb::AudioDescription> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::AudioDescription>;

typedef struct WordTimingInfo {
    unsigned char field0;
} WordTimingInfo;

typedef struct Offset<siri::speech::schema_fb::WordTimingInfo> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::WordTimingInfo>;

typedef struct TextToSpeechResponse {
    unsigned char field0;
} TextToSpeechResponse;

typedef struct Offset<siri::speech::schema_fb::TextToSpeechResponse> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TextToSpeechResponse>;

typedef struct StartTextToSpeechStreamingRequest {
    unsigned char field0;
} StartTextToSpeechStreamingRequest;

typedef struct Offset<siri::speech::schema_fb::StartTextToSpeechStreamingRequest> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::StartTextToSpeechStreamingRequest>;

typedef struct Offset<siri::speech::schema_fb::StartTextToSpeechStreamingRequest_::ContextInfoEntry> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::StartTextToSpeechStreamingRequest_::ContextInfoEntry>;

typedef struct BeginTextToSpeechStreamingResponse {
    unsigned char field0;
} BeginTextToSpeechStreamingResponse;

typedef struct Offset<siri::speech::schema_fb::BeginTextToSpeechStreamingResponse> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::BeginTextToSpeechStreamingResponse>;

typedef struct PartialTextToSpeechStreamingResponse {
    unsigned char field0;
} PartialTextToSpeechStreamingResponse;

typedef struct Offset<siri::speech::schema_fb::PartialTextToSpeechStreamingResponse> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::PartialTextToSpeechStreamingResponse>;

typedef struct FinalTextToSpeechStreamingResponse {
    unsigned char field0;
} FinalTextToSpeechStreamingResponse;

typedef struct Offset<siri::speech::schema_fb::FinalTextToSpeechStreamingResponse> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::FinalTextToSpeechStreamingResponse>;

typedef struct TextToSpeechCacheMetaInfo {
    unsigned char field0;
} TextToSpeechCacheMetaInfo;

typedef struct Offset<siri::speech::schema_fb::TextToSpeechCacheMetaInfo> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TextToSpeechCacheMetaInfo>;

typedef struct TextToSpeechCacheObject {
    unsigned char field0;
} TextToSpeechCacheObject;

typedef struct Offset<siri::speech::schema_fb::TextToSpeechCacheObject> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TextToSpeechCacheObject>;

typedef struct TextToSpeechCacheContainer {
    unsigned char field0;
} TextToSpeechCacheContainer;

typedef struct Offset<siri::speech::schema_fb::TextToSpeechCacheContainer> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TextToSpeechCacheContainer>;

typedef struct QssAckResponse {
    unsigned char field0;
} QssAckResponse;

typedef struct Offset<siri::speech::schema_fb::QssAckResponse> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::QssAckResponse>;

typedef struct TextToSpeechSpeechFeatureModelIdentifier {
    unsigned char field0;
} TextToSpeechSpeechFeatureModelIdentifier;

typedef struct Offset<siri::speech::schema_fb::TextToSpeechSpeechFeatureModelIdentifier> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TextToSpeechSpeechFeatureModelIdentifier>;

typedef struct TextToSpeechSpeechFeatureInputWord {
    unsigned char field0;
} TextToSpeechSpeechFeatureInputWord;

typedef struct Offset<siri::speech::schema_fb::TextToSpeechSpeechFeatureInputWord> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TextToSpeechSpeechFeatureInputWord>;

typedef struct TextToSpeechSpeechFeatureInputText {
    unsigned char field0;
} TextToSpeechSpeechFeatureInputText;

typedef struct Offset<siri::speech::schema_fb::TextToSpeechSpeechFeatureInputText> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TextToSpeechSpeechFeatureInputText>;

typedef struct TextToSpeechSpeechFeatureInputWave {
    unsigned char field0;
} TextToSpeechSpeechFeatureInputWave;

typedef struct Offset<siri::speech::schema_fb::TextToSpeechSpeechFeatureInputWave> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TextToSpeechSpeechFeatureInputWave>;

typedef struct TextToSpeechSpeechFeatureOutputFeature {
    unsigned char field0;
} TextToSpeechSpeechFeatureOutputFeature;

typedef struct Offset<siri::speech::schema_fb::TextToSpeechSpeechFeatureOutputFeature> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TextToSpeechSpeechFeatureOutputFeature>;

typedef struct TextToSpeechSpeechFeatureRequest {
    unsigned char field0;
} TextToSpeechSpeechFeatureRequest;

typedef struct Offset<siri::speech::schema_fb::TextToSpeechSpeechFeatureRequest> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TextToSpeechSpeechFeatureRequest>;

typedef struct TextToSpeechSpeechFeatureResponse {
    unsigned char field0;
} TextToSpeechSpeechFeatureResponse;

typedef struct Offset<siri::speech::schema_fb::TextToSpeechSpeechFeatureResponse> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TextToSpeechSpeechFeatureResponse>;

typedef struct ClientSetupInfo {
    unsigned char field0;
} ClientSetupInfo;

typedef struct Offset<siri::speech::schema_fb::ClientSetupInfo> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::ClientSetupInfo>;

typedef struct AudioLimitExceeded {
    unsigned char field0;
} AudioLimitExceeded;

typedef struct Offset<siri::speech::schema_fb::AudioLimitExceeded> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::AudioLimitExceeded>;

typedef struct ServiceDiscoveryRequest {
    unsigned char field0;
} ServiceDiscoveryRequest;

typedef struct Offset<siri::speech::schema_fb::ServiceDiscoveryRequest> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::ServiceDiscoveryRequest>;

typedef struct ServiceDiscoveryResponse {
    unsigned char field0;
} ServiceDiscoveryResponse;

typedef struct Offset<siri::speech::schema_fb::ServiceDiscoveryResponse> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::ServiceDiscoveryResponse>;

typedef struct AudioFrame {
    unsigned char field0;
} AudioFrame;

typedef struct Offset<siri::speech::schema_fb::AudioFrame> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::AudioFrame>;

typedef struct SpeechTranslationAudioPacket {
    unsigned char field0;
} SpeechTranslationAudioPacket;

typedef struct Offset<siri::speech::schema_fb::SpeechTranslationAudioPacket> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::SpeechTranslationAudioPacket>;

typedef struct TranslationLocalePair {
    unsigned char field0;
} TranslationLocalePair;

typedef struct Offset<siri::speech::schema_fb::TranslationLocalePair> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::TranslationLocalePair>;

typedef struct StartSpeechTranslationRequest {
    unsigned char field0;
} StartSpeechTranslationRequest;

typedef struct Offset<siri::speech::schema_fb::StartSpeechTranslationRequest> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::StartSpeechTranslationRequest>;

typedef struct StartSpeechTranslationLoggingRequest {
    unsigned char field0;
} StartSpeechTranslationLoggingRequest;

typedef struct Offset<siri::speech::schema_fb::StartSpeechTranslationLoggingRequest> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::StartSpeechTranslationLoggingRequest>;

typedef struct SpeechTranslationPartialRecognitionResponse {
    unsigned char field0;
} SpeechTranslationPartialRecognitionResponse;

typedef struct Offset<siri::speech::schema_fb::SpeechTranslationPartialRecognitionResponse> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::SpeechTranslationPartialRecognitionResponse>;

typedef struct SpeechTranslationFinalRecognitionResponse {
    unsigned char field0;
} SpeechTranslationFinalRecognitionResponse;

typedef struct Offset<siri::speech::schema_fb::SpeechTranslationFinalRecognitionResponse> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::SpeechTranslationFinalRecognitionResponse>;

typedef struct SpeechTranslationMtResponse {
    unsigned char field0;
} SpeechTranslationMtResponse;

typedef struct Offset<siri::speech::schema_fb::SpeechTranslationMtResponse> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::SpeechTranslationMtResponse>;

typedef struct Offset<siri::speech::schema_fb::SpeechTranslationMtResponse_::TranslationPhrase> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::SpeechTranslationMtResponse_::TranslationPhrase>;

typedef struct SpeechTranslationTextToSpeechResponse {
    unsigned char field0;
} SpeechTranslationTextToSpeechResponse;

typedef struct Offset<siri::speech::schema_fb::SpeechTranslationTextToSpeechResponse> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::SpeechTranslationTextToSpeechResponse>;

typedef struct SpeechTranslationServerEndpointFeatures {
    unsigned char field0;
} SpeechTranslationServerEndpointFeatures;

typedef struct Offset<siri::speech::schema_fb::SpeechTranslationServerEndpointFeatures> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::SpeechTranslationServerEndpointFeatures>;

typedef struct ShortcutFuzzyMatchRequest {
    unsigned char field0;
} ShortcutFuzzyMatchRequest;

typedef struct Offset<siri::speech::schema_fb::ShortcutFuzzyMatchRequest> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::ShortcutFuzzyMatchRequest>;

typedef struct StringTokenPair {
    unsigned char field0;
} StringTokenPair;

typedef struct Offset<siri::speech::schema_fb::ShortcutFuzzyMatchRequest_::StringTokenPair> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::ShortcutFuzzyMatchRequest_::StringTokenPair>;

typedef struct ShortcutFuzzyMatchResponse {
    unsigned char field0;
} ShortcutFuzzyMatchResponse;

typedef struct Offset<siri::speech::schema_fb::ShortcutFuzzyMatchResponse> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::ShortcutFuzzyMatchResponse>;

typedef struct ShortcutScorePair {
    unsigned char field0;
} ShortcutScorePair;

typedef struct Offset<siri::speech::schema_fb::ShortcutFuzzyMatchResponse_::ShortcutScorePair> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::ShortcutFuzzyMatchResponse_::ShortcutScorePair>;

typedef struct LanguageParameters {
    unsigned char field0;
} LanguageParameters;

typedef struct Offset<siri::speech::schema_fb::LanguageParameters> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::LanguageParameters>;

typedef struct StartMultilingualSpeechRequest {
    unsigned char field0;
} StartMultilingualSpeechRequest;

typedef struct Offset<siri::speech::schema_fb::StartMultilingualSpeechRequest> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::StartMultilingualSpeechRequest>;

typedef struct LanguageDetectionPrediction {
    unsigned char field0;
} LanguageDetectionPrediction;

typedef struct Offset<siri::speech::schema_fb::LanguageDetectionPrediction> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::LanguageDetectionPrediction>;

typedef struct LanguageDetected {
    unsigned char field0;
} LanguageDetected;

typedef struct Offset<siri::speech::schema_fb::LanguageDetected> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::LanguageDetected>;

typedef struct FinalBlazarResponse {
    unsigned char field0;
} FinalBlazarResponse;

typedef struct Offset<siri::speech::schema_fb::FinalBlazarResponse> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::FinalBlazarResponse>;

typedef struct BatchTranslationRequest {
    unsigned char field0;
} BatchTranslationRequest;

typedef struct Offset<siri::speech::schema_fb::BatchTranslationRequest> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::BatchTranslationRequest>;

typedef struct Paragraph {
    unsigned char field0;
} Paragraph;

typedef struct Offset<siri::speech::schema_fb::BatchTranslationRequest_::Paragraph> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::BatchTranslationRequest_::Paragraph>;

typedef struct BatchTranslationFeedbackRequest {
    unsigned char field0;
} BatchTranslationFeedbackRequest;

typedef struct Offset<siri::speech::schema_fb::BatchTranslationFeedbackRequest> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::BatchTranslationFeedbackRequest>;

typedef struct BatchTranslationLoggingRequest {
    unsigned char field0;
} BatchTranslationLoggingRequest;

typedef struct Offset<siri::speech::schema_fb::BatchTranslationLoggingRequest> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::BatchTranslationLoggingRequest>;

typedef struct BatchTranslationResponse {
    unsigned char field0;
} BatchTranslationResponse;

typedef struct Offset<siri::speech::schema_fb::BatchTranslationResponse> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::BatchTranslationResponse>;

typedef struct Offset<siri::speech::schema_fb::BatchTranslationResponse_::TranslationPhrase> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::BatchTranslationResponse_::TranslationPhrase>;

typedef struct TranslatedSentence {
    unsigned char field0;
} TranslatedSentence;

typedef struct Offset<siri::speech::schema_fb::BatchTranslationResponse_::TranslatedSentence> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::BatchTranslationResponse_::TranslatedSentence>;

typedef struct BatchTranslationCacheContainer {
    unsigned char field0;
} BatchTranslationCacheContainer;

typedef struct Offset<siri::speech::schema_fb::BatchTranslationCacheContainer> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::BatchTranslationCacheContainer>;

typedef struct StartLanguageDetectionRequest {
    unsigned char field0;
} StartLanguageDetectionRequest;

typedef struct Offset<siri::speech::schema_fb::StartLanguageDetectionRequest> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::StartLanguageDetectionRequest>;

typedef struct LanguageDetectionResponse {
    unsigned char field0;
} LanguageDetectionResponse;

typedef struct Offset<siri::speech::schema_fb::LanguageDetectionResponse> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::LanguageDetectionResponse>;

typedef struct QSSVersionInfo {
    unsigned char field0;
} QSSVersionInfo;

typedef struct Offset<siri::speech::schema_fb::QSSVersionInfo> {
    unsigned int field0;
} Offset<siri::speech::schema_fb::QSSVersionInfo>;

typedef struct PronGuessStreamingRequest {
    unsigned char field0;
} PronGuessStreamingRequest;

typedef struct Offset<siri::speech::qss_fb::PronGuessStreamingRequest> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::PronGuessStreamingRequest>;

typedef struct PronGuessStreamingResponse {
    unsigned char field0;
} PronGuessStreamingResponse;

typedef struct Offset<siri::speech::qss_fb::PronGuessStreamingResponse> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::PronGuessStreamingResponse>;

typedef struct BatchRecoverStreamingRequest {
    unsigned char field0;
} BatchRecoverStreamingRequest;

typedef struct Offset<siri::speech::qss_fb::BatchRecoverStreamingRequest> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::BatchRecoverStreamingRequest>;

typedef struct BatchRecoverStreamingResponse {
    unsigned char field0;
} BatchRecoverStreamingResponse;

typedef struct Offset<siri::speech::qss_fb::BatchRecoverStreamingResponse> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::BatchRecoverStreamingResponse>;

typedef struct RecognitionStreamingRequest {
    unsigned char field0;
} RecognitionStreamingRequest;

typedef struct Offset<siri::speech::qss_fb::RecognitionStreamingRequest> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::RecognitionStreamingRequest>;

typedef struct RecognitionStreamingResponse {
    unsigned char field0;
} RecognitionStreamingResponse;

typedef struct Offset<siri::speech::qss_fb::RecognitionStreamingResponse> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::RecognitionStreamingResponse>;

typedef struct MultiUserStreamingRequest {
    unsigned char field0;
} MultiUserStreamingRequest;

typedef struct Offset<siri::speech::qss_fb::MultiUserStreamingRequest> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::MultiUserStreamingRequest>;

typedef struct MultiUserStreamingResponse {
    unsigned char field0;
} MultiUserStreamingResponse;

typedef struct Offset<siri::speech::qss_fb::MultiUserStreamingResponse> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::MultiUserStreamingResponse>;

typedef struct MultilingualStreamingRequest {
    unsigned char field0;
} MultilingualStreamingRequest;

typedef struct Offset<siri::speech::qss_fb::MultilingualStreamingRequest> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::MultilingualStreamingRequest>;

typedef struct MultilingualStreamingResponse {
    unsigned char field0;
} MultilingualStreamingResponse;

typedef struct Offset<siri::speech::qss_fb::MultilingualStreamingResponse> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::MultilingualStreamingResponse>;

typedef struct SpeechTranslationStreamingRequest {
    unsigned char field0;
} SpeechTranslationStreamingRequest;

typedef struct Offset<siri::speech::qss_fb::SpeechTranslationStreamingRequest> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::SpeechTranslationStreamingRequest>;

typedef struct SpeechTranslationStreamingResponse {
    unsigned char field0;
} SpeechTranslationStreamingResponse;

typedef struct Offset<siri::speech::qss_fb::SpeechTranslationStreamingResponse> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::SpeechTranslationStreamingResponse>;

typedef struct BatchTranslationStreamingRequest {
    unsigned char field0;
} BatchTranslationStreamingRequest;

typedef struct Offset<siri::speech::qss_fb::BatchTranslationStreamingRequest> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::BatchTranslationStreamingRequest>;

typedef struct BatchTranslationStreamingResponse {
    unsigned char field0;
} BatchTranslationStreamingResponse;

typedef struct Offset<siri::speech::qss_fb::BatchTranslationStreamingResponse> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::BatchTranslationStreamingResponse>;

typedef struct TextToSpeechRouterStreamingStreamingRequest {
    unsigned char field0;
} TextToSpeechRouterStreamingStreamingRequest;

typedef struct Offset<siri::speech::qss_fb::TextToSpeechRouterStreamingStreamingRequest> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::TextToSpeechRouterStreamingStreamingRequest>;

typedef struct TextToSpeechRouterStreamingStreamingResponse {
    unsigned char field0;
} TextToSpeechRouterStreamingStreamingResponse;

typedef struct Offset<siri::speech::qss_fb::TextToSpeechRouterStreamingStreamingResponse> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::TextToSpeechRouterStreamingStreamingResponse>;

typedef struct StreamingTranslationStreamingRequest {
    unsigned char field0;
} StreamingTranslationStreamingRequest;

typedef struct Offset<siri::speech::qss_fb::StreamingTranslationStreamingRequest> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::StreamingTranslationStreamingRequest>;

typedef struct StreamingTranslationStreamingResponse {
    unsigned char field0;
} StreamingTranslationStreamingResponse;

typedef struct Offset<siri::speech::qss_fb::StreamingTranslationStreamingResponse> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::StreamingTranslationStreamingResponse>;

typedef struct TextToSpeechStreamingStreamingRequest {
    unsigned char field0;
} TextToSpeechStreamingStreamingRequest;

typedef struct Offset<siri::speech::qss_fb::TextToSpeechStreamingStreamingRequest> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::TextToSpeechStreamingStreamingRequest>;

typedef struct TextToSpeechStreamingStreamingResponse {
    unsigned char field0;
} TextToSpeechStreamingStreamingResponse;

typedef struct Offset<siri::speech::qss_fb::TextToSpeechStreamingStreamingResponse> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::TextToSpeechStreamingStreamingResponse>;

typedef struct LanguageDetectionStreamingRequest {
    unsigned char field0;
} LanguageDetectionStreamingRequest;

typedef struct Offset<siri::speech::qss_fb::LanguageDetectionStreamingRequest> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::LanguageDetectionStreamingRequest>;

typedef struct LanguageDetectionStreamingResponse {
    unsigned char field0;
} LanguageDetectionStreamingResponse;

typedef struct Offset<siri::speech::qss_fb::LanguageDetectionStreamingResponse> {
    unsigned int field0;
} Offset<siri::speech::qss_fb::LanguageDetectionStreamingResponse>;

