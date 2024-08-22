// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef JASPERDEPTHFRAMEPROCESSOR_H
#define JASPERDEPTHFRAMEPROCESSOR_H

@class JDDepthProcessor;

#import <Foundation/Foundation.h>


@interface JasperDepthFrameProcessor : NSObject

@property (retain, nonatomic) JDDepthProcessor *jdProc; // ivar: _jdProc


-(id)initWithCalibrationDict:(id)arg0 ;
-(id)process:(struct __CVBuffer *)arg0 ;


@end


#endif