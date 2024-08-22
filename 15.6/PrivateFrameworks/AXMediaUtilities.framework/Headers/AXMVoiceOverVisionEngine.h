// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXMVOICEOVERVISIONENGINE_H
#define AXMVOICEOVERVISIONENGINE_H



#import "AXMAXElementVisionEngine.h"
#import "AXMCaptionDetectorNode.h"
#import "AXMFaceDetectorNode.h"
#import "AXMNSFWDetectorNode.h"
#import "AXMObjectDetectorNode.h"
#import "AXMProminentObjectsDetectorNode.h"
#import "AXMSceneDetectorNode.h"
#import "AXMSignificantEventDetectorNode.h"
#import "AXMTraitDetectorNode.h"

@interface AXMVoiceOverVisionEngine : AXMAXElementVisionEngine

@property (weak, nonatomic) AXMCaptionDetectorNode *captionDetector; // ivar: _captionDetector
@property (weak, nonatomic) AXMFaceDetectorNode *faceDetector; // ivar: _faceDetector
@property (nonatomic) NSUInteger genderStrategy;
@property (weak, nonatomic) AXMNSFWDetectorNode *nsfwDetector; // ivar: _nsfwDetector
@property (weak, nonatomic) AXMObjectDetectorNode *objectDetector; // ivar: _objectDetector
@property (weak, nonatomic) AXMProminentObjectsDetectorNode *prominentObjectsDetector; // ivar: _prominentObjectsDetector
@property (weak, nonatomic) AXMSceneDetectorNode *sceneDetector; // ivar: _sceneDetector
@property (weak, nonatomic) AXMSignificantEventDetectorNode *significantEventDetector; // ivar: _significantEventDetector
@property (weak, nonatomic) AXMTraitDetectorNode *traitDetector; // ivar: _traitDetector


// -(id)configuredOptionsDisableAllDetectors:(id)arg0 elementOptions:(unk)arg1 textRecognitionLevel:(unsigned int)arg2 textDetectionLocales:(id)arg3 preferringFullCaptions:(unk)arg4  ;
-(id)init;
-(id)initWithIdentifier:(id)arg0 ;


@end


#endif