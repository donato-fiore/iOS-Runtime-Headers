// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSOWNERSHIPTOKEN_H
#define PKPASSOWNERSHIPTOKEN_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PKPassOwnershipToken : NSObject {
    NSString *_ownershipToken;
}


@property (copy, nonatomic) NSString *ownershipToken;
@property (readonly, copy, nonatomic) NSString *ownershipTokenIdentifier; // ivar: _ownershipTokenIdentifier


+(void)deleteAllLocalKeychainOwnershipTokens;
+(void)queryKeychainForOwnershipTokens:(id)arg0 ;
-(id)_wrapperWithType:(NSUInteger)arg0 identifier:(id)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithOwnershipToken:(id)arg0 identifier:(id)arg1 ;
-(void)_readFromKeychain;
-(void)_writeToKeychain;
-(void)deleteTokenFromKeychain;
-(void)deleteTokenFromLocalKeychain;


@end


#endif