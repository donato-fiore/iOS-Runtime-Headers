// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AIDASERVICEOPERATIONRESULT_H
#define AIDASERVICEOPERATIONRESULT_H

@class NSError, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AIDAServiceOperationResult : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) BOOL success; // ivar: _success
@property (readonly, nonatomic) NSString *type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSuccess:(BOOL)arg0 error:(id)arg1 type:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif