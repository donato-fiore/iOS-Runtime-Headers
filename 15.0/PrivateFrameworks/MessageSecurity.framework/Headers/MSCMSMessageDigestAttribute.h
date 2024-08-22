// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSCMSMESSAGEDIGESTATTRIBUTE_H
#define MSCMSMESSAGEDIGESTATTRIBUTE_H

@class NSData;
@protocol MSCMSAttributeCoder;

#import <Foundation/Foundation.h>


@interface MSCMSMessageDigestAttribute : NSObject <MSCMSAttributeCoder>



@property (retain) NSData *messageDigest; // ivar: _messageDigest


+(id)messageDigestAttributeWithDigest:(id)arg0 ;
-(id)encodeAttributeWithError:(*id)arg0 ;
-(id)initWithAttribute:(id)arg0 error:(*id)arg1 ;
-(id)initWithDigest:(id)arg0 ;


@end


#endif