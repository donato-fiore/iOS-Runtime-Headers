// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSPASSWORDBREACHKEYCHAINCREDENTIALSOURCE_H
#define WBSPASSWORDBREACHKEYCHAINCREDENTIALSOURCE_H

@class NSArray;
@protocol WBSPasswordBreachCredentialSource;

#import <Foundation/Foundation.h>


@interface WBSPasswordBreachKeychainCredentialSource : NSObject <WBSPasswordBreachCredentialSource>



@property (readonly, nonatomic) NSArray *credentials;


-(id)savedPasswordsForPersistentIdentifiers:(id)arg0 ;


@end


#endif