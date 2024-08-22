// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKHANDLEINVITABILITY_H
#define SKHANDLEINVITABILITY_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SKHandleInvitability : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL isInvitable; // ivar: _isInvitable
@property (readonly, nonatomic) BOOL wasRemoved; // ivar: _wasRemoved


+(BOOL)supportsSecureCoding;
+(id)logger;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIsInvitable:(BOOL)arg0 wasRemoved:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif