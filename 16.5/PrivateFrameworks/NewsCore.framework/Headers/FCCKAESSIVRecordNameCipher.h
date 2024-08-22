// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCCKAESSIVRECORDNAMECIPHER_H
#define FCCKAESSIVRECORDNAMECIPHER_H

@protocol FCCKRecordNameCipher;

#import <Foundation/Foundation.h>


@interface FCCKAESSIVRecordNameCipher : NSObject <FCCKRecordNameCipher>





-(id)decryptRecordName:(id)arg0 withKey:(id)arg1 ;
-(id)encryptRecordName:(id)arg0 withKey:(id)arg1 ;


@end


#endif