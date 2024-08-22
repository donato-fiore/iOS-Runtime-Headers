// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBSPROCESSEXITSTATUS_H
#define RBSPROCESSEXITSTATUS_H

@class NSString;
@protocol RBSXPCSecureCoding, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface RBSProcessExitStatus : NSObject <RBSXPCSecureCoding, NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSUInteger code; // ivar: _code
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned int domain; // ivar: _domain
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsRBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
+(id)statusWithDomain:(unsigned int)arg0 code:(NSUInteger)arg1 ;
-(BOOL)_isVoluntary;
-(BOOL)isCrash;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFairPlayFailure;
-(BOOL)isJetsam;
-(BOOL)isSignal;
-(BOOL)isValid;
-(id)_dictionaryRepresentation;
-(id)_initWithDictionaryRepresentation:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)error;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif