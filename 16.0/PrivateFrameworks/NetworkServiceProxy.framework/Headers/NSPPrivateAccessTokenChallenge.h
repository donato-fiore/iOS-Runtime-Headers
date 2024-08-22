// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSPPRIVATEACCESSTOKENCHALLENGE_H
#define NSPPRIVATEACCESSTOKENCHALLENGE_H

@class NSString, NSData, NSArray;

#import <Foundation/Foundation.h>


@interface NSPPrivateAccessTokenChallenge : NSObject {
    unsigned short _tokenType;
    NSString *_issuerName;
    NSData *_redemptionNonce;
    NSString *_originName;
    NSArray *_originNames;
    NSString *_originInfo;
    NSData *_challengeData;
}


@property (readonly) BOOL isSupportedTokenType;
@property (readonly) NSString *issuerName;
@property (readonly) NSString *originName;
@property (readonly) NSArray *originNames;
@property (readonly) NSData *redemptionNonce;
@property (readonly) unsigned short tokenType;
@property (readonly) BOOL typeRequiresOriginName;
@property (readonly) BOOL typeRequiresRedemptionNonce;


+(id)challengeAttributeName;
+(id)httpAuthenticationScheme;
+(id)tokenKeyAttributeName;
-(id)initWithData:(id)arg0 ;


@end


#endif