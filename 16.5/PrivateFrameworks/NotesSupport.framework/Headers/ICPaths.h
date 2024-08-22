// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICPATHS_H
#define ICPATHS_H


#import <Foundation/Foundation.h>


@interface ICPaths : NSObject



+(BOOL)isReadOnlyPersistentStore;
+(id)URLForGroupContainerWithIdentifier:(id)arg0 ;
+(id)applicationDataContainerURL;
+(id)applicationDocumentsURL;
+(id)attributesForGroupContainerDirectory;
+(id)defaultPreviewImageDirectoryURL;
+(id)importDocumentsURL;
+(id)managedObjectModelURL;
+(id)oldManagedObjectModelURL;
+(id)persistentStoreURL;
+(void)resetApplicationDocumentsURL;
+(void)setApplicationDocumentsURL:(id)arg0 ;
+(void)setIsReadOnlyPersistentStore:(BOOL)arg0 ;


@end


#endif