// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSDOWNLOADFILEMANIFEST_H
#define SSDOWNLOADFILEMANIFEST_H


#import <Foundation/Foundation.h>

#import "SSXPCConnection.h"

@interface SSDownloadFileManifest : NSObject {
    SSXPCConnection *_connection;
    NSInteger _manifestType;
}


@property (readonly) NSInteger manifestType;


-(id)init;
-(id)initWithManifestType:(NSInteger)arg0 ;
-(void)_removeItemsWithAssetPaths:(id)arg0 completionBlock:(id)arg1 ;
-(void)dealloc;
-(void)getPathsForFilesWithClass:(NSInteger)arg0 completionBlock:(id)arg1 ;
-(void)rebuildManifestWithCompletionBlock:(id)arg0 ;
-(void)removeItemWithAssetPath:(id)arg0 completionBlock:(id)arg1 ;
-(void)removeItemsWithAssetPaths:(id)arg0 completionBlock:(id)arg1 ;


@end


#endif