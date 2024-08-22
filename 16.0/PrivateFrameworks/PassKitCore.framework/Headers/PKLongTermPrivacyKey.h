// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKLONGTERMPRIVACYKEY_H
#define PKLONGTERMPRIVACYKEY_H

@class NSDate, NSString, NSData;

#import <Foundation/Foundation.h>


@interface PKLongTermPrivacyKey : NSObject

@property (retain, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (retain, nonatomic) NSString *groupIdentifier; // ivar: _groupIdentifier
@property (retain, nonatomic) NSString *keyIdentifier; // ivar: _keyIdentifier
@property (retain, nonatomic) NSData *publicKey; // ivar: _publicKey


-(id)description;
-(id)initWithSESPrivacyKey:(id)arg0 ;


@end


#endif