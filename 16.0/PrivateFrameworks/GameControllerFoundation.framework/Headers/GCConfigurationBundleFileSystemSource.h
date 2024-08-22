// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCCONFIGURATIONBUNDLEFILESYSTEMSOURCE_H
#define GCCONFIGURATIONBUNDLEFILESYSTEMSOURCE_H

@class NSString;
@protocol GCConfigurationBundleFileSystemSource, OS_os_log;

#import <Foundation/Foundation.h>


@interface GCConfigurationBundleFileSystemSource : NSObject <GCConfigurationBundleFileSystemSource>

 {
    NSObject<OS_os_log> *_log;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)configurationBundleURLsForType:(id)arg0 ;
-(id)init;


@end


#endif