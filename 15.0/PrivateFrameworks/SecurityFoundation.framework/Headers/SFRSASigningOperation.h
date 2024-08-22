// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFRSASIGNINGOPERATION_H
#define SFRSASIGNINGOPERATION_H

@class NSString;
@protocol SFSigningOperation, SFDigestOperation;

#import <Foundation/Foundation.h>

#import "_SFRSAKeySpecifier.h"

@interface SFRSASigningOperation : NSObject <SFSigningOperation>

 {
    id *_rsaSigningOperationInternal;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSObject<SFDigestOperation> *digestOperation;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) _SFRSAKeySpecifier *signingKeySpecifier;
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