// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBRESPONSEMETADATA_H
#define PBRESPONSEMETADATA_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PBResponseMetadata : NSObject <NSSecureCoding>



@property (readonly, nonatomic, getter=isAuthorizationAdmonished) BOOL authorizationAdmonished; // ivar: _authorizationAdmonished
@property (readonly, nonatomic) NSUInteger authorizationMachAbsoluteEndTime; // ivar: _authorizationMachAbsoluteEndTime
@property (readonly, nonatomic) NSUInteger authorizationMachAbsoluteStartTime; // ivar: _authorizationMachAbsoluteStartTime


+(BOOL)supportsSecureCoding;
-(id)initWithAuthorizationStartTime:(NSUInteger)arg0 authorizationEndTime:(NSUInteger)arg1 authorizationAdmonished:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif