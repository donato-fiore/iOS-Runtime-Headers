// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SRSENSORWRITERWRAPPER_H
#define SRSENSORWRITERWRAPPER_H

@protocol TISensorWriterWrapper;

#import <Foundation/Foundation.h>


@interface SRSensorWriterWrapper : NSObject <TISensorWriterWrapper>





+(id)writerInstance;
-(BOOL)isReady;
-(void)write:(id)arg0 withTimeStamp:(id)arg1 ;
-(void)writeSessionSamples:(id)arg0 ;


@end


#endif