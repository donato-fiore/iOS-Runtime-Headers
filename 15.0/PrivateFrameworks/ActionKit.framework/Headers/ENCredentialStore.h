// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ENCREDENTIALSTORE_H
#define ENCREDENTIALSTORE_H

@class NSMutableDictionary;
@protocol NSCoding;

#import <Foundation/Foundation.h>


@interface ENCredentialStore : NSObject <NSCoding>



@property (retain, nonatomic) NSMutableDictionary *store; // ivar: _store


+(id)loadCredentialsFromAppDefaults;
-(id)credentialsForHost:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)addCredentials:(id)arg0 ;
-(void)clearAllCredentials;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeCredentials:(id)arg0 ;


@end


#endif