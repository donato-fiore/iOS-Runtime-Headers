// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDSHARETOKENMETADATA_H
#define CKDSHARETOKENMETADATA_H

@class NSString, NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CKDShareTokenMetadata : NSObject <NSCopying>



@property (nonatomic) BOOL forceDSRefetch; // ivar: _forceDSRefetch
@property (retain, nonatomic) NSString *participantID; // ivar: _participantID
@property (retain, nonatomic) NSData *privateTokenData; // ivar: _privateTokenData
@property (retain, nonatomic) NSData *publicTokenData; // ivar: _publicTokenData
@property (retain, nonatomic) NSString *routingKey; // ivar: _routingKey
@property (readonly, nonatomic) NSString *shortSharingToken;
@property (retain, nonatomic) NSData *shortSharingTokenData; // ivar: _shortSharingTokenData
@property (readonly, nonatomic) NSData *shortSharingTokenHashData;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif