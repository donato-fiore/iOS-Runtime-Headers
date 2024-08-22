// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DAHOMEKEYINFORMATION_H
#define DAHOMEKEYINFORMATION_H

@class NSData;

#import <Foundation/Foundation.h>


@interface DAHomeKeyInformation : NSObject

@property (readonly) NSData *appletIdentifier; // ivar: _appletIdentifier
@property (readonly) NSData *publicKey; // ivar: _publicKey
@property (readonly) NSData *readerIdentifier; // ivar: _readerIdentifier


+(BOOL)supportsSecureCoding;
+(id)withEndpoint:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif