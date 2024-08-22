// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MBDOMAINMANAGER_H
#define MBDOMAINMANAGER_H

@class NSMutableDictionary, NSDictionary;

#import <Foundation/Foundation.h>

#import "MBSystemDomainsVersions.h"

@interface MBDomainManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *domainsByName; // ivar: _domainsByName
@property (retain, nonatomic) NSDictionary *systemDomainsByName; // ivar: _systemDomainsByName
@property (retain, nonatomic) MBSystemDomainsVersions *systemDomainsVersions; // ivar: _systemDomainsVersions


-(BOOL)containsDomainName:(id)arg0 ;
-(BOOL)isSystemDomainName:(id)arg0 ;
-(id)allDomains;
-(id)domainForName:(id)arg0 ;
-(id)domainForPath:(id)arg0 relativePath:(*id)arg1 ;
-(id)initWithAccountType:(NSInteger)arg0 volumeMountPoint:(id)arg1 error:(*id)arg2 ;
-(id)initWithAccountType:(NSInteger)arg0 volumeMountPoint:(id)arg1 plistPath:(id)arg2 error:(*id)arg3 ;
-(id)initWithDefaultSystemDomainsPlist;
-(id)initWithDomains:(id)arg0 ;
-(id)initWithSystemDomains:(id)arg0 ;
-(id)initWithSystemDomains:(id)arg0 versions:(id)arg1 ;
-(id)initWithSystemDomainsPlist:(id)arg0 ;
-(id)redirectDomain:(id)arg0 forRelativePath:(id)arg1 ;
-(void)addDomain:(id)arg0 ;
-(void)addDomain:(id)arg0 forName:(id)arg1 ;


@end


#endif