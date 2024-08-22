// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKNETWORKPOWERASSERTION_H
#define CRKNETWORKPOWERASSERTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CRKNetworkPowerAssertion : NSObject {
    unsigned int mPowerAssertion;
}


@property (nonatomic) NSUInteger count; // ivar: _count
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name


+(id)sharedInstance;
+(void)decrement;
+(void)increment;
-(id)init;
-(void)decrement;
-(void)increment;


@end


#endif