// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKFAILIFMACANDUNENROLLEDSTUDENTDTRANSPORTPROVIDER_H
#define CRKFAILIFMACANDUNENROLLEDSTUDENTDTRANSPORTPROVIDER_H

@class NSString;
@protocol CRKTransportProviding, CRKFeatureDataStoreProtocol;

#import <Foundation/Foundation.h>


@interface CRKFailIfMacAndUnenrolledStudentdTransportProvider : NSObject <CRKTransportProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<CRKFeatureDataStoreProtocol> *featureDataStore; // ivar: _featureDataStore
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<CRKTransportProviding> *underlyingTransportProvider; // ivar: _underlyingTransportProvider


-(id)initWithTransportProvider:(id)arg0 ;
-(id)initWithTransportProvider:(id)arg0 featureDataStore:(id)arg1 ;
-(void)fetchTransportWithCompletion:(id)arg0 ;


@end


#endif