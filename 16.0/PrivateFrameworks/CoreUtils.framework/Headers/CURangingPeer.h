// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CURANGINGPEER_H
#define CURANGINGPEER_H

@class NSData, NSString;

#import <Foundation/Foundation.h>


@interface CURangingPeer : NSObject

@property (copy, nonatomic) NSData *deviceAddress; // ivar: _deviceAddress
@property (copy, nonatomic) NSData *deviceIRK; // ivar: _deviceIRK
@property (copy, nonatomic) NSString *deviceModel; // ivar: _deviceModel


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;


@end


#endif