// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDWALLETPASSLIBRARY_H
#define HMDWALLETPASSLIBRARY_H

@class HMFObject, NSString, PKPassLibrary, NSSet;
@protocol HMDWalletPassLibrary, HMDWalletPassLibraryDelegate, OS_dispatch_queue;



@interface HMDWalletPassLibrary : HMFObject <HMDWalletPassLibrary>



@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDWalletPassLibraryDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) PKPassLibrary *passLibrary; // ivar: _passLibrary
@property (readonly, copy) NSString *secureElementIdentifier;
@property (readonly) Class superclass;
@property (readonly, copy) NSSet *walletKeys;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(BOOL)removePassWithTypeIdentifier:(id)arg0 serialNumber:(id)arg1 ;
-(id)createTemporaryPassDirectoryURL;
-(id)initWithWorkQueue:(id)arg0 ;
-(id)passUniqueIDOfWalletKeyWithTypeIdentifier:(id)arg0 serialNumber:(id)arg1 ;
-(id)urlForWalletKeyWithTypeIdentifier:(id)arg0 serialNumber:(id)arg1 ;
-(id)walletKeyWithTypeIdentifier:(id)arg0 serialNumber:(id)arg1 ;
-(void)acquireAssertionOfType:(NSUInteger)arg0 withReason:(id)arg1 completion:(id)arg2 ;
-(void)addPassAtURL:(id)arg0 completion:(id)arg1 ;
-(void)deleteKeyMaterialForSubCredentialId:(id)arg0 ;
-(void)enableExpressWithAuthData:(id)arg0 passTypeIdentifier:(id)arg1 serialNumber:(id)arg2 completion:(id)arg3 ;
-(void)fetchExpressEnablementConflictingPassDescriptionForPassAtURL:(id)arg0 completion:(id)arg1 ;
-(void)fetchHomeKeySupportedWithCompletion:(id)arg0 ;
-(void)fetchIsExpressEnabledForPassWithTypeIdentifier:(id)arg0 serialNumber:(id)arg1 completion:(id)arg2 ;
-(void)fetchTransactionKeyForPassWithTypeIdentifier:(id)arg0 serialNumber:(id)arg1 completion:(id)arg2 ;
-(void)generateHomeKeyNFCInfoWithReaderPublicKey:(id)arg0 readerIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)handlePassLibraryDidChangeNotification:(id)arg0 ;
-(void)start;
-(void)updatePassAtURL:(id)arg0 completion:(id)arg1 ;


@end


#endif