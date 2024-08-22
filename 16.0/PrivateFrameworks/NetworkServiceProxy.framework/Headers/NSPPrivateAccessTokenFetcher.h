// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSPPRIVATEACCESSTOKENFETCHER_H
#define NSPPRIVATEACCESSTOKENFETCHER_H

@class NSData, NSMutableArray, NSString;

#import <Foundation/Foundation.h>


@interface NSPPrivateAccessTokenFetcher : NSObject {
    NSData *_challengeData;
    NSData *_tokenKey;
    NSData *_originNameKey;
    NSMutableArray *_secondaryFetchers;
}


@property ? auditToken; // ivar: _auditToken
@property (retain) NSString *bundleID; // ivar: _bundleID
@property (retain) NSString *selectedOrigin; // ivar: _selectedOrigin


-(id)initWithChallenge:(id)arg0 tokenKey:(id)arg1 originNameKey:(id)arg2 ;
-(id)initWithChallenge:(id)arg0 tokenPublicKey:(id)arg1 issuerPublicKey:(id)arg2 ;
-(void)addSecondaryChallenge:(id)arg0 tokenKey:(id)arg1 originNameKey:(id)arg2 ;
-(void)fetchTokenWithQueue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif