// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FACIRCLESTATERESPONSE_H
#define FACIRCLESTATERESPONSE_H

@class NSError, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FACircleStateResponse : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) BOOL loadSuccess; // ivar: _loadSuccess
@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLoadSuccess:(BOOL)arg0 error:(id)arg1 userInfo:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif