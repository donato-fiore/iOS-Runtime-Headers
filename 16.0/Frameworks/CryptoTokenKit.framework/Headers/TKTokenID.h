// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TKTOKENID_H
#define TKTOKENID_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TKTokenID : NSObject <NSCopying, NSSecureCoding>



@property (readonly) NSString *classID;
@property (readonly) NSString *instanceID;
@property (readonly) NSString *stringRepresentation; // ivar: _stringRepresentation


+(BOOL)supportsSecureCoding;
+(id)encodedCertificateID:(id)arg0 ;
+(id)encodedKeyID:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)decodedCertificateID:(id)arg0 error:(*id)arg1 ;
-(id)decodedKeyID:(id)arg0 error:(*id)arg1 ;
-(id)decodedObjectID:(id)arg0 isCertificate:(*BOOL)arg1 error:(*id)arg2 ;
-(id)description;
-(id)initWithClassID:(id)arg0 instanceID:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTokenID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif