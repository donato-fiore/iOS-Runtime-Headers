// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFEC_X962SIGNINGOPERATION_H
#define _SFEC_X962SIGNINGOPERATION_H

@class NSString;
@protocol SFSigningOperation, SFDigestOperation;

#import <Foundation/Foundation.h>

#import "_SFECKeySpecifier.h"

@interface _SFEC_X962SigningOperation : NSObject <SFSigningOperation>

 {
    id *_x962SigningOperationInternal;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) NSObject<SFDigestOperation> *digestOperation; // ivar: _digestOperation
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) _SFECKeySpecifier *signingKeySpecifier;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeySpecifier:(id)arg0 ;
-(id)initWithKeySpecifier:(id)arg0 digestOperation:(id)arg1 ;
-(id)sign:(id)arg0 withKey:(id)arg1 error:(*id)arg2 ;
-(id)verify:(id)arg0 withKey:(id)arg1 error:(*id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif