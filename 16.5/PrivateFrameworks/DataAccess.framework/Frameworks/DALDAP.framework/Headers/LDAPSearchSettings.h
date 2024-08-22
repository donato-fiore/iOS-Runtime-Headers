// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LDAPSEARCHSETTINGS_H
#define LDAPSEARCHSETTINGS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface LDAPSearchSettings : NSObject

@property (nonatomic) NSUInteger scope; // ivar: _scope
@property (retain, nonatomic) NSString *searchBase; // ivar: _searchBase
@property (retain, nonatomic) NSString *searchDescription; // ivar: _searchDescription


-(BOOL)hasSameScopeAndBaseAsOther:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithSettingsDict:(id)arg0 ;
-(id)settingsDict;


@end


#endif