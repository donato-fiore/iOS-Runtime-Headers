// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CXCALLDIRECTORYEXTENSIONCONTEXT_H
#define CXCALLDIRECTORYEXTENSIONCONTEXT_H

@class NSExtensionContext, NSString;
@protocol CXCallDirectoryProviderVendorProtocol, CXCallDirectoryExtensionContextDelegate;


#import "CXCallDirectoryMutablePhoneNumberEntryData.h"
#import "CXCallDirectoryMutableLabeledPhoneNumberEntryData.h"

@interface CXCallDirectoryExtensionContext : NSExtensionContext <CXCallDirectoryProviderVendorProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CXCallDirectoryExtensionContextDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasQueriedIsIncremental; // ivar: _hasQueriedIsIncremental
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isIncremental) BOOL incremental; // ivar: _incremental
@property (nonatomic) NSInteger pendingBlockingEntryChangeType; // ivar: _pendingBlockingEntryChangeType
@property (retain, nonatomic) CXCallDirectoryMutablePhoneNumberEntryData *pendingBlockingEntryData; // ivar: _pendingBlockingEntryData
@property (nonatomic) NSInteger pendingIdentificationEntryChangeType; // ivar: _pendingIdentificationEntryChangeType
@property (retain, nonatomic) CXCallDirectoryMutableLabeledPhoneNumberEntryData *pendingIdentificationEntryDataForAddition; // ivar: _pendingIdentificationEntryDataForAddition
@property (retain, nonatomic) CXCallDirectoryMutablePhoneNumberEntryData *pendingIdentificationEntryDataForRemoval; // ivar: _pendingIdentificationEntryDataForRemoval
@property (copy, nonatomic) id *remoteObjectProxyGenerator; // ivar: _remoteObjectProxyGenerator
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
// -(id)_remoteObjectProxyWithErrorHandler:(id)arg0 synchronous:(unk)arg1  ;
-(id)initWithInputItems:(id)arg0 listenerEndpoint:(id)arg1 contextUUID:(id)arg2 ;
-(void)_flushPendingBlockingEntryData;
-(void)_flushPendingIdentificationEntryData;
// -(void)_performBlockIfIncremental:(id)arg0 usingSelectorForExceptionMessage:(unk)arg1  ;
-(void)addBlockingEntryWithNextSequentialPhoneNumber:(NSInteger)arg0 ;
-(void)addIdentificationEntryWithNextSequentialPhoneNumber:(NSInteger)arg0 label:(id)arg1 ;
-(void)appendBlockingEntryPhoneNumber:(NSInteger)arg0 changeType:(NSInteger)arg1 ;
-(void)appendIdentificationEntryForAdditionWithPhoneNumber:(NSInteger)arg0 label:(id)arg1 ;
-(void)appendIdentificationEntryForRemovalWithPhoneNumber:(NSInteger)arg0 ;
-(void)completeRequestWithCompletionHandler:(id)arg0 ;
-(void)removeAllBlockingEntries;
-(void)removeAllIdentificationEntries;
-(void)removeBlockingEntryWithPhoneNumber:(NSInteger)arg0 ;
-(void)removeIdentificationEntryWithPhoneNumber:(NSInteger)arg0 ;
-(void)requestFailedWithError:(id)arg0 reply:(id)arg1 ;


@end


#endif