// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STAUTHENTICATIONRESULT_H
#define STAUTHENTICATIONRESULT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface STAuthenticationResult : NSObject <NSSecureCoding>



@property (readonly) BOOL authenticated; // ivar: _authenticated


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAuthenticationResult:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResult:(BOOL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif