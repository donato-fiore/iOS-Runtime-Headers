// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MOTIONDECODERWRAPPER_H
#define MOTIONDECODERWRAPPER_H


#import <Foundation/Foundation.h>


@interface MotionDecoderWrapper : NSObject {
    *void decoder;
    NSUInteger _attributeCount;
    NSUInteger _componentsPerAttribute;
}




-(char *)getPointerToDataBuffer:(id)arg0 ;
-(id)initWithEncoderSeqParams:(id)arg0 ;
-(int)decodeFrameInternal:(id)arg0 decodedFrame:(*int)arg1 decodeError:(*NSUInteger)arg2 ;
-(int)getAttributeCount;
-(int)getComponentPerAttributeCount;
-(void)dealloc;


@end


#endif