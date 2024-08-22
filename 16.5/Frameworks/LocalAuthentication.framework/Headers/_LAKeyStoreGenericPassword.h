// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LAKEYSTOREGENERICPASSWORD_H
#define _LAKEYSTOREGENERICPASSWORD_H

@class NSString, NSData;
@protocol LAKeyStoreGenericPassword, LAKeyStoreKey, _LAKeyStoreGenericPasswordCryptor;

#import <Foundation/Foundation.h>


@interface _LAKeyStoreGenericPassword : NSObject <LAKeyStoreGenericPassword>

 {
    NSString *_identifier;
    NSData *_wrappedData;
    NSData *_publicKeyHash;
    id<LAKeyStoreKey> *_wrapperKey;
}


@property (weak, nonatomic) NSObject<_LAKeyStoreGenericPasswordCryptor> *cryptor; // ivar: _cryptor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) Class superclass;


+(id)buildWithDictionary:(id)arg0 error:(*id)arg1 ;
-(void)fetchDataWithContext:(id)arg0 completion:(id)arg1 ;


@end


#endif