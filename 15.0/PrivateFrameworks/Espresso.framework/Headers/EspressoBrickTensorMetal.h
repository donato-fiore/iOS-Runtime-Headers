// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ESPRESSOBRICKTENSORMETAL_H
#define ESPRESSOBRICKTENSORMETAL_H

@protocol MTLTexture;


#import "EspressoBrickTensor.h"

@interface EspressoBrickTensorMetal : EspressoBrickTensor

@property (retain) NSObject<MTLTexture> *texture; // ivar: _texture




@end


#endif