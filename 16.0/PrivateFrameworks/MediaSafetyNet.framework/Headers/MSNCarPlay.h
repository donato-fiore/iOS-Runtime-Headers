// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSNCARPLAY_H
#define MSNCARPLAY_H

@class MXSystemController;

#import <Foundation/Foundation.h>


@interface MSNCarPlay : NSObject {
    BOOL _carplayConnected;
    MXSystemController *_systemController;
}




-(BOOL)carplayConnected;
-(id)init;


@end


#endif