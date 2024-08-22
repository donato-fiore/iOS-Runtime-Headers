// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFPBKDF2OPERATION_H
#define SFPBKDF2OPERATION_H

@class NSString, NSData;
@protocol SFKeyDerivingOperation, SFPseudoRandomFunction;

#import <Foundation/Foundation.h>


@interface SFPBKDF2Operation : NSObject <SFKeyDerivingOperation>

 {
    id *_pbkdf2OperationInternal;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger iterationCount;
@property (copy, nonatomic) NSObject<SFPseudoRandomFunction> *pseudoRandomFunction;
@property (copy, nonatomic) NSData *salt;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(NSInteger)keySource;
+(id)_randomSalt;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deriveKeyWithSpecifier:(id)arg0 fromKeySource:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPseudoRandomFunction:(id)arg0 iterationCount:(NSInteger)arg1 salt:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif