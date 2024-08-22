// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKPRIMITIVEBACKEDCERTIFICATECONDUIT_H
#define CRKPRIMITIVEBACKEDCERTIFICATECONDUIT_H

@class CATOperationQueue;
@protocol CRKCertificateConduit, CRKIDSPrimitives, CRKIDSAddressTranslator, CRKTimerPrimitives;

#import <Foundation/Foundation.h>


@interface CRKPrimitiveBackedCertificateConduit : NSObject <CRKCertificateConduit>



@property (readonly, nonatomic) NSObject<CRKIDSPrimitives> *IDSPrimitives; // ivar: _IDSPrimitives
@property (readonly, nonatomic) NSObject<CRKIDSAddressTranslator> *addressTranslator; // ivar: _addressTranslator
@property (readonly, nonatomic) CATOperationQueue *operationQueue; // ivar: _operationQueue
@property (readonly, nonatomic) NSObject<CRKTimerPrimitives> *timerPrimitives; // ivar: _timerPrimitives


+(id)fetchOperationTimerIdentifier;
-(id)initWithIDSPrimitives:(id)arg0 addressTranslator:(id)arg1 operationQueue:(id)arg2 ;
-(id)initWithIDSPrimitives:(id)arg0 addressTranslator:(id)arg1 timerPrimitives:(id)arg2 operationQueue:(id)arg3 ;
-(id)operationToFetchCertificateForDestinationAppleID:(id)arg0 sourceAppleID:(id)arg1 destinationDeviceIdentifier:(id)arg2 controlGroupIdentifier:(id)arg3 sourceRole:(NSInteger)arg4 destinationRole:(NSInteger)arg5 requesterCertificate:(id)arg6 timeout:(CGFloat)arg7 ;


@end


#endif