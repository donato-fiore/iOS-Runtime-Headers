// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTRATTESTATIONDATASTORE_H
#define HMMTRATTESTATIONDATASTORE_H

@class HMFObject, NSArray, NSString, NSURL, UARPController;
@protocol UARPControllerDelegateProtocol, HMFLogging, HMMTRFileManager;



@interface HMMTRAttestationDataStore : HMFObject <UARPControllerDelegateProtocol, HMFLogging>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSArray *cdCertificates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<HMMTRFileManager> *fileManager; // ivar: _fileManager
@property (readonly) NSURL *fileURL; // ivar: _fileURL
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSArray *paaCertificates;
@property (readonly) Class superclass;
@property (readonly) UARPController *uarpController; // ivar: _uarpController


+(id)logCategory;
-(BOOL)sendMessageToAccessory:(id)arg0 uarpMsg:(id)arg1 error:(*id)arg2 ;
-(id)convertPEMtoDERforCertificate:(id)arg0 ;
-(id)initWithFileURL:(id)arg0 ;
-(id)initWithFileURL:(id)arg0 uarpController:(id)arg1 fileManager:(id)arg2 ;
-(id)staticAttestationData;
-(id)staticAttestationDataFileURL;
-(void)assetAvailablityUpdateForAccessoryID:(id)arg0 assetID:(id)arg1 ;
-(void)attestationCertificates:(id)arg0 forSubjectKeyIdentifier:(id)arg1 ;
-(void)fetchCloudAttestationData;
-(void)saveWithPaaCertificates:(id)arg0 cdCertificates:(id)arg1 ;


@end


#endif