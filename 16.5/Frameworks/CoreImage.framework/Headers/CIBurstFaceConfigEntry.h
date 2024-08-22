// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIBURSTFACECONFIGENTRY_H
#define CIBURSTFACECONFIGENTRY_H


#import <Foundation/Foundation.h>


@interface CIBurstFaceConfigEntry : NSObject

@property int faceId; // ivar: faceId
@property CGRect faceRect; // ivar: faceRect
@property int framesSinceLast; // ivar: framesSinceLast


-(id)initWithRect:(struct CGRect )arg0 withFaceId:(int)arg1 ;


@end


#endif