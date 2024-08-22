// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNVTSESSION_H
#define VNVTSESSION_H


#import <Foundation/Foundation.h>


@interface VNVTSession : NSObject {
    unsigned int _inputPixelFormat;
    unsigned int _outputPixelFormat;
    *void _session;
}




-(id)initWithSession:(*void)arg0 ;
-(void)dealloc;


@end


#endif