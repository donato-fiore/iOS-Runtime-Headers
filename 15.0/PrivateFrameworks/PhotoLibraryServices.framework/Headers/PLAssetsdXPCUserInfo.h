// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLASSETSDXPCUSERINFO_H
#define PLASSETSDXPCUSERINFO_H

@class NSString;
@protocol PLXPCUserInfo;

#import <Foundation/Foundation.h>

#import "PLLibraryServicesManager.h"

@interface PLAssetsdXPCUserInfo : NSObject <PLXPCUserInfo>

 {
    PLLibraryServicesManager *_libraryServicesManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithLibraryServicesManager:(id)arg0 ;
-(id)libraryServicesManager;
-(id)persistentStoreCoordinator;


@end


#endif