// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICDATACRYPTOR_H
#define ICDATACRYPTOR_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICDataCryptor : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *cloudSyncingObjectIdentifier; // ivar: _cloudSyncingObjectIdentifier


+(BOOL)supportsSecureCoding;
-(id)decryptEncryptedData:(id)arg0 identifier:(id)arg1 ;
-(id)encryptData:(id)arg0 identifier:(id)arg1 ;
-(id)init;
-(id)initWithCloudSyncingObjectIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif