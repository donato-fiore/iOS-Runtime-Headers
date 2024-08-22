// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPREQUEST_H
#define VCPREQUEST_H


#import <Foundation/Foundation.h>


@interface VCPRequest : NSObject {
    int _width;
    int _height;
    int _maxNumHands;
    int _humanActionWindowSize;
    unsigned int _motionFlowComputationAccuracy;
}


@property (readonly, nonatomic) unsigned int revision; // ivar: _revision
@property (readonly, nonatomic) BOOL useCPUOnly; // ivar: _useCPUOnly


-(BOOL)cleanupWithOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)updateWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithOptions:(id)arg0 ;
-(struct CGSize )preferredInputSizeWithOptions:(id)arg0 error:(*id)arg1 ;
-(unsigned int)preferredPixelFormat;


@end


#endif