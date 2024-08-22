// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSPASSWORDBREACHTESTCREDENTIALSOURCE_H
#define WBSPASSWORDBREACHTESTCREDENTIALSOURCE_H

@class NSArray;
@protocol WBSPasswordBreachCredentialSource;

#import <Foundation/Foundation.h>


@interface WBSPasswordBreachTestCredentialSource : NSObject <WBSPasswordBreachCredentialSource>

 {
    NSArray *_credentials;
}


@property (readonly, nonatomic) NSArray *credentials;


-(id)initWithPasswords:(id)arg0 ;
-(id)savedAccountsForPersistentIdentifiers:(id)arg0 ;


@end


#endif