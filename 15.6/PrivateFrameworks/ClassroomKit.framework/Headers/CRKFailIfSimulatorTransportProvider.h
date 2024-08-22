// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKFAILIFSIMULATORTRANSPORTPROVIDER_H
#define CRKFAILIFSIMULATORTRANSPORTPROVIDER_H

@class NSString, NSError;
@protocol CRKTransportProviding;

#import <Foundation/Foundation.h>


@interface CRKFailIfSimulatorTransportProvider : NSObject <CRKTransportProviding>



@property (readonly, nonatomic) NSObject<CRKTransportProviding> *baseProvider; // ivar: _baseProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *failureError; // ivar: _failureError
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithTransportProvider:(id)arg0 ;
-(id)initWithTransportProvider:(id)arg0 failureError:(id)arg1 ;
-(void)fetchTransportWithCompletion:(id)arg0 ;


@end


#endif