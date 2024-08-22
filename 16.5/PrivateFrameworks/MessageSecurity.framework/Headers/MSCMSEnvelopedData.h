// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSCMSENVELOPEDDATA_H
#define MSCMSENVELOPEDDATA_H

@class NSData, NSString, NSMutableArray, NSArray, NSNumber;
@protocol MSCMSMessage;

#import <Foundation/Foundation.h>

#import "MSOID.h"
#import "MSAlgorithmIdentifier.h"

@interface MSCMSEnvelopedData : NSObject <MSCMSMessage>



@property BOOL contentChanged; // ivar: _contentChanged
@property (retain) MSOID *contentType; // ivar: _contentType
@property (retain, nonatomic) NSData *dataContent; // ivar: _dataContent
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSObject<MSCMSMessage> *embeddedContent; // ivar: _embeddedContent
@property (retain) NSData *encryptedContent; // ivar: _encryptedContent
@property (retain) MSAlgorithmIdentifier *encryptionAlgorithm; // ivar: _encryptionAlgorithm
@property (readonly) NSUInteger hash;
@property (retain) NSMutableArray *originatorCertificates; // ivar: _originatorCertificates
@property (readonly) NSArray *recipients; // ivar: _recipients
@property (readonly) Class superclass;
@property (readonly) MSOID *type; // ivar: _type
@property (retain) NSMutableArray *unprotectedAttributes; // ivar: _unprotectedAttributes
@property (retain) NSNumber *version; // ivar: _version


+(id)decodeMessageSecurityObject:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)decryptContent:(id)arg0 error:(*id)arg1 ;
-(id)encodeMessageSecurityObject:(*id)arg0 ;
-(id)initWithDataContent:(id)arg0 recipient:(id)arg1 ;
-(id)initWithDataContent:(id)arg0 recipient:(id)arg1 encryptionAlgorithm:(id)arg2 ;
-(id)initWithEmbeddedContent:(id)arg0 recipient:(id)arg1 ;
-(id)initWithEmbeddedContent:(id)arg0 recipient:(id)arg1 encryptionAlgorithm:(id)arg2 ;
-(void)addRecipient:(id)arg0 ;
-(void)removeRecipientWithCertificate:(struct __SecCertificate *)arg0 error:(*id)arg1 ;
-(void)removeRecipientWithEmailAddress:(id)arg0 error:(*id)arg1 ;


@end


#endif