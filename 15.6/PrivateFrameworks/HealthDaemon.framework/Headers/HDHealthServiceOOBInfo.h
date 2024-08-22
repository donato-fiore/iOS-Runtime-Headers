// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDHEALTHSERVICEOOBINFO_H
#define HDHEALTHSERVICEOOBINFO_H

@class NSData;

#import <Foundation/Foundation.h>


@interface HDHealthServiceOOBInfo : NSObject

@property (readonly, nonatomic) NSData *btAddress; // ivar: _btAddress
@property (readonly, nonatomic) NSData *confirmationValue; // ivar: _confirmationValue
@property (readonly, nonatomic) NSData *oobData; // ivar: _oobData
@property (readonly, nonatomic) NSData *randomValue; // ivar: _randomValue


-(id)description;
-(id)initWithOOBData:(id)arg0 btAddress:(id)arg1 ;


@end


#endif