// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSHTTPCOOKIE2LOOKUPFILTER_H
#define NSHTTPCOOKIE2LOOKUPFILTER_H

@class NSString, NSURL, NSDate;

#import <Foundation/Foundation.h>


@interface NSHTTPCookie2LookupFilter : NSObject

@property NSUInteger acceptPolicy; // ivar: _acceptPolicy
@property (copy, nonatomic) NSString *domain; // ivar: _domain
@property BOOL httpOnly; // ivar: _httpOnly
@property BOOL ignoreHTTPOnlyCookie; // ivar: _ignoreHTTPOnlyCookie
@property BOOL ignoreHostOnlyFlag; // ivar: _ignoreHostOnlyFlag
@property BOOL ignoreSecureFlag; // ivar: _ignoreSecureFlag
@property (copy, nonatomic) NSURL *inURL; // ivar: _inURL
@property BOOL isSafe; // ivar: _isSafe
@property BOOL isTopLevelNavigation; // ivar: _isTopLevelNavigation
@property (copy, nonatomic) NSURL *mainDocumentURL; // ivar: _mainDocumentURL
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSDate *newerThanCreationDate; // ivar: _newerThanCreationDate
@property (copy, nonatomic) NSDate *newerThanExpirationDate; // ivar: _newerThanExpirationDate
@property (copy, nonatomic) NSDate *newerThanLastAccess; // ivar: _newerThanLastAccess
@property (copy, nonatomic) NSDate *olderThanCreationDate; // ivar: _olderThanCreationDate
@property (copy, nonatomic) NSDate *olderThanExpirationDate; // ivar: _olderThanExpirationDate
@property (copy, nonatomic) NSDate *olderThanLastAccess; // ivar: _olderThanLastAccess
@property (copy, nonatomic) NSString *partition; // ivar: _partition
@property (copy, nonatomic) NSString *path; // ivar: _path
@property NSInteger sameSite; // ivar: _sameSite
@property BOOL secure; // ivar: _secure
@property (copy, nonatomic) NSURL *siteForCookies; // ivar: _siteForCookies
@property (copy, nonatomic) NSString *value; // ivar: _value


-(BOOL)matchCookie:(id)arg0 ;
-(NSInteger)_flags;
-(id)initWithCookie:(id)arg0 ;


@end


#endif