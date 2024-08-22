// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLGELUACTIVATIONBRICK_H
#define MLGELUACTIVATIONBRICK_H

@class NSString;
@protocol EspressoBrick;

#import <Foundation/Foundation.h>


@interface MLGeluActivationBrick : NSObject <EspressoBrick>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger size; // ivar: _size
@property (readonly) Class superclass;


-(BOOL)hasGPUSupport;
-(id)initWithParameters:(id)arg0 ;
-(id)setupForInputShapes:(id)arg0 withParameters:(id)arg1 ;
-(void)computeOnCPUWithInputTensors:(id)arg0 outputTensors:(id)arg1 ;


@end


#endif