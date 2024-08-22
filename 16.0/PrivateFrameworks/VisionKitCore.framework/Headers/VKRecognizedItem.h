// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKRECOGNIZEDITEM_H
#define VKRECOGNIZEDITEM_H

@class VNObservation, NSUUID;

#import <Foundation/Foundation.h>

#import "VKFrameInfo.h"
#import "VKQuad.h"

@interface VKRecognizedItem : NSObject {
    VKFrameInfo *_frameInfo;
    VKQuad *_visionQuad;
    VKQuad *_layerQuad;
}


@property (readonly, nonatomic) VKFrameInfo *frameInfo;
@property (readonly, nonatomic) VKQuad *layerQuad;
@property (retain, nonatomic) VNObservation *observation; // ivar: _observation
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (readonly, nonatomic) VKQuad *visionQuad;


-(BOOL)shouldAssociateWithItem:(id)arg0 ;
-(id)initWithFrameInfo:(id)arg0 rectangleObservation:(id)arg1 ;
-(void)applyHomographyWarpTransform:(struct ? )arg0 ;
-(void)associateWithItem:(id)arg0 ;


@end


#endif