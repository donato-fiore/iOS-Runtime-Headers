// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LAUIPEARLGLYPHVIEWSTATICRESOURCES_H
#define LAUIPEARLGLYPHVIEWSTATICRESOURCES_H

@protocol MTLDevice;

#import <Foundation/Foundation.h>


@interface LAUIPearlGlyphViewStaticResources : NSObject {
    id<MTLDevice> *_device;
    renderer_shared_state _state;
}




-(*void)state;
-(id)device;
-(id)init;
-(id)initWithDevice:(id)arg0 state:(*void)arg1 ;


@end


#endif