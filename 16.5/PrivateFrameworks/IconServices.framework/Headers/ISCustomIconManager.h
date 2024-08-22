// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISCUSTOMICONMANAGER_H
#define ISCUSTOMICONMANAGER_H


#import <Foundation/Foundation.h>


@interface ISCustomIconManager : NSObject



+(id)sharedInstance;
-(id)_init;
-(id)overrideIconForURL:(id)arg0 ;
-(id)overrideResourceForBundleIdentifier:(id)arg0 ;
-(id)specialFolderTypeForURL:(id)arg0 ;


@end


#endif