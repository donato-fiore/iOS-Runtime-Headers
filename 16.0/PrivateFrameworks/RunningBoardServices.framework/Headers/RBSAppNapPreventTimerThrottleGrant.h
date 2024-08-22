// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBSAPPNAPPREVENTTIMERTHROTTLEGRANT_H
#define RBSAPPNAPPREVENTTIMERTHROTTLEGRANT_H



#import "RBSAppNapGrant.h"

@interface RBSAppNapPreventTimerThrottleGrant : RBSAppNapGrant

@property (readonly, nonatomic) unsigned char tier; // ivar: _tier


+(id)grant;
+(id)grantWithTier:(unsigned char)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif