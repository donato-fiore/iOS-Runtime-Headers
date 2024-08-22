// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DACARKEYGENERICCROSSPLATFORMSHARINGDATA_H
#define DACARKEYGENERICCROSSPLATFORMSHARINGDATA_H

@class NSString, NSData;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface DACarKeyGenericCrossPlatformSharingData : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSString *friendKeyIdentifier; // ivar: _friendKeyIdentifier
@property (readonly, nonatomic) NSData *message; // ivar: _message
@property (readonly, nonatomic) NSInteger messageType; // ivar: _messageType
@property (readonly, nonatomic) NSString *sharingIdentifier; // ivar: _sharingIdentifier


+(BOOL)supportsSecureCoding;
+(id)decodeWithData:(id)arg0 error:(*id)arg1 ;
-(id)asDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)encodeWithError:(*id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithSharingIdentifier:(id)arg0 friendKeyIdentifier:(id)arg1 sharingMessageType:(NSInteger)arg2 message:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif