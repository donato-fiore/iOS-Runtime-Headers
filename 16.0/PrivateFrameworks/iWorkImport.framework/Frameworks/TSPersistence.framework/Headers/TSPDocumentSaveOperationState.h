// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPDOCUMENTSAVEOPERATIONSTATE_H
#define TSPDOCUMENTSAVEOPERATIONSTATE_H

@class NSURL, NSIndexSet, NSString, NSUUID, SFUCryptoKey, NSData, NSProgress;


#import "TSPSaveOperationState.h"
#import "TSPObject.h"
#import "TSPPackageWriter.h"
#import "TSPDocumentProperties.h"
#import "TSPDocumentRevision.h"

@interface TSPDocumentSaveOperationState : TSPSaveOperationState

@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (retain, nonatomic) NSIndexSet *allDataIdentifiersPostSave; // ivar: _allDataIdentifiersPostSave
@property (nonatomic) BOOL didEndWriteOperation; // ivar: _didEndWriteOperation
@property (nonatomic) BOOL didResetDocumentRevision; // ivar: _didResetDocumentRevision
@property (retain, nonatomic) TSPObject *documentObject; // ivar: _documentObject
@property (retain, nonatomic) TSPPackageWriter *documentPackageWriter; // ivar: _documentPackageWriter
@property (copy, nonatomic) NSString *documentPasswordHint; // ivar: _documentPasswordHint
@property (retain, nonatomic) TSPDocumentProperties *documentProperties; // ivar: _documentProperties
@property (retain, nonatomic) TSPDocumentRevision *documentRevision; // ivar: _documentRevision
@property (retain, nonatomic) TSPDocumentProperties *documentSupportProperties; // ivar: _documentSupportProperties
@property (copy, nonatomic) NSUUID *documentUUID; // ivar: _documentUUID
@property (retain, nonatomic) SFUCryptoKey *encryptionKey; // ivar: _encryptionKey
@property (copy, nonatomic) NSURL *originalDocumentURL; // ivar: _originalDocumentURL
@property (copy, nonatomic) NSURL *originalSupportURL; // ivar: _originalSupportURL
@property (readonly, nonatomic) NSInteger packageType; // ivar: _packageType
@property (retain, nonatomic) NSData *passwordVerifier; // ivar: _passwordVerifier
@property (retain, nonatomic) NSProgress *progress; // ivar: _progress
@property (copy, nonatomic) NSURL *relativeURLForExternalData; // ivar: _relativeURLForExternalData
@property (nonatomic) NSUInteger saveToken; // ivar: _saveToken
@property (nonatomic) BOOL shouldLeavePendingEndSave; // ivar: _shouldLeavePendingEndSave
@property (nonatomic) BOOL shouldResumeAsynchronousModifications; // ivar: _shouldResumeAsynchronousModifications
@property (retain, nonatomic) TSPObject *supportObject; // ivar: _supportObject
@property (retain, nonatomic) TSPPackageWriter *supportPackageWriter; // ivar: _supportPackageWriter


-(id)init;
-(id)initWithURL:(id)arg0 updateType:(NSInteger)arg1 packageType:(NSInteger)arg2 ;


@end


#endif