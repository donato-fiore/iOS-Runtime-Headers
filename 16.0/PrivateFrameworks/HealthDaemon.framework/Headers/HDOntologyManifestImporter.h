// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDONTOLOGYMANIFESTIMPORTER_H
#define HDONTOLOGYMANIFESTIMPORTER_H

@class NSString;
@protocol HDOntologySchemaImporter;

#import <Foundation/Foundation.h>


@interface HDOntologyManifestImporter : NSObject <HDOntologySchemaImporter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)canImportEntry:(id)arg0 ;
+(BOOL)importManifestWithEntry:(id)arg0 updateCoordinator:(id)arg1 error:(*id)arg2 ;
+(BOOL)importOntologyShardEntry:(id)arg0 shardRegistry:(id)arg1 error:(*id)arg2 ;
+(id)pruneEntries:(id)arg0 options:(NSUInteger)arg1 shardRegistry:(id)arg2 error:(*id)arg3 ;
+(id)willPruneEntries:(id)arg0 options:(NSUInteger)arg1 shardRegistry:(id)arg2 error:(*id)arg3 ;
-(id)init;


@end


#endif