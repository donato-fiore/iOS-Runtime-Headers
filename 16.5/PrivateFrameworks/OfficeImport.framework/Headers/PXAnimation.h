// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXANIMATION_H
#define PXANIMATION_H


#import <Foundation/Foundation.h>


@interface PXAnimation : NSObject



+(?)newShapeTargetdrawingState;
+(?)newTargetdrawingState;
+(?)readAnimAudioElement:(?)arg0 timeNodedrawingState;
+(?)readAnimCmdElement:(?)arg0 timeNodedrawingState;
+(?)readAnimEffectElement:(?)arg0 timeNodedrawingState;
+(?)readAnimElement:(?)arg0 timeNodedrawingState;
+(?)readAnimMotionElement:(?)arg0 timeNodedrawingState;
+(?)readAnimParallelElement:(?)arg0 timeNodedrawingState;
+(?)readAnimRotationElement:(?)arg0 timeNodedrawingState;
+(?)readAnimScaleElement:(?)arg0 timeNodedrawingState;
+(?)readAnimSequentialElement:(?)arg0 timeNodedrawingState;
+(?)readAnimSetElement:(?)arg0 timeNodedrawingState;
+(?)readAnimVariantdrawingState;
+(?)readAnimVideoElement:(?)arg0 timeNodedrawingState;
+(?)readAnimationFromTimingXmlNode:(?)arg0 tgtAnimationdrawingState;
+(?)readChildTimeNodeList:(?)arg0 commonTimeNodeDatadrawingState;
+(?)readCommonBehaviorData:(?)arg0 tgtCommonBehaviorDatadrawingState;
+(?)readCommonMediaNodeData:(?)arg0 commonMediaDatadrawingState;
+(?)readCommonTimeNodeData:(?)arg0 commonTimeNodeDatadrawingState;
+(?)readCondition:(?)arg0 timeConditiondrawingState;
+(?)readConditionList:(?)arg0 arrayOfConditionsdrawingState;
+(?)readGraphicBuilddrawingState;
+(?)readIterate:(?)arg0 commonTimeNodeDatadrawingState;
+(?)readOleChartBuild;
+(?)readOptionalStringAttribute:(?)arg0 fromNode:(?)arg1 attributeMaptoPDDomValue;
+(?)readParagraphBuild;
+(?)readPointFromNodetgtPoint;
+(?)readStConditionList:(?)arg0 commonTimeNodeDatadrawingState;
+(id)chartBuildStepMap;
+(id)chartTypeMap;
+(id)presetClassMap;
+(id)restartTypeMap;
+(id)sequentialNextActionMap;
+(id)sequentialPreviousActionMap;
+(id)timeNodeFillTypeMap;
+(id)timeNodeTypeMap;
+(id)triggerEventMap;
+(int)readChartBuildType:(id)arg0 ;
+(void)readChartBuildStep:(id)arg0 chartTarget:(id)arg1 ;
+(void)readChartType:(id)arg0 oleChartTarget:(id)arg1 ;
+(void)readPresetClass:(id)arg0 commonTimeNodeData:(id)arg1 ;
+(void)readRestartType:(id)arg0 commonTimeNodeData:(id)arg1 ;
+(void)readTimeNodeType:(id)arg0 commonTimeNodeData:(id)arg1 ;
+(void)readTriggerEvent:(id)arg0 timeCondition:(id)arg1 ;
+(void)writeAnimationFromSlideBase:(id)arg0 to:(id)arg1 state:(id)arg2 ;


@end


#endif