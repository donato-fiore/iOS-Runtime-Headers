// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKASCASSOCIATEDREADERIDREADERCA_H
#define PKASCASSOCIATEDREADERIDREADERCA_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKASCAssociatedReaderIDReaderCA : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSData *attestation; // ivar: _attestation
@property (retain, nonatomic) NSData *publicKey; // ivar: _publicKey


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToASCAssociatedReaderIDReaderCA:(id)arg0 ;
-(NSUInteger)hash;
-(id)asDictionary;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif