// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSAUXILIARYTRANSACTION_H
#define STSAUXILIARYTRANSACTION_H

@class NSError;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "STSAuxiliaryCredential.h"

@interface STSAuxiliaryTransaction : NSObject <NSSecureCoding>



@property (readonly, nonatomic) STSAuxiliaryCredential *credential; // ivar: _credential
@property (readonly, nonatomic) NSError *error; // ivar: _error


+(BOOL)supportsSecureCoding;
-(BOOL)didSucceed;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCredential:(id)arg0 error:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif