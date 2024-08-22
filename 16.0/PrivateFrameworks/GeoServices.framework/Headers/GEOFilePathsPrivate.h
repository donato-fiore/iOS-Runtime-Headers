// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOFILEPATHSPRIVATE_H
#define GEOFILEPATHSPRIVATE_H


#import <Foundation/Foundation.h>


@interface GEOFilePathsPrivate : NSObject



+(id)daemonContainerCachesPathUsingLibSystem;
+(id)daemonContainerLibraryPathUsingLibSystem;
+(id)daemonContainerPathUsingLibSystem;
+(id)pathForSearchPath:(int)arg0 andDomain:(int)arg1 ;
+(id)systemContainerCachesPathUsingLibSystem;
+(id)systemContainerLibraryPathUsingLibSystem;
+(id)systemContainerPathUsingLibSystem;
+(id)userContainerCachesPathUsingLibSystem;
+(id)userContainerLibPathUsingLibSystem;


@end


#endif