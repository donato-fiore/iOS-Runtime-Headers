// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFCLIENTUTIL_H
#define PFCLIENTUTIL_H


#import <Foundation/Foundation.h>


@interface PFClientUtil : NSObject



+(BOOL)isPodcastsApp;
+(BOOL)isRunningOnHomepod;
+(BOOL)isRunningOnInternalOS;
+(BOOL)isRunningOnTV;
+(BOOL)platformSupportsVideo;
+(BOOL)supportsDownloads;
+(BOOL)supportsMetrics;
+(id)clientBundleVersion;
+(id)clientIdentifier;
+(id)clientIdentifierHeader;
+(id)mediaApiClientIdentifier;
+(id)mediaApiClientVersion;


@end


#endif