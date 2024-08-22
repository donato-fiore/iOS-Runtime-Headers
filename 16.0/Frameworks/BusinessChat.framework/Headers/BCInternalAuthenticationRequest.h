// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCINTERNALAUTHENTICATIONREQUEST_H
#define BCINTERNALAUTHENTICATIONREQUEST_H

@class NSString, NSArray, NSDictionary;
@protocol BCDictionarySerializable, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BCInternalAuthenticationRequest : NSObject <BCDictionarySerializable, NSSecureCoding>

 {
    NSString *_businessIdentifier;
    NSString *_groupIdentifier;
    NSString *_responseEncryptionKey;
    NSArray *_retrieve;
    NSDictionary *_labels;
}


@property (readonly, nonatomic) NSString *businessIdentifier;
@property (readonly, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, nonatomic) NSString *groupIdentifier;
@property (readonly, nonatomic) NSDictionary *labels;
@property (readonly, nonatomic) NSString *responseEncryptionKey;
@property (readonly, nonatomic) NSArray *retrieve;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif