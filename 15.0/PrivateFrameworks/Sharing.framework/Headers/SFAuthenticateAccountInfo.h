// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFAUTHENTICATEACCOUNTINFO_H
#define SFAUTHENTICATEACCOUNTINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SFAuthenticateAccountInfo : NSObject

@property (readonly, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (readonly, nonatomic) unsigned int type; // ivar: _type


-(id)description;
-(id)initWithType:(unsigned int)arg0 altDSID:(id)arg1 ;


@end


#endif