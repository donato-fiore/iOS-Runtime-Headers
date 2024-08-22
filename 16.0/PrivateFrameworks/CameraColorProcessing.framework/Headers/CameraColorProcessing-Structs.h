typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct ? {
    BOOL counter;
    BOOL bracketCapture;
    BOOL bracketCount;
    BOOL flashCapture;
    BOOL flashCaptureCount;
} ?;

typedef struct CDualLEDsWhitePointProjector {
} // Error Processing Struct Fields

typedef struct CAWBAFEFDAssist {
} // Error Processing Struct Fields

typedef struct CAWBAFEPhotometerAssistPenrose {
} // Error Processing Struct Fields

typedef struct sPhotometerAWBMetadata {
} // Error Processing Struct Fields

typedef struct _FE_3A_Stats_H14 {
} // Error Processing Struct Fields

typedef struct CAWBAFE {
} // Error Processing Struct Fields

typedef struct sBTRect {
    int x;
    int y;
    unsigned int width;
    unsigned int height;
} sBTRect;

typedef struct sPerModuleLEDCalibData {
    unsigned char version;
    unsigned char isvalid;
    unsigned char programID;
    float cw_rg;
    float cw_bg;
    float ww_rg;
    float ww_bg;
    float ledWidePtrn_rg;
    float ledWidePtrn_bg;
    float ledSWidePtrn_rg;
    float ledSWidePtrn_bg;
    float ledTelePtrn_rg;
    float ledTelePtrn_bg;
    float strb_rg;
    float strb_bg;
} sPerModuleLEDCalibData;

typedef struct sFlashMetaData {
    unsigned int gStr;
    unsigned short pT;
    unsigned short flashCaptureCount;
    unsigned char flashCapture;
    unsigned int Ynl_str;
    unsigned int Yn_str;
    unsigned int ExpAdjRatio;
    int flashStatusAE;
    int flashStatusAWB;
    int strobeStatus;
    unsigned char flashCaptureSequence;
    BOOL bMultiCam;
    float isNominalStrobe;
    float ratio;
    int ledType;
    sPerModuleLEDCalibData pmLEDCalibData;
    unsigned int flashAuxFrameType;
    int dualProcessFlashType;
    int ltmSceneLux;
    BOOL internalFlashEn;
    BOOL externalFlash;
} sFlashMetaData;

typedef struct uBT88 {
    unsigned char fractional;
    unsigned char integer;
} uBT88;

typedef struct sAEFlashMetaData {
    unsigned int Ynl_str;
    unsigned int Yn_str;
    unsigned int Yavg;
    unsigned int Ytarget;
    unsigned int ExpAdjRatio;
    BOOL slowSync;
    unsigned int slowSyncFlashOnTime;
    unsigned int exposureTime;
    unsigned int SSFLeadingMargin;
    unsigned int SSFTrailingMargin;
} sAEFlashMetaData;

typedef struct sCIspMetaDataFDExposureDebug {
    int faceAverage;
    int faceWeight;
    int sceneXl;
    int sceneXm;
    int sceneXh;
    int sceneTarget;
    int scale;
    int aeBlend;
    int aeAverage;
    int aeTarget;
    int darkOutlierCount;
    int brightOutlierCount;
} sCIspMetaDataFDExposureDebug;

typedef struct sFlickerDetectionDebugParams {
    int detectStatus;
    unsigned short count;
    unsigned int freq;
    unsigned short confidence;
    unsigned short waveMatch;
} sFlickerDetectionDebugParams;

typedef struct sLuxCalcParams {
    unsigned int scale;
    unsigned int scaleShift;
} sLuxCalcParams;

typedef struct sAWBReflowParam {
    BOOL bGenerateReflowAWB;
    BOOL bUsingSingleStillAWB;
} sAWBReflowParam;

typedef struct sCIspCmdUBParamsSetMiscData {
    float analogGainLimit;
    sAWBReflowParam awbReflow;
} sCIspCmdUBParamsSetMiscData;

typedef struct sNextAEParam {
    NSUInteger exposure;
    unsigned int exposureTime;
    unsigned short gainAnal;
    unsigned short gainDigiSensor;
    unsigned short gainDigi;
    NSUInteger exposureSifr;
    unsigned int exposureTimeSifr;
    unsigned short gainAnalSifr;
    unsigned short gainDigiSensorSifr;
    unsigned short gainDigiSifr;
    int sifrSkipRatio;
    unsigned int overflowDGain;
    unsigned short hdrRatio;
    unsigned short ev0Ratio;
    unsigned short panoExpRatio;
    BOOL vHDROn;
    unsigned char bracketingCapture;
} sNextAEParam;

typedef struct sCIspAEMiscData {
    sNextAEParam nextAE;
} sCIspAEMiscData;

typedef struct sAEMetaData {
    unsigned int request;
    unsigned int status;
    unsigned short counter;
    NSUInteger exposure;
    unsigned int exposureTime;
    unsigned int pixelRate;
    BOOL gainAnal;
    unk v16;
    unsigned char v88;
    long gainDigiSensor;
    unsigned short v16;
    uBT88 v88;
    BOOL gainDigi;
    unk v16;
    unsigned char v88;
    long gainDigiAE;
    unsigned short interGainAnal;
    uBT88 interEIT;
    BOOL vFrameSize;
    unk totalVMin;
    unsigned char minVSizeForBracketing;
    long flickerFreq;
    unsigned short sceneBrightnessForLux;
    uBT88 luxLevel;
    unsigned short luxLevelLow;
    unsigned short luxLevelHigh;
    NSUInteger preFlashLuxLevel;
    unsigned int preFlashLuxLevelLow;
    unsigned int preFlashLuxLevelHigh;
    unsigned int inverseBinningGainFactor;
    unsigned int maxHighAGC;
    unsigned int flashAEDoneFlag;
    float contextSwitchConfig;
    unsigned short contextSwitchCompleted;
    unsigned short sessionType;
    unsigned short sessionState;
    unsigned short bracketingMode;
    unsigned short bracketingOisType;
    unsigned short bracketingCapture;
    unsigned short bracketingCaptureCount;
    unsigned char bracketingCaptureFirst;
    unsigned int bracketingCaptureLast;
    BOOL preBracketing;
    unsigned int bracketingExpRatio;
    unsigned int focusPos;
    unsigned char bracketingCaptureDummy;
    unsigned char bracketingCaptureDummyNeeded;
    unsigned char flash;
    unsigned char stable;
    unsigned char limitsReached;
    unsigned char drcSuspended;
    unsigned char multiCam;
    unsigned int aeAverage;
    short aeTarget;
    unsigned char aeMatrixHorCount;
    unsigned char aeMatrixVerCount;
    sAEFlashMetaData aeMatrix;
    BOOL motionFromAEMatrix;
    BOOL currentEIT;
    BOOL hdrRatio;
    BOOL ev0Ratio;
    unsigned int expBias;
    unsigned int realizedExpBias;
    unsigned short aeMatrixMin;
    unsigned short aeMatrixMax;
    unsigned int expBiasCommandTag;
    unsigned int manualExposureGainCommandTag;
    NSUInteger bracketingCaptureEVStop;
    unsigned short fdAEParams;
    unsigned short meteringMode;
    unsigned short flickerDebugParams;
    unsigned short isoBase;
    unsigned int luxCalcParams;
    unsigned int pseudoYWeight;
    unsigned int panoExpRatio;
    unsigned int strobePattern;
    short strobeAux;
    sCIspMetaDataFDExposureDebug strobeCurrent;
    unsigned short bioCaptureGroup;
    sFlickerDetectionDebugParams fIDFlowType;
    unsigned int maxPulseWidthLCUs;
    sLuxCalcParams slowSyncIsSlowSync;
    unsigned short faceExpRatioFiltered;
    unsigned short faceExpRatio;
    int bodyAdjustRatio;
    unsigned int flashLEDOffLux;
    unsigned int flashPreflashLux;
    unsigned int flashMixPercentage;
    int flashMainFlashLuxFull;
    unsigned int bHDRPrebracketing;
    BOOL pairedStrobePattern;
    float aeMode;
    float repeatSequence;
    float isSifrMode;
    float isVHDRMode;
    float HRDampingRatio;
    unsigned short sifrRDOffset;
    unsigned int exposureSifr;
    BOOL exposureTimeSifr;
    int gainAnalSifr;
    unsigned int v16;
    int v88;
    BOOL gainDigiSensorSifr;
    BOOL v16;
    float v88;
    unsigned int gainDigiSifr;
    NSUInteger v16;
    unsigned int v88;
    BOOL captureFrameType;
    unk sifrSkipRatio;
    unsigned char sifrOffPrepare;
    long isEV0RatioStable;
    unsigned short splitPDOn;
    uBT88 SphereRecenteringMode;
    BOOL overflowDGain;
    unk UBMisc;
    unsigned char AEMisc;
    long AEstatsContrastInsideFace;
    unsigned short AEstatsContrastOutsideFace;
    uBT88 videoHDRSwitchOn;
    BOOL chSyncExpRatios;
    unk hdrScore;
    unsigned char clippingDiscontinuity;
    long extraSoftDGain;
    unsigned short masterSyncOffset;
    uBT88 field125;
    unsigned char field126;
    int field127;
    BOOL field128;
    BOOL field129;
    BOOL field130;
    unsigned char field131;
    unsigned int field132;
    sCIspCmdUBParamsSetMiscData field133;
    sCIspAEMiscData field134;
    float field135;
    float field136;
    BOOL field137;
    float field138;
    float field139;
    unsigned char field140;
    BOOL field141;
    unsigned int field142;
} sAEMetaData;

typedef struct sBTRGGB16 {
    BOOL r;
    unk v16;
    unsigned char v88;
    long gr;
    unsigned short v16;
    uBT88 v88;
    BOOL gb;
    unk v16;
    unsigned char v88;
    long b;
    unsigned short v16;
    uBT88 v88;
    BOOL field12;
    unk field13;
    unsigned char field14;
    long field15;
    unsigned short field16;
    uBT88 field17;
    BOOL field18;
    unk field19;
    unsigned char field20;
    long field21;
    unsigned short field22;
    uBT88 field23;
} sBTRGGB16;

typedef struct sSlaveCameraAWBParam {
    unsigned short rgCalGain;
    unsigned short bgCalGain;
    unsigned int CCTestimate;
    unsigned int wbGain;
    unsigned int comboWBGain;
    int ccm;
    BOOL valid;
    NSUInteger slaveCh;
    float pre_rgLogRatio;
    float pre_bgLogRatio;
    float daylightWeight;
    BOOL useSpatialCCM;
    BOOL isLEDMainFlashforAWB;
    float flashProjMixWeighting;
    sBTRGGB16 awbGainsFlashProj;
} sSlaveCameraAWBParam;

typedef struct sAWBColorCorrectionMatrix {
    BOOL coeff;
    unk v16;
    unsigned char v88;
    long field3;
    unsigned short field4;
    uBT88 field5;
} sAWBColorCorrectionMatrix;

typedef struct sCameraAWBParam {
    sBTRGGB16 awbGains;
    sBTRGGB16 gains;
    sBTRGGB16 gainsNormalized;
    unsigned short maxWBGainDown;
    unsigned short maxColorCalGainDown;
    unsigned int CCTEstimate;
    unsigned short rgGain;
    unsigned short bgGain;
    sAWBColorCorrectionMatrix ccm;
    sBTRGGB16 awbGainsActual;
} sCameraAWBParam;

typedef struct sAWBMetaData {
    BOOL bFlashAWBDone;
    BOOL locked;
    unsigned short request;
    unsigned short status;
    sBTRGGB16 awbGains;
    sBTRGGB16 gains;
    sBTRGGB16 gainsNormalized;
    int eLensShadingMode;
    unsigned short maxWBGainDown;
    unsigned short maxColorCalGainDown;
    unsigned int manualAWBGainCommandTag;
    unsigned int manualCCTCommandTag;
    sSlaveCameraAWBParam slaveCameraAWBParam;
    float pre_rgLogRatio;
    float pre_bgLogRatio;
    float daylightWeight;
    int awbColorspace;
    BOOL useSpatialCCM;
    sBTRGGB16 awbGainsSkinOnly;
    BOOL isSlowSyncMainFlashforAWB;
    BOOL isLEDMainFlashforAWB;
    float flashProjMixWeighting;
    sBTRGGB16 awbGainsFlashProj;
    BOOL hostMetadataUpdate;
    sAWBColorCorrectionMatrix ccm;
    unsigned int CCTEstimate;
    unsigned short displayStrobeCCT;
    unsigned short rgGain;
    unsigned short bgGain;
    unsigned short stable;
    BOOL usePrevFrameWP;
    unsigned short useTileStats;
    unsigned short firstWBGain;
    unsigned int sceneLuxLevel;
    unsigned int sceneLuxLevelLow;
    unsigned int sceneLuxLevelHigh;
    unsigned int AWBLocked;
    unsigned int ambientLuxLevel;
    unsigned int ambientLuxLevelLow;
    unsigned int ambientLuxLevelHigh;
    unsigned int rawAverage;
    unsigned short isHistWPValid;
    unsigned short fdAWBOutput;
    unsigned int fdAWBChistMixFactor;
    unsigned int fdRect;
    unsigned short grayworldWBGain;
    unsigned short RGBEstimate;
    uint8_t auxMeta;
    unsigned int all;
    ? ;
    unsigned int initial_rgLogRatio;
    unsigned int initial_bgLogRatio;
    BOOL isDefaultSetting;
    BOOL bBypassConvergenceFr;
    unsigned int statFrameCount;
    BOOL isMatchedSlaveSetting;
    unsigned int frameCount;
    unsigned short lowCCTrgBias;
    unsigned short lowCCTbgBias;
    unsigned short hiCCTrgBias;
    unsigned short hiCCTbgBias;
    unsigned int syncTag;
    unsigned char bForStatsSlaveCam;
    BOOL isValidOneFrameAWBSetting;
    unsigned int singleAWBFrameCount;
    sCameraAWBParam oneFrameAWB;
    sAWBReflowParam awbReflow;
    sBTRect tileStatsRegionInRaw;
    BOOL isTileStatsRegionUpdated;
    NSUInteger semanticChannel;
    unsigned int semanticFrameCount;
    unsigned char clrBE2DHistProb;
    unsigned int clrBE2DHistFrameCount;
    unsigned char fdAWBVersion;
    float spatialCCMWeights;
} sAWBMetaData;

typedef struct sZoomMetaData {
    unsigned short fesOutputWidth;
    unsigned short fesOutputHeight;
    unsigned short ispInputWidth;
    unsigned short ispInputHeight;
    BOOL isFEStatOTF;
} sZoomMetaData;

typedef struct sMetaData {
    BOOL metaValid;
    unsigned int frameCount;
    NSUInteger timeStamp;
    unsigned int readOutTime;
    unsigned int sensorHeight;
    unsigned int sensorWidth;
    sBTRect sensorArrayOutputRect;
    sBTRect validDataRegion;
    unsigned short blackLevel;
    unsigned short rangeExpansionGain;
    unsigned int frameRate;
    float slotStep;
    unsigned char channel;
    unsigned char masterCam;
    unsigned char masterCamPreview;
    unsigned char previewMasterCh;
    NSUInteger pendingPreviewMasterCh;
    unsigned char binW;
    unsigned char binH;
    unsigned int maxLSgainUnadjusted;
    sFlashMetaData flash;
    sAEMetaData ae;
    sAWBMetaData awb;
    sZoomMetaData zoom;
    BOOL isReprocessing;
    BOOL isReplay;
    float tele2WideFOVDelta;
    float wide2TeleFOVDelta;
    float wide2SWideFOVDelta;
    float sWide2WideFOVDelta;
    float implicitFOVScaleSrcChToDestCh;
    sBTRect ClrBEFESCropSize;
    sBTRect sensorCrop;
    sBTRect DMACrop;
} sMetaData;

typedef struct sAWBColorCorrectionMatrix_local {
    BOOL field0;
    unk field1;
    unsigned char field2;
    long field3;
    unsigned short field4;
    uBT88 field5;
} sAWBColorCorrectionMatrix_local;

typedef struct sCIspFDRect {
    int field0;
    int field1;
    unsigned int field2;
    unsigned int field3;
} sCIspFDRect;

typedef struct sFaceInfo {
    sCIspFDRect field0;
    unsigned int field1;
} sFaceInfo;

typedef struct sRefDriverInputs {
    BOOL field0;
    unsigned short field1;
    unsigned int field2;
    BOOL field3;
    unk field4;
    unsigned char field5;
    long field6;
    unsigned short field7;
    uBT88 field8;
    BOOL field9;
    unk field10;
    unsigned char field11;
    long field12;
    unsigned short field13;
    uBT88 field14;
    float field15;
    float field16;
    unsigned short field17;
    unsigned short field18;
    unsigned short field19;
    unsigned short field20;
    unsigned int field21;
    float field22;
    unsigned short field23;
    BOOL field24;
    unsigned char field25;
    unsigned char field26;
    unsigned int field27;
    BOOL field28;
    unk field29;
    unsigned char field30;
    long field31;
    unsigned short field32;
    uBT88 field33;
    float field34;
    BOOL field35;
    unsigned char field36;
    BOOL field37;
    BOOL field38;
    float field39;
    float field40;
    float field41;
    float field42;
    unsigned short field43;
    float field44;
    sBTRect field45;
    sAWBColorCorrectionMatrix_local field46;
    BOOL field47;
    sBTRGGB16 field48;
    sBTRGGB16 field49;
    sBTRGGB16 field50;
    unsigned int field51;
    unsigned char field52;
    sFaceInfo field53;
} sRefDriverInputs;

typedef struct sCLRProcHITHStat {
    unsigned int thumbnailWindow;
    unsigned short thumbnailEnable;
    unsigned short thumbnailDownsampleX;
    unsigned short thumbnailDownsampleY;
    unsigned int thumbnailTotal;
    unsigned int localHistWindow;
    unsigned short localHistEnable;
    unsigned short localHistBinSize;
    unsigned short localHistBlockSizeX;
    unsigned short localHistBlockSizeY;
    unsigned short localHistStrideX;
    unsigned short localHistStrideY;
    unsigned short localHistNumHorBlocks;
    unsigned short localHistNumVerBlocks;
    unsigned char localHistCountBitShift;
    unsigned short globalHistEnable;
    unsigned int globalHistWindow;
    void thumbnailStat;
    unsigned int thumbnailOffset;
    unsigned int thumbnailStatSize;
    void localHistStat;
    unsigned int localHistOffset;
    unsigned int localHistStatSize;
    void globalHistStat;
    unsigned int globalHistOffset;
    unsigned int globalHistStatSize;
    unsigned int gridOriginX;
    unsigned int gridOriginY;
    unsigned int localHistogramOriginalTilePixelCount;
    unsigned int localHistLowThreshold;
    unsigned int localHistHighThreshold;
} sCLRProcHITHStat;

typedef struct sLtmComputeInput {
    float field0;
    float field1;
    float field2;
    float field3;
    float field4;
    float field5;
    float field6;
    float field7;
    float field8;
    float field9;
    float field10;
    float field11;
    float field12;
    float field13;
    float field14;
    float field15;
    float field16;
    float field17;
    float field18;
    float field19;
    float field20;
    unsigned short field21;
    float field22;
    float field23;
    float field24;
    float field25;
    float field26;
    float field27;
} sLtmComputeInput;

typedef struct sLtmComputeMeta {
    BOOL field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
    BOOL field4;
    int field5;
    BOOL field6;
    int field7;
    float field8;
} sLtmComputeMeta;

typedef struct sLtmComputeOutput {
    float field0;
    float field1;
    float field2;
    float field3;
    float field4;
    float field5;
    float field6;
    NSUInteger field7;
    float field8;
    BOOL field9;
    BOOL field10;
    BOOL field11;
    BOOL field12;
    BOOL field13;
    BOOL field14;
} sLtmComputeOutput;

typedef struct LTMCompute {
} // Error Processing Struct Fields

typedef struct LTMDriver {
    unk field0;
    sLtmComputeInput field1;
    sLtmComputeMeta field2;
    sLtmComputeOutput field3;
    int field4;
    LTMCompute field5;
    BOOL field6;
} LTMDriver;

typedef struct AWBFastLSCConfig {
    BOOL enabled;
    unsigned short gridWidth;
    unsigned short gridHeight;
    float gridMaxGainReciprocal;
    unk gridIntervalReciprocal;
    ? yOffset;
    unsigned short vec;
    unsigned short ;
} AWBFastLSCConfig;

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct CGRect {
    CGPoint origin;
    CGSize size;
} CGRect;

