// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DACARKEYSHARINGMESSAGE_H
#define DACARKEYSHARINGMESSAGE_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "DACarKeyAdditionalCrossPlatformSharingData.h"
#import "DACarKeyGenericCrossPlatformSharingData.h"
#import "DACarKeyPrivateCrossPlatformSharingData.h"

@interface DACarKeySharingMessage : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) DACarKeyAdditionalCrossPlatformSharingData *additionalData; // ivar: _additionalData
@property (readonly, nonatomic) DACarKeyGenericCrossPlatformSharingData *genericData; // ivar: _genericData
@property (readonly, nonatomic) DACarKeyPrivateCrossPlatformSharingData *privateData; // ivar: _privateData


+(BOOL)supportsSecureCoding;
+(id)decodeWithData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)encodeWithError:(*id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGenericCrossPlatformSharingData:(id)arg0 additionalData:(id)arg1 privateData:(id)arg2 ;
-(id)initWithGenericCrossPlatformSharingData:(id)arg0 additionalDataDictionary:(id)arg1 ;
-(id)initWithGenericDataDictionary:(id)arg0 additionalDataDictionary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif