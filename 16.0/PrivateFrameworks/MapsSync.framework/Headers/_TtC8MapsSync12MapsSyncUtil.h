// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8MAPSSYNC12MAPSSYNCUTIL_H
#define _TTC8MAPSSYNC12MAPSSYNCUTIL_H


#import <Foundation/Foundation.h>


@interface _TtC8MapsSync12MapsSyncUtil : NSObject



+(BOOL)isMapsInstalled;
+(id)getApplicationIdentifier;
+(id)mapsContainerDataDirectory;
+(id)mapsGroupDirectory;
+(id)mapsUserDirectory;
+(id)userHomeDirectory;
+(void)assertMainQueueWithDebug:(BOOL)arg0 ;
+(void)assertNotMainQueueWithDebug:(BOOL)arg0 ;
+(void)assertNotQueue:(id)arg0 debug:(BOOL)arg1 ;
+(void)assertQueue:(id)arg0 debug:(BOOL)arg1 ;
-(id)init;


@end


#endif