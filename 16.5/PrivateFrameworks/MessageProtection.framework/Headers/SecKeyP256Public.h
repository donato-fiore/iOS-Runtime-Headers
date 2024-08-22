// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SECKEYP256PUBLIC_H
#define SECKEYP256PUBLIC_H

@class NSString, NSData;
@protocol P256PublicKeyProtocol;

#import <Foundation/Foundation.h>


@interface SecKeyP256Public : NSObject <P256PublicKeyProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property *__SecKey publicKeyRef; // ivar: _publicKeyRef
@property (retain) NSData *serializedKey; // ivar: _serializedKey
@property (readonly) Class superclass;


-(BOOL)verifySignature:(id)arg0 data:(id)arg1 ;
-(id)dataRepresentation;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)initWithSecKeyRef:(struct __SecKey *)arg0 ;
-(void)dealloc;


@end


#endif