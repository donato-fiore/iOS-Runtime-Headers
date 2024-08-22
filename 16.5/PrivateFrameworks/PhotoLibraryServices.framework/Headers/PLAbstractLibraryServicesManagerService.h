// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLABSTRACTLIBRARYSERVICESMANAGERSERVICE_H
#define PLABSTRACTLIBRARYSERVICESMANAGERSERVICE_H


#import <Foundation/Foundation.h>

#import "PLLibraryServicesManager.h"

@interface PLAbstractLibraryServicesManagerService : NSObject

@property (readonly, nonatomic) PLLibraryServicesManager *libraryServicesManager; // ivar: _libraryServicesManager


-(id)initWithLibraryServicesManager:(id)arg0 ;
-(id)newShortLivedLibraryWithName:(char *)arg0 ;


@end


#endif