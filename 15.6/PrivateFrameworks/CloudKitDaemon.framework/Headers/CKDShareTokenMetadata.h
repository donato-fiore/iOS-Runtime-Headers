// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDSHARETOKENMETADATA_H
#define CKDSHARETOKENMETADATA_H

@class NSData, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CKDShareTokenMetadata : NSObject <NSCopying>



@property (nonatomic) BOOL forceDSRefetch; // ivar: _forceDSRefetch
@property (retain, nonatomic) NSData *privateTokenData; // ivar: _privateTokenData
@property (retain, nonatomic) NSData *publicTokenData; // ivar: _publicTokenData
@property (retain, nonatomic) NSString *routingKey; // ivar: _routingKey
@property (readonly, nonatomic) NSString *shortSharingToken;
@property (retain, nonatomic) NSData *shortSharingTokenData; // ivar: _shortSharingTokenData
@property (readonly, nonatomic) NSData *shortSharingTokenHashData;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif