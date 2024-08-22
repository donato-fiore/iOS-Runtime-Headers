// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MDMESSODETAILS_H
#define MDMESSODETAILS_H

@class NSArray, NSNumber, NSData;

#import <Foundation/Foundation.h>


@interface MDMESSODetails : NSObject

@property (copy, nonatomic) NSArray *appIDs; // ivar: _appIDs
@property (copy, nonatomic) NSArray *associatedDomains; // ivar: _associatedDomains
@property (retain, nonatomic) NSNumber *associatedDomainsEnableDirectDownloads; // ivar: _associatedDomainsEnableDirectDownloads
@property (retain, nonatomic) NSData *configurationProfile; // ivar: _configurationProfile
@property (retain, nonatomic) NSNumber *iTunesStoreID; // ivar: _iTunesStoreID


+(id)essoDetailsWithJSONDictionary:(id)arg0 ;
-(id)initWithiTunesStoreID:(id)arg0 appIDs:(id)arg1 associatedDomains:(id)arg2 associatedDomainsEnableDirectDownloads:(id)arg3 configurationProfile:(id)arg4 ;


@end


#endif