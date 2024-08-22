// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKELECTROCARDIOGRAMQUERY_H
#define HKELECTROCARDIOGRAMQUERY_H

@class NSString;
@protocol HKElectrocardiogramQueryClientInterface;


#import "HKQuery.h"
#import "HKElectrocardiogram.h"

@interface HKElectrocardiogramQuery : HKQuery <HKElectrocardiogramQueryClientInterface>

 {
    HKElectrocardiogram *_electrocardiogram;
    NSInteger _lead;
    id *_sampleHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)clientInterfaceProtocol;
-(id)initWithElectrocardiogram:(id)arg0 dataHandler:(id)arg1 ;
-(id)initWithElectrocardiogram:(id)arg0 lead:(NSInteger)arg1 dataHandler:(id)arg2 ;
-(id)initWithElectrocardiogram:(id)arg0 sampleHandler:(id)arg1 ;
-(void)_enumerateMeasurementsForElectrocardiogram:(id)arg0 handler:(id)arg1 ;
-(void)client_deliverData;
-(void)queue_deliverError:(id)arg0 ;
-(void)queue_queryDidDeactivate:(id)arg0 ;


@end


#endif