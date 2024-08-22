// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXSIMULATEDMEDIAREQUEST_H
#define _PXSIMULATEDMEDIAREQUEST_H

@protocol _RequestOptions;

#import <Foundation/Foundation.h>


@interface _PXSimulatedMediaRequest : NSObject {
    id *_originalProgressHandler;
    id *_simulatedResultHandler;
}


@property (readonly, nonatomic) NSObject<_RequestOptions> *simulatedOptions; // ivar: _simulatedOptions


+(id)defaultSimulatedMediaRequestWithOriginalOptions:(id)arg0 simulatedResultHandler:(id)arg1 ;
-(id)init;
-(id)initWithOriginalOptions:(id)arg0 simulatedResultHandler:(id)arg1 ;
-(id)initWithWrappedMediaRequest:(id)arg0 ;
-(void)handleOriginalProgress:(CGFloat)arg0 error:(id)arg1 stop:(*BOOL)arg2 info:(id)arg3 ;
-(void)handleOriginalResult:(id)arg0 info:(id)arg1 ;


@end


#endif