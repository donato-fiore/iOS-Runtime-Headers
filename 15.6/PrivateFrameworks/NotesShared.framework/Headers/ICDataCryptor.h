// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICDATACRYPTOR_H
#define ICDATACRYPTOR_H

@class NSString, NSMutableDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICDataCryptor : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *cloudSyncingObjectIdentifier; // ivar: _cloudSyncingObjectIdentifier
@property (retain, nonatomic) NSMutableDictionary *initializationVectorDictionary; // ivar: _initializationVectorDictionary
@property (retain, nonatomic) NSMutableDictionary *tagDictionary; // ivar: _tagDictionary


+(BOOL)supportsSecureCoding;
-(id)decryptEncryptedData:(id)arg0 identifier:(id)arg1 ;
-(id)encryptData:(id)arg0 identifier:(id)arg1 ;
-(id)init;
-(id)initWithCloudSyncingObjectIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif