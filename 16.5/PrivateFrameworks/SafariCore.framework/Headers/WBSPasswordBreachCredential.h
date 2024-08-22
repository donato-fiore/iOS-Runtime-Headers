// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSPASSWORDBREACHCREDENTIAL_H
#define WBSPASSWORDBREACHCREDENTIAL_H

@class NSDate, NSString, NSData;

#import <Foundation/Foundation.h>


@interface WBSPasswordBreachCredential : NSObject

@property (readonly, nonatomic) NSDate *dateLastModified; // ivar: _dateLastModified
@property (readonly, nonatomic) NSString *password; // ivar: _password
@property (readonly, nonatomic) NSData *persistentIdentifier; // ivar: _persistentIdentifier


-(id)description;
-(id)initWithPassword:(id)arg0 persistentIdentifier:(id)arg1 dateLastModified:(id)arg2 ;
-(id)initWithSecItemDictionary:(id)arg0 ;


@end


#endif