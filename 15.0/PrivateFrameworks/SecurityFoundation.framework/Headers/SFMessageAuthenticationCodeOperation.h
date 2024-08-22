// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFMESSAGEAUTHENTICATIONCODEOPERATION_H
#define SFMESSAGEAUTHENTICATIONCODEOPERATION_H

@class NSString;
@protocol SFSigningOperation;

#import <Foundation/Foundation.h>

#import "_SFKeySpecifier.h"

@interface SFMessageAuthenticationCodeOperation : NSObject <SFSigningOperation>

 {
    id *_messageAuthenticationCodeOperationInternal;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) _SFKeySpecifier *signingKeySpecifier;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)_defaultMacOperation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)sign:(id)arg0 withKey:(id)arg1 error:(*id)arg2 ;
-(id)verify:(id)arg0 withKey:(id)arg1 error:(*id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif