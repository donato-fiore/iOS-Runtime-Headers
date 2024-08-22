// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAP2ACCESSORYSESSIONINFO_H
#define HAP2ACCESSORYSESSIONINFO_H


#import <Foundation/Foundation.h>


@interface HAP2AccessorySessionInfo : NSObject

@property (readonly, nonatomic) NSUInteger numBonjourNames; // ivar: _numBonjourNames
@property (readonly, nonatomic) NSUInteger numIPAddresses; // ivar: _numIPAddresses
@property (readonly, nonatomic) NSUInteger numIPAddressesTried; // ivar: _numIPAddressesTried


-(id)init;
-(id)initWithNumIPs:(NSUInteger)arg0 numIPsTried:(NSUInteger)arg1 numBonjourNames:(NSUInteger)arg2 ;
-(void)resetWithNumIPs:(NSUInteger)arg0 numIPsTried:(NSUInteger)arg1 numBonjourNames:(NSUInteger)arg2 ;


@end


#endif