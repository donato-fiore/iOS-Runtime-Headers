// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTFACEATTRIBUTESNETWORK_H
#define PTFACEATTRIBUTESNETWORK_H

@class VNSequenceRequestHandler, VNSession;

#import <Foundation/Foundation.h>


@interface PTFaceAttributesNetwork : NSObject {
    VNSequenceRequestHandler *_handler;
    VNSession *_session;
}




-(id)createRequest;
-(id)faceLandmarksInPixelBuffer:(struct __CVBuffer *)arg0 faceRects:(id)arg1 orientation:(unsigned int)arg2 ;
-(id)init;


@end


#endif