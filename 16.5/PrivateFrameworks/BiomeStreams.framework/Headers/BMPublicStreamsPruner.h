// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMPUBLICSTREAMSPRUNER_H
#define BMPUBLICSTREAMSPRUNER_H


#import <Foundation/Foundation.h>


@interface BMPublicStreamsPruner : NSObject



+(BOOL)shouldDeleteAppLaunch:(id)arg0 withInstalledApplications:(id)arg1 installedAppExtensions:(id)arg2 ;
+(BOOL)shouldDeleteEvent:(id)arg0 withInstalledApplications:(id)arg1 installedAppExtensions:(id)arg2 ;
+(BOOL)shouldDeleteEvent:(id)arg0 withUninstalledApplication:(id)arg1 ;
+(void)prunePublicStream:(id)arg0 configuration:(id)arg1 deletionPredicate:(id)arg2 ;
+(void)prunePublicStreamsWithPredicate:(id)arg0 ;
+(void)pruneStreamDataStore:(id)arg0 deletionPredicate:(id)arg1 ;
+(void)pruneWithInstalledApplications:(id)arg0 installedAppExtensions:(id)arg1 ;
+(void)pruneWithInstalledApplications:(id)arg0 installedAppExtensions:(id)arg1 activity:(id)arg2 ;
+(void)pruneWithUninstalledBundleIdentifier:(id)arg0 ;


@end


#endif