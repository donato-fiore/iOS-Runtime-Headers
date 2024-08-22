// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPUSHTOKEN_H
#define CKDPUSHTOKEN_H

@class NSString, NSData;

#import <Foundation/Foundation.h>


@interface CKDPushToken : NSObject

@property (retain, nonatomic) NSString *apsEnvironmentString; // ivar: _apsEnvironmentString
@property (retain, nonatomic) NSData *apsToken; // ivar: _apsToken


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif