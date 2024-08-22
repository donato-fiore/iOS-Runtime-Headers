// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPDXPCDOMAINSERVICERLIFETIMEEXTENDER_H
#define FPDXPCDOMAINSERVICERLIFETIMEEXTENDER_H

@class NSString;
@protocol FPDLifetimeExtender, FPDLifetimeServicing;

#import <Foundation/Foundation.h>


@interface FPDXPCDomainServicerLifetimeExtender : NSObject <FPDLifetimeExtender, FPDLifetimeServicing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSString *prettyDescription; // ivar: _prettyDescription
@property int requestEffectivePID; // ivar: _requestEffectivePID
@property (copy, nonatomic) id *stopBlock; // ivar: _stopBlock
@property (readonly) Class superclass;


-(void)stopExtendingLifetime;


@end


#endif