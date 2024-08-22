// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCONCRETESTATISTICSSAMPLEPROVIDER_H
#define WFCONCRETESTATISTICSSAMPLEPROVIDER_H

@class NSProxy, NSArray, NSString;
@protocol WFStatisticsSampleProvider;



@interface WFConcreteStatisticsSampleProvider : NSProxy <WFStatisticsSampleProvider>



@property (readonly, nonatomic) BOOL canProvideDataSamples;
@property (readonly, nonatomic) NSArray *dataSamples;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<WFStatisticsSampleProvider> *sampleProvider; // ivar: _sampleProvider
@property (readonly) Class superclass;


-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithSampleProvider:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif