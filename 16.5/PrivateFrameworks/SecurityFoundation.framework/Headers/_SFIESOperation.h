// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFIESOPERATION_H
#define _SFIESOPERATION_H

@class NSString;
@protocol _SFEncryptionOperation, SFDigestOperation;

#import <Foundation/Foundation.h>

#import "_SFECDHOperation.h"
#import "_SFKeySpecifier.h"
#import "_SFAuthenticatedEncryptionOperation.h"

@interface _SFIESOperation : NSObject <_SFEncryptionOperation>

 {
    id *_iesOperationInternal;
}


@property NSInteger curve; // ivar: _curve
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) _SFECDHOperation *diffieHellmanOperation;
@property (copy, nonatomic) NSObject<SFDigestOperation> *digestOperation;
@property (readonly, copy, nonatomic) _SFKeySpecifier *encryptionKeySpecifier;
@property (copy, nonatomic) _SFAuthenticatedEncryptionOperation *encryptionOperation;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(void)initialize;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)decrypt:(id)arg0 withKey:(id)arg1 error:(*id)arg2 ;
-(id)encrypt:(id)arg0 withKey:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCurve:(NSInteger)arg0 ;
-(id)initWithCurve:(NSInteger)arg0 diffieHellmanOperation:(id)arg1 encryptionOperation:(id)arg2 digestOperation:(id)arg3 ;
-(struct ccdigest_info *)_ccDigestInfoWithError:(*id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif