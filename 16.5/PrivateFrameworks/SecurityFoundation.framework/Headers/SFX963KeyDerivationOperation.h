// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFX963KEYDERIVATIONOPERATION_H
#define SFX963KEYDERIVATIONOPERATION_H

@class NSString;
@protocol SFKeyDerivingOperation, SFDigestOperation;

#import <Foundation/Foundation.h>


@interface SFX963KeyDerivationOperation : NSObject <SFKeyDerivingOperation>

 {
    id *_x963KeyDerivationOperationInternal;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSObject<SFDigestOperation> *digestOperation;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSObject<SFKeyDerivingOperation> *sharedSecretOperation;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(NSInteger)keySource;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deriveKeyWithSpecifier:(id)arg0 fromKeySource:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSharedSecretOperation:(id)arg0 ;
-(id)initWithSharedSecretOperation:(id)arg0 digestOperation:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif