// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUCOREDOCUMENTATIONDATAMANAGER_H
#define SUCOREDOCUMENTATIONDATAMANAGER_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SUCoreDocumentationDataManager : NSObject

@property (retain, nonatomic) NSString *documentationPath; // ivar: _documentationPath
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // ivar: _stateQueue


+(id)_sharedManagerInitWithPath:(id)arg0 ;
+(id)sharedManager;
+(void)setupSharedManagerWithStashPath:(id)arg0 ;
-(BOOL)cleanupNonInstalledDocumentationWithError:(*id)arg0 ;
-(BOOL)queue_cleanupNonInstalledDocumentationWithError:(*id)arg0 ;
-(BOOL)queue_evictStashIfNecessary:(*id)arg0 ;
-(BOOL)queue_getDocumentation:(*id)arg0 documentationData:(*id)arg1 forInstalledUpdateType:(NSUInteger)arg2 withError:(*id)arg3 ;
-(BOOL)queue_stashDocumentationAssetData:(id)arg0 forBuildVersion:(id)arg1 error:(*id)arg2 ;
-(BOOL)stashDocumentationAssetData:(id)arg0 forBuildVersion:(id)arg1 error:(*id)arg2 ;
-(id)description;
-(id)getDocumentationDataForInstalledUpdateType:(NSUInteger)arg0 withError:(*id)arg1 ;
-(id)getDocumentationForInstalledUpdateType:(NSUInteger)arg0 withError:(*id)arg1 ;
-(id)init;
-(id)initWithStashPath:(id)arg0 ;
-(id)installedBuildVersionsWithError:(*id)arg0 ;
-(id)stashedDataDirectoryForBuildVersion:(id)arg0 ;


@end


#endif