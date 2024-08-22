// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OZFXPLUGPARAMETERHANDLER_H
#define OZFXPLUGPARAMETERHANDLER_H

@class OZViewControllerGroup, NSString;
@protocol FxParameterCreationAPI, FxParameterCreationAPI_v2, FxParameterCreationAPI_v3, FxParameterRetrievalAPI, FxParameterRetrievalAPI_v2, FxParameterRetrievalAPI_v3, FxParameterSettingAPI, FxParameterSettingAPI_v2, FxParameterSettingAPI_v3, FxOptionalParameterCreationAPI, FxOptionalParameterRetrievalAPI, FxOptionalParameterSettingAPI, PROAPIObject, FxPlugAPIDelegate, FxRenderNotificationAPI, FxUndoAPI, FxParameterRetrievalAPIPrivate, FxParameterSettingAPIPrivate, FxParameterAPIPrivate, FxMixingAPI, OZFxPlugInternalParamAPI;

#import <Foundation/Foundation.h>


@interface OZFxPlugParameterHandler : NSObject <FxParameterCreationAPI, FxParameterCreationAPI_v2, FxParameterCreationAPI_v3, FxParameterRetrievalAPI, FxParameterRetrievalAPI_v2, FxParameterRetrievalAPI_v3, FxParameterSettingAPI, FxParameterSettingAPI_v2, FxParameterSettingAPI_v3, FxOptionalParameterCreationAPI, FxOptionalParameterRetrievalAPI, FxOptionalParameterSettingAPI, PROAPIObject, FxPlugAPIDelegate, FxRenderNotificationAPI, FxUndoAPI, FxParameterRetrievalAPIPrivate, FxParameterSettingAPIPrivate, FxParameterAPIPrivate, FxMixingAPI, OZFxPlugInternalParamAPI>

 {
    OZViewControllerGroup *_viewControllerGroup;
    *void _folderStack;
    *void _channelMap;
    map<unsigned int, ParameterTransactionHelpers, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, ParameterTransactionHelpers>>> _paramCreationMap;
    *void _baseChannel;
    *void _context;
    *GLRenderer _renderer;
    BOOL _filmSpace;
    BOOL _startActionCalled;
    BOOL _showedParameterSettingWarning;
    int _numWriteActions;
    vector<OZChannelBlindData *, std::allocator<OZChannelBlindData *>> _customParameterList;
    BOOL _postAddParameters;
    BOOL _hasPointParam;
    BOOL _isNewGradientColorize;
    BOOL _appTerminating;
    atomic<bool> _pluginRemoved;
    OZFxPlugRenderContextManager _threadContextManager;
    *void _flagMap;
    stack<bool, std::deque<bool>> _suppressChannelChangesStack;
    BOOL _hasPathParameters;
    vector<unsigned int, std::allocator<unsigned int>> _fullWidthCustomParams;
    BOOL _sendingNotifications;
}


@property (getter=isColorCorrection) BOOL colorCorrection; // ivar: _colorCorrection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*void)baseChannel;
-(*void)channelMap;
-(*void)contextManager;
-(*void)customParameterList;
-(*void)getScene;
-(*void)getSceneNode;
-(*void)getSharedBase;
-(*void)rootChannel;
-(?)_getAngle:(?)arg0 fromParmatTime;
-(?)_getBoolValue:(?)arg0 fromParmatTime;
-(?)_getCustomParameterValue:(?)arg0 fromParmatTime;
-(?)_getFloatValue:(?)arg0 fromParmatTime;
-(?)_getGradientSamples:(?)arg0 numSamples:(?)arg1 depth:(?)arg2 fromParmatTime;
-(?)_getHistogramBlackIn:(?)arg0 BlackOut:(?)arg1 WhiteIn:(?)arg2 WhiteOut:(?)arg3 Gamma:(?)arg4 forChannel:(?)arg5 fromParmatTime;
-(?)_getIntValue:(?)arg0 fromParmatTime;
-(?)_getPathID:(?)arg0 fromParmatTime;
-(?)_getRedValue:(?)arg0 greenValue:(?)arg1 blueValue:(?)arg2 alphaValue:(?)arg3 fromParmatTime;
-(?)_getRedValue:(?)arg0 greenValue:(?)arg1 blueValue:(?)arg2 fromParmatTime;
-(?)_getXValue:(?)arg0 YValue:(?)arg1 fromParmatTime;
-(?)_setBoolValue:(?)arg0 toParmatTime;
-(?)_setCustomParameterValue:(?)arg0 toParmatTime;
-(?)_setFloatValue:(?)arg0 toParmatTime;
-(?)_setHistogramBlackIn:(?)arg0 BlackOut:(?)arg1 WhiteIn:(?)arg2 WhiteOut:(?)arg3 Gamma:(?)arg4 forChannel:(?)arg5 fromParmatTime;
-(?)_setIntValue:(?)arg0 toParmatTime;
-(?)_setPathID:(?)arg0 toParmatTime;
-(?)_setRedValue:(?)arg0 greenValue:(?)arg1 blueValue:(?)arg2 alphaValue:(?)arg3 toParmatTime;
-(?)_setRedValue:(?)arg0 greenValue:(?)arg1 blueValue:(?)arg2 toParmatTime;
-(?)_setXValue:(?)arg0 YValue:(?)arg1 toParmatTime;
-(?)absolutePointsChannel;
-(?)addExistingChannel;
-(?)addFlipCheckboxwithChannel;
-(?)addInputPointsCheckboxwithChannel;
-(?)addParamMappingForParameterChannel;
-(?)beginOperationWithChannel;
-(?)beginTimingOperationforChannel;
-(?)channelForParameterID;
-(?)endOperationWithChannel;
-(?)figDurationToFxDurationwithConversionData;
-(?)figTimeToFxTimewithConversionData;
-(?)finalizeImage:(?)arg0 withSceneNode:(?)arg1 pixelBounds:(?)arg2 agent:(?)arg3 andRenderParamsatTime;
-(?)flipChannel;
-(?)forceRenderAtTime;
-(?)fxParameterFlagsForChannel;
-(?)fxTimeToFigTimewithConversionData;
-(?)getGradientStartEnd:(?)arg0 startY:(?)arg1 endX:(?)arg2 endY:(?)arg3 type:(?)arg4 fromParmatTime;
-(?)getHeliumImage:(?)arg0 layerOffsetX:(?)arg1 layerOffsetY:(?)arg2 requestInfo:(?)arg3 fromParmatTime;
-(?)getLevelsBlack:(?)arg0 White:(?)arg1 Gamma:(?)arg2 fromParmatTime;
-(?)inputPointsChannel;
-(?)mixAmountAtTime;
-(?)mixChannel;
-(?)parameterAtIndex;
-(?)postChannelChangeflagsOnly;
-(?)preChannelChangeflagsOnly;
-(?)preGetCMTime:(?)arg0 forChannelatFxTime;
-(?)publishOSCChannel;
-(?)restoreParameterFlagsForChannel;
-(?)retrieveImage:(?)arg0 layerOffsetX:(?)arg1 layerOffsetY:(?)arg2 requestInfo:(?)arg3 fromParm:(?)arg4 atTime:(?)arg5 retriever:(?)arg6 ARGBimageType;
-(?)setGradientStartEnd:(?)arg0 startY:(?)arg1 endX:(?)arg2 endY:(?)arg3 toParmatTime;
-(?)setLevelsBlack:(?)arg0 White:(?)arg1 Gamma:(?)arg2 forParmatTime;
-(?)setParameterFlagsforChannel;
-(BOOL)_floatParameter:(int)arg0 hasValidMin:(CGFloat)arg1 max:(CGFloat)arg2 sliderMin:(CGFloat)arg3 sliderMax:(CGFloat)arg4 defaultValue:(CGFloat)arg5 paramFlags:(unsigned int)arg6 ;
-(BOOL)_intParameter:(int)arg0 hasValidMin:(int)arg1 max:(int)arg2 sliderMin:(int)arg3 sliderMax:(int)arg4 defaultValue:(int)arg5 paramFlags:(unsigned int)arg6 ;
-(BOOL)_setupRenderer;
-(BOOL)add2DScaleWithName:(id)arg0 parmId:(unsigned int)arg1 defaultX:(CGFloat)arg2 defaultY:(CGFloat)arg3 parmFlags:(unsigned int)arg4 ;
-(BOOL)add2DVectorWithName:(id)arg0 parmId:(unsigned int)arg1 defaultX:(CGFloat)arg2 defaultY:(CGFloat)arg3 parmFlags:(unsigned int)arg4 ;
-(BOOL)addAngleSliderWithName:(id)arg0 parmId:(unsigned int)arg1 defaultValue:(CGFloat)arg2 parameterMin:(CGFloat)arg3 parameterMax:(CGFloat)arg4 parmFlags:(unsigned int)arg5 ;
-(BOOL)addColorParameterWithName:(id)arg0 parmId:(unsigned int)arg1 defaultRed:(CGFloat)arg2 defaultGreen:(CGFloat)arg3 defaultBlue:(CGFloat)arg4 defaultAlpha:(CGFloat)arg5 parmFlags:(unsigned int)arg6 ;
-(BOOL)addColorParameterWithName:(id)arg0 parmId:(unsigned int)arg1 defaultRed:(CGFloat)arg2 defaultGreen:(CGFloat)arg3 defaultBlue:(CGFloat)arg4 parmFlags:(unsigned int)arg5 ;
-(BOOL)addCustomParameterWithName:(id)arg0 parmId:(unsigned int)arg1 defaultValue:(id)arg2 parmFlags:(unsigned int)arg3 ;
-(BOOL)addFlags:(unsigned int)arg0 toParm:(unsigned int)arg1 ;
-(BOOL)addFloatSliderWithName:(id)arg0 parmId:(unsigned int)arg1 defaultValue:(CGFloat)arg2 parameterMin:(CGFloat)arg3 parameterMax:(CGFloat)arg4 sliderMin:(CGFloat)arg5 sliderMax:(CGFloat)arg6 delta:(CGFloat)arg7 parmFlags:(unsigned int)arg8 ;
-(BOOL)addGradientPositionedWithName:(id)arg0 parmId:(unsigned int)arg1 parmFlags:(unsigned int)arg2 ;
-(BOOL)addGradientWithName:(id)arg0 parmId:(unsigned int)arg1 parmFlags:(unsigned int)arg2 ;
-(BOOL)addHistogramWithName:(id)arg0 parmId:(unsigned int)arg1 parmFlags:(unsigned int)arg2 ;
-(BOOL)addImageReferenceWithName:(id)arg0 parmId:(unsigned int)arg1 parmFlags:(unsigned int)arg2 ;
-(BOOL)addIntSliderWithName:(id)arg0 parmId:(unsigned int)arg1 defaultValue:(int)arg2 parameterMin:(int)arg3 parameterMax:(int)arg4 sliderMin:(int)arg5 sliderMax:(int)arg6 delta:(int)arg7 parmFlags:(unsigned int)arg8 ;
-(BOOL)addLevelsWithName:(id)arg0 parmId:(unsigned int)arg1 hideGamma:(BOOL)arg2 parmFlags:(unsigned int)arg3 ;
-(BOOL)addPathPickerWithName:(id)arg0 parmId:(unsigned int)arg1 parmFlags:(unsigned int)arg2 ;
-(BOOL)addPercentSliderWithName:(id)arg0 parmId:(unsigned int)arg1 defaultValue:(CGFloat)arg2 parameterMin:(CGFloat)arg3 parameterMax:(CGFloat)arg4 sliderMin:(CGFloat)arg5 sliderMax:(CGFloat)arg6 delta:(CGFloat)arg7 parmFlags:(unsigned int)arg8 ;
-(BOOL)addPointParameterWithName:(id)arg0 parmId:(unsigned int)arg1 defaultX:(CGFloat)arg2 defaultY:(CGFloat)arg3 parmFlags:(unsigned int)arg4 ;
-(BOOL)addPopupMenuWithName:(id)arg0 parmId:(unsigned int)arg1 defaultValue:(unsigned int)arg2 menuEntries:(id)arg3 parmFlags:(unsigned int)arg4 ;
-(BOOL)addPopupMenuWithNameAndTags:(id)arg0 parmId:(unsigned int)arg1 defaultValue:(unsigned int)arg2 menuEntries:(id)arg3 tags:(*int)arg4 tagCount:(int)arg5 parmFlags:(unsigned int)arg6 ;
-(BOOL)addStringParameterWithName:(id)arg0 parmId:(unsigned int)arg1 defaultValue:(id)arg2 parmFlags:(unsigned int)arg3 ;
-(BOOL)addToggleButtonWithName:(id)arg0 parmId:(unsigned int)arg1 defaultValue:(BOOL)arg2 parmFlags:(unsigned int)arg3 ;
-(BOOL)conformsToProtocol:(id)arg0 version:(unsigned int)arg1 ;
-(BOOL)containsParameterWithID:(unsigned int)arg0 ;
-(BOOL)doneAddingParams;
-(BOOL)endParameterSubGroup;
-(BOOL)endUndoGroup;
-(BOOL)getBitmap:(*id)arg0 layerOffsetX:(*CGFloat)arg1 layerOffsetY:(*CGFloat)arg2 requestInfo:(struct ? )arg3 fromParm:(unsigned int)arg4 atTime:(CGFloat)arg5 ;
-(BOOL)getBoolValue:(*BOOL)arg0 fromParm:(unsigned int)arg1 atTime:(CGFloat)arg2 ;
-(BOOL)getCustomParameterValue:(*id)arg0 fromParm:(unsigned int)arg1 ;
-(BOOL)getCustomParameterValue:(*id)arg0 fromParm:(unsigned int)arg1 atTime:(CGFloat)arg2 ;
-(BOOL)getFloatValue:(*CGFloat)arg0 fromParm:(unsigned int)arg1 atTime:(CGFloat)arg2 ;
-(BOOL)getGradientSamples:(*void)arg0 numSamples:(NSUInteger)arg1 depth:(NSUInteger)arg2 fromParm:(unsigned int)arg3 atTime:(CGFloat)arg4 ;
-(BOOL)getHistogramBlackIn:(*CGFloat)arg0 BlackOut:(*CGFloat)arg1 WhiteIn:(*CGFloat)arg2 WhiteOut:(*CGFloat)arg3 Gamma:(*CGFloat)arg4 forChannel:(NSUInteger)arg5 fromParm:(unsigned int)arg6 atTime:(CGFloat)arg7 ;
-(BOOL)getIntValue:(*int)arg0 fromParm:(unsigned int)arg1 atTime:(CGFloat)arg2 ;
-(BOOL)getParameterFlags:(*unsigned int)arg0 fromParm:(unsigned int)arg1 ;
-(BOOL)getPathID:(**void)arg0 fromParm:(unsigned int)arg1 atTime:(CGFloat)arg2 ;
-(BOOL)getRedValue:(*CGFloat)arg0 GreenValue:(*CGFloat)arg1 BlueValue:(*CGFloat)arg2 AlphaValue:(*CGFloat)arg3 fromParm:(unsigned int)arg4 atTime:(CGFloat)arg5 ;
-(BOOL)getRedValue:(*CGFloat)arg0 GreenValue:(*CGFloat)arg1 BlueValue:(*CGFloat)arg2 fromParm:(unsigned int)arg3 atTime:(CGFloat)arg4 ;
-(BOOL)getRedValue:(*CGFloat)arg0 greenValue:(*CGFloat)arg1 blueValue:(*CGFloat)arg2 alphaValue:(*CGFloat)arg3 fromParm:(unsigned int)arg4 atTime:(CGFloat)arg5 ;
-(BOOL)getRedValue:(*CGFloat)arg0 greenValue:(*CGFloat)arg1 blueValue:(*CGFloat)arg2 fromParm:(unsigned int)arg3 atTime:(CGFloat)arg4 ;
-(BOOL)getStringParameterValue:(*id)arg0 fromParm:(unsigned int)arg1 ;
-(BOOL)getTexture:(*id)arg0 layerOffsetX:(*CGFloat)arg1 layerOffsetY:(*CGFloat)arg2 requestInfo:(struct ? )arg3 fromParm:(unsigned int)arg4 atTime:(CGFloat)arg5 ;
-(BOOL)getXValue:(*CGFloat)arg0 YValue:(*CGFloat)arg1 fromParm:(unsigned int)arg2 atTime:(CGFloat)arg3 ;
-(BOOL)hasPathParameters;
-(BOOL)hasPointParameters;
-(BOOL)hasValidParameterID:(int)arg0 checkMix:(BOOL)arg1 checkSpecialCheckboxIDs:(BOOL)arg2 ;
-(BOOL)imageSize:(struct CGSize *)arg0 fromParameter:(unsigned int)arg1 atTime:(struct ? )arg2 ;
-(BOOL)isImageWellMediaFlexoMediaForSceneNode:(*void)arg0 ;
-(BOOL)isPerformingBulkChange;
-(BOOL)isRendering;
-(BOOL)parameter:(int)arg0 hasValidFlags:(unsigned int)arg1 ;
-(BOOL)removeFlags:(unsigned int)arg0 fromParm:(unsigned int)arg1 ;
-(BOOL)safeToSetParameters;
-(BOOL)setBoolValue:(BOOL)arg0 toParm:(unsigned int)arg1 atTime:(CGFloat)arg2 ;
-(BOOL)setCustomParameterDefaultValue:(id)arg0 parmId:(unsigned int)arg1 ;
-(BOOL)setCustomParameterValue:(id)arg0 toParm:(unsigned int)arg1 ;
-(BOOL)setCustomParameterValue:(id)arg0 toParm:(unsigned int)arg1 atTime:(CGFloat)arg2 ;
-(BOOL)setFloatValue:(CGFloat)arg0 toParm:(unsigned int)arg1 atTime:(CGFloat)arg2 ;
-(BOOL)setGradientFlags:(BOOL)arg0 toParam:(unsigned int)arg1 ;
-(BOOL)setGradientHiddenWithOSC:(BOOL)arg0 toParam:(unsigned int)arg1 ;
-(BOOL)setHistogramBlackIn:(CGFloat)arg0 BlackOut:(CGFloat)arg1 WhiteIn:(CGFloat)arg2 WhiteOut:(CGFloat)arg3 Gamma:(CGFloat)arg4 forChannel:(NSUInteger)arg5 fromParm:(unsigned int)arg6 atTime:(CGFloat)arg7 ;
-(BOOL)setIntValue:(int)arg0 toParm:(unsigned int)arg1 atTime:(CGFloat)arg2 ;
-(BOOL)setParameterFlags:(unsigned int)arg0 toParm:(unsigned int)arg1 ;
-(BOOL)setPathID:(*void)arg0 toParm:(unsigned int)arg1 atTime:(CGFloat)arg2 ;
-(BOOL)setRedValue:(CGFloat)arg0 GreenValue:(CGFloat)arg1 BlueValue:(CGFloat)arg2 AlphaValue:(CGFloat)arg3 toParm:(unsigned int)arg4 atTime:(CGFloat)arg5 ;
-(BOOL)setRedValue:(CGFloat)arg0 GreenValue:(CGFloat)arg1 BlueValue:(CGFloat)arg2 toParm:(unsigned int)arg3 atTime:(CGFloat)arg4 ;
-(BOOL)setRedValue:(CGFloat)arg0 greenValue:(CGFloat)arg1 blueValue:(CGFloat)arg2 alphaValue:(CGFloat)arg3 toParm:(unsigned int)arg4 atTime:(CGFloat)arg5 ;
-(BOOL)setRedValue:(CGFloat)arg0 greenValue:(CGFloat)arg1 blueValue:(CGFloat)arg2 toParm:(unsigned int)arg3 atTime:(CGFloat)arg4 ;
-(BOOL)setStringParameterValue:(id)arg0 toParm:(unsigned int)arg1 ;
-(BOOL)setXValue:(CGFloat)arg0 YValue:(CGFloat)arg1 toParm:(unsigned int)arg2 atTime:(CGFloat)arg3 ;
-(BOOL)shouldFlipPoints;
-(BOOL)startParameterSubGroup:(id)arg0 parmId:(unsigned int)arg1 parmFlags:(unsigned int)arg2 ;
-(BOOL)startUndoGroup:(id)arg0 ;
-(BOOL)suppressUpdates;
-(BOOL)useAbsolutePoints;
-(BOOL)useInputPoints;
-(BOOL)usesRationalTime;
-(BOOL)wantsHDRColors;
-(CGFloat)convertFromFigTime:(struct ? *)arg0 ;
-(CGFloat)getPixelAspectRatioFromSceneNode:(*void)arg0 ;
-(id)decodeLegacyData:(id)arg0 forParameterID:(unsigned int)arg1 ;
-(id)displayName;
-(id)getAllParameterValuesAtTime:(struct ? )arg0 transactionID:(NSUInteger)arg1 pluginSessionID:(NSUInteger)arg2 ;
-(id)initWithBaseChannel:(*void)arg0 ;
-(id)initWithBaseChannel:(*void)arg0 andCopy:(id)arg1 ;
-(id)initWithBaseChannel:(*void)arg0 andCopy:(id)arg1 Skip:(int)arg2 ;
-(id)motionEffect;
-(id)transactionForParameterID:(unsigned int)arg0 atTime:(struct ? )arg1 transactionID:(NSUInteger)arg2 pluginSessionID:(NSUInteger)arg3 ;
-(int)numWriteActions;
-(struct ? )convertToFigTime:(CGFloat)arg0 ;
-(struct CGColorSpace *)getPluginColorSpace;
-(struct GLRenderer *)renderer;
-(struct OZChannelBase *)channelWithID:(int)arg0 ;
-(struct OZRenderState )getTempContextRenderState;
-(struct PCPtr<LiImageSource> )makeSourceFromSceneNode:(*void)arg0 withRenderParams:(*void)arg1 ;
-(struct PCRect<double> )getBoundsFromSceneNode:(*void)arg0 withRenderParams:(*void)arg1 ;
-(struct vector<unsigned int, std::allocator<unsigned int>> )imageParamIDs;
-(unsigned int)paramIDForImageWellWithSceneNode:(unsigned int)arg0 ;
-(unsigned int)parameterCount;
-(void)_updateUI:(id)arg0 ;
-(void)_updateUIForParm:(int)arg0 ;
-(void)abortAndWait;
-(void)actionEnded;
-(void)actionStarted;
-(void)addAbsolutePointCheckbox:(unsigned int)arg0 ;
-(void)addExistingGroup:(*void)arg0 ;
-(void)addFlipCheckbox:(unsigned int)arg0 ;
-(void)addInputPointsCheckbox:(unsigned int)arg0 ;
-(void)addMixSlider:(unsigned int)arg0 ;
-(void)addMixSlider:(unsigned int)arg0 withChannel:(struct OZChannelPercent *)arg1 ;
-(void)addPublishOSCCheckbox:(unsigned int)arg0 ;
-(void)appWillTerminate:(id)arg0 ;
-(void)callParameterChanged:(id)arg0 forParameterID:(unsigned int)arg1 modifiedParameterIDs:(*void)arg2 changedParameters:(id)arg3 sharedBase:(*void)arg4 supportsParametersChanged:(BOOL)arg5 ;
-(void)clearImageList;
-(void)copyFolderRecursiveFrom:(*void)arg0 To:(*void)arg1 ;
-(void)copyFolderRecursiveFrom:(*void)arg0 To:(*void)arg1 Skip:(int)arg2 ;
-(void)copyValueGettersFrom:(id)arg0 ;
-(void)dealloc;
-(void)dumpAllChannels;
-(void)dumpChannelFolder:(*void)arg0 depth:(int)arg1 ;
-(void)endTimingOperation:(*void)arg0 ;
-(void)getColorInFxPlugColorSpace:(*void)arg0 red:(*float)arg1 green:(*float)arg2 blue:(*float)arg3 alpha:(*float)arg4 ;
-(void)getFieldMode:(*int)arg0 fromFootage:(*void)arg1 ;
-(void)getLayerOffsetX:(*CGFloat)arg0 andOffsetY:(*CGFloat)arg1 fromSceneNode:(*void)arg2 withRenderParams:(*void)arg3 ;
-(void)getPointChannel:(struct OZChannel **)arg0 nearestPoint:(struct PCVector2<double> )arg1 atTime:(struct ? )arg2 ;
-(void)markForDynamicParameterUsage;
-(void)movePublishOSCChannelToEnd;
-(void)onVTBUserInteractionEventNotification:(id)arg0 ;
-(void)postGetParameter:(*void)arg0 ;
-(void)reAddHiddenParameters;
-(void)removeHiddenParameters;
-(void)removeParameter:(unsigned int)arg0 ;
-(void)saveParameterFlags;
-(void)sendNotifications:(id)arg0 ;
-(void)sendUpdateEvent;
-(void)setAgent:(*void)arg0 toScaleTo:(*void)arg1 ;
-(void)setColorFromFxPlugColorSpace:(*void)arg0 red:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 ;
-(void)setDoneAddingParams:(BOOL)arg0 ;
-(void)setHandlingOSCEvents:(BOOL)arg0 ;
-(void)setIsNewGradientColorize:(BOOL)arg0 ;
-(void)setIsRendering:(BOOL)arg0 ;
-(void)setObjectID;
-(void)setPluginRemoved:(BOOL)arg0 ;
-(void)setRenderParams:(*void)arg0 withLithiumInput:(*void)arg1 withLithiumAgent:(*void)arg2 ;
-(void)setViewControllerGroup:(id)arg0 ;
-(void)setupImageParamIDs:(*void)arg0 ;
-(void)softDisableAllChannels;
-(void)stopObservingViewControllerGroup;
-(void)updateChannelMap;
-(void)updateInspector;
-(void)updateInspectorAndDeleteChannel:(id)arg0 ;
-(void)updateKeyframeEditor;


@end


#endif