// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPTEMPORARYOBJECTCONTEXTDELEGATE_H
#define TSPTEMPORARYOBJECTCONTEXTDELEGATE_H

@class NSMutableSet, NSDictionary, NSUUID, NSString, SFUCryptoKey, NSError, NSSet;
@protocol TSPObjectContextDelegate, NSFilePresenter;

#import <Foundation/Foundation.h>

#import "TSPDocumentLoadValidationPolicy.h"
#import "TSPDocumentSaveValidationPolicy.h"

@interface TSPTemporaryObjectContextDelegate : NSObject <TSPObjectContextDelegate>

 {
    NSMutableSet *_persistenceWarnings;
}


@property (readonly, nonatomic) NSDictionary *additionalDocumentPropertiesForWrite;
@property (readonly, nonatomic) NSDictionary *additionalDocumentSupportPropertiesForWrite;
@property (readonly, nonatomic) BOOL areNewExternalReferencesToDataAllowed;
@property (readonly, nonatomic) NSUUID *baseUUIDForObjectUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TSPDocumentLoadValidationPolicy *documentLoadValidationPolicy;
@property (readonly, nonatomic) TSPDocumentSaveValidationPolicy *documentSaveValidationPolicy;
@property (readonly) SFUCryptoKey *encryptionKey;
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSObject<NSFilePresenter> *filePresenter;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoreDocumentSupport; // ivar: _ignoreDocumentSupport
@property (readonly, nonatomic) BOOL isDocumentSupportTemporary;
@property (readonly, nonatomic) NSSet *persistenceWarnings;
@property (readonly) Class superclass;


+(id)temporaryObjectContextDelegateWithPackageDataForWrite:(id)arg0 additionalDocumentPropertiesForWrite:(id)arg1 ;
-(BOOL)contextCanPerformUserActions:(id)arg0 ;
-(id)init;
-(id)persistenceWarningsForData:(id)arg0 flags:(NSUInteger)arg1 ;
-(void)addPersistenceWarnings:(id)arg0 ;
-(void)context:(id)arg0 canPerformUserActionUsingBlock:(id)arg1 ;
-(void)presentPersistenceError:(id)arg0 ;
-(void)requestAutosave;
-(void)resumeAutosaveWithReason:(id)arg0 ;
-(void)resumeSaveAndAutosaveWithReason:(id)arg0 ;
-(void)suspendAutosaveWithReason:(id)arg0 ;
-(void)suspendSaveAndAutosaveWithReason:(id)arg0 ;


@end


#endif