// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSHTTPCOOKIE2STORAGEFILTER_H
#define NSHTTPCOOKIE2STORAGEFILTER_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>


@interface NSHTTPCookie2StorageFilter : NSObject {
    BOOL _isTrusted;
    BOOL _isTrustedCached;
    NSString *_urlScheme;
}


@property NSUInteger acceptPolicy; // ivar: _acceptPolicy
@property BOOL isSafe; // ivar: _isSafe
@property BOOL isTopLevelNavigation; // ivar: _isTopLevelNavigation
@property (retain, nonatomic) NSURL *mainDocumentURL; // ivar: _mainDocumentURL
@property BOOL overwriteHTTPOnlyCookies; // ivar: _overwriteHTTPOnlyCookies
@property (retain, nonatomic) NSString *partition; // ivar: _partition
@property (retain, nonatomic) NSURL *siteForCookies; // ivar: _siteForCookies
@property (retain, nonatomic) NSURL *url; // ivar: _url


-(BOOL)isTrusted;
-(id)init;


@end


#endif