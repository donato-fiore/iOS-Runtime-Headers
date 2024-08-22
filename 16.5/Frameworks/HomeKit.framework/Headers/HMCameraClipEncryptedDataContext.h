// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMCAMERACLIPENCRYPTEDDATACONTEXT_H
#define HMCAMERACLIPENCRYPTEDDATACONTEXT_H

@class NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HMCameraClipEncryptedDataContext : NSObject <NSCopying>



@property (readonly, copy) NSData *ciphertext; // ivar: _ciphertext
@property (readonly, copy) NSData *dataRepresentation;
@property (readonly, copy) NSData *initializationVector; // ivar: _initializationVector
@property (readonly, copy) NSData *tag; // ivar: _tag


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithDataRepresentation:(id)arg0 ;
-(id)initWithInitializationVector:(id)arg0 ciphertext:(id)arg1 tag:(id)arg2 ;


@end


#endif