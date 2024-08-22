// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JFXIMAGESCALER_H
#define JFXIMAGESCALER_H


#import <Foundation/Foundation.h>


@interface JFXImageScaler : NSObject {
    BOOL _useCPU;
    *OpaqueVTPixelTransferSession _vtPixelTransferSession;
}




-(id)initForCPU:(BOOL)arg0 ;
-(void)dealloc;
-(void)scaleImage:(struct __CVBuffer *)arg0 destinationImage:(struct __CVBuffer *)arg1 ;


@end


#endif