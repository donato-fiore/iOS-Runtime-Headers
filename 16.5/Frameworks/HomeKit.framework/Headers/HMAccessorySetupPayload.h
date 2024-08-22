// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMACCESSORYSETUPPAYLOAD_H
#define HMACCESSORYSETUPPAYLOAD_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HMSetupAccessoryPayload.h"
#import "HMAccessoryOwnershipToken.h"

@interface HMAccessorySetupPayload : NSObject <NSCopying, NSSecureCoding>



@property (readonly) HMSetupAccessoryPayload *internalSetupPayload; // ivar: _internalSetupPayload
@property (readonly, copy) HMAccessoryOwnershipToken *ownershipToken; // ivar: _ownershipToken


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInternalSetupPayload:(id)arg0 ownershipToken:(id)arg1 ;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 ownershipToken:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif