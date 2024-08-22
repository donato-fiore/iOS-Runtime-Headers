// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSKTOPTINRESULT_H
#define IDSKTOPTINRESULT_H

@class NSError, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface IDSKTOptInResult : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSData *serverProvidedSMT; // ivar: _serverProvidedSMT
@property (readonly, nonatomic) BOOL success; // ivar: _success


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSuccess:(BOOL)arg0 serverProvidedSMT:(id)arg1 error:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif