// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSCMSENCRYPTIONKEYPREFERENCEATTRIBUTE_H
#define MSCMSENCRYPTIONKEYPREFERENCEATTRIBUTE_H

@protocol MSCMSAttributeCoder;

#import <Foundation/Foundation.h>


@interface MSCMSEncryptionKeyPreferenceAttribute : NSObject <MSCMSAttributeCoder>



@property (readonly) *__SecCertificate encryptionCertificate; // ivar: _encryptionCertificate


-(id)encodeAttributeWithError:(*id)arg0 ;
-(id)initWithAttribute:(id)arg0 error:(*id)arg1 ;
-(id)initWithCertificate:(struct __SecCertificate *)arg0 ;
-(id)initWithEmailAddress:(id)arg0 ;
-(id)initWithIdentity:(struct __SecIdentity *)arg0 ;
-(void)dealloc;


@end


#endif