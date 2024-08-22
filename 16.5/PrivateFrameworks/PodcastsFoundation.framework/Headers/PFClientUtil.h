// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFCLIENTUTIL_H
#define PFCLIENTUTIL_H


#import <Foundation/Foundation.h>


@interface PFClientUtil : NSObject



+(BOOL)isAppRemovalService;
+(BOOL)isPodcastsApp;
+(BOOL)isPodcastsKit;
+(BOOL)isRunningOnHomepod;
+(BOOL)isRunningOnInternalOS;
+(BOOL)isRunningOnTV;
+(BOOL)isRunningOniPad;
+(BOOL)platformSupportsVideo;
+(BOOL)supportsDownloads;
+(BOOL)supportsGUI;
+(BOOL)supportsImageStore;
+(BOOL)supportsMetrics;
+(id)clientBundleVersion;
+(id)clientIdentifier;
+(id)clientIdentifierHeader;
+(id)mediaApiClientIdentifier;
+(id)mediaApiClientVersion;


@end


#endif