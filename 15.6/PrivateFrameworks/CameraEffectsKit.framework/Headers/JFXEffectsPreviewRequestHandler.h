// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef JFXEFFECTSPREVIEWREQUESTHANDLER_H
#define JFXEFFECTSPREVIEWREQUESTHANDLER_H


#import <Foundation/Foundation.h>

#import "JFXEffectsPreviewGeneratorJob.h"
#import "JFXEffectsPreviewGenerationRequest.h"

@interface JFXEffectsPreviewRequestHandler : NSObject

@property (retain, nonatomic) JFXEffectsPreviewGeneratorJob *job; // ivar: _job
@property (retain, nonatomic) JFXEffectsPreviewGenerationRequest *req; // ivar: _req


-(id)buildCallbackMap:(id)arg0 ;
-(id)buildPVRenderRequest;
-(id)initWithRequest:(id)arg0 ;


@end


#endif