// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNVTSESSIONMANAGER_H
#define VNVTSESSIONMANAGER_H


#import <Foundation/Foundation.h>


@interface VNVTSessionManager : NSObject {
    unique_ptr<SessionsHandler<VNVTPixelTransferSession>, std::default_delete<SessionsHandler<VNVTPixelTransferSession>>> _pixelTransferSessionsHandler;
    unique_ptr<SessionsHandler<VNVTImageRotationSession>, std::default_delete<SessionsHandler<VNVTImageRotationSession>>> _imageRotationSessionsHandler;
    NSUInteger _maxSessionsCount;
}






@end


#endif