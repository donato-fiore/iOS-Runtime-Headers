// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSKTREGISTRATIONDATA_H
#define IDSKTREGISTRATIONDATA_H

@class NSData, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface IDSKTRegistrationData : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSData *ktDataForRegistration; // ivar: _ktDataForRegistration
@property (retain, nonatomic) NSData *ktDataSignature; // ivar: _ktDataSignature
@property (retain, nonatomic) NSData *ktPublicAccountKey; // ivar: _ktPublicAccountKey
@property (retain, nonatomic) NSDate *registeredTime; // ivar: _registeredTime
@property (nonatomic) BOOL uploadedToKVS; // ivar: _uploadedToKVS


+(BOOL)supportsSecureCoding;
-(BOOL)needsKVSUpload;
-(id)dataRepresentationWithError:(*id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDataRepresentation:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif