// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKMEDICALIDSTORE_H
#define HKMEDICALIDSTORE_H

@class NSString;
@protocol _HKXPCExportable;

#import <Foundation/Foundation.h>

#import "HKTaskServerProxyProvider.h"
#import "_HKMedicalIDData.h"

@interface HKMedicalIDStore : NSObject <_HKXPCExportable>

 {
    HKTaskServerProxyProvider *_proxyProvider;
    HKTaskServerProxyProvider *_setupStatusProxyProvider;
    _HKMedicalIDData *_lastFetchedMedicalIDData;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger medicalIDSetUpStatus;
@property (readonly) Class superclass;


+(id)clientInterface;
+(id)serverInterface;
+(id)setupStatusClientInterface;
+(id)setupStatusServerInterface;
+(id)setupStatusTaskIdentifier;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 ;
-(id)lastFetchedMedicalIDData;
-(id)remoteInterface;
-(void)connectionInvalidated;
-(void)deleteMedicalIDDataWithCompletion:(id)arg0 ;
-(void)fetchMedicalIDClinicalContactsWithCompletion:(id)arg0 ;
-(void)fetchMedicalIDDataIfSetUpOrCreateDefaultWithCompletion:(id)arg0 ;
-(void)fetchMedicalIDDataWithCompletion:(id)arg0 ;
-(void)fetchMedicalIDEmergencyContactsWithCompletion:(id)arg0 ;
-(void)setLastFetchedMedicalIDData:(id)arg0 ;
-(void)updateMedicalIDData:(id)arg0 completion:(id)arg1 ;


@end


#endif