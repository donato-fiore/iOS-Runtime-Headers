// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FXSAMPLE_H
#define FXSAMPLE_H


#import <Foundation/Foundation.h>


@interface FxSample : NSObject {
    *FxSamplePriv _priv;
}




+(id)_requiredSamplesForSamples:(id)arg0 ;
-(BOOL)isPredetermined;
-(BOOL)supportsContextType:(int)arg0 ;
-(CGFloat)time;
-(NSUInteger)fieldOrder;
-(id)context;
-(id)domainOfDefinition;
-(id)evaluateWithOptions:(id)arg0 ;
-(id)init;
-(id)regionOfInterest;
-(id)requiredSamples;
-(id)stream;
-(void)dealloc;
-(void)setContext:(id)arg0 ;
-(void)setRegionOfInterest:(id)arg0 ;
-(void)setStream:(id)arg0 ;
-(void)setTime:(CGFloat)arg0 ;


@end


#endif