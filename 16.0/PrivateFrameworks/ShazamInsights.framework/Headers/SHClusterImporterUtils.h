// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHCLUSTERIMPORTERUTILS_H
#define SHCLUSTERIMPORTERUTILS_H


#import <Foundation/Foundation.h>


@interface SHClusterImporterUtils : NSObject



+(BOOL)clearTemporaryDatabaseFileAtURL:(id)arg0 withError:(*id)arg1 ;
+(BOOL)copyDatabaseFromURL:(id)arg0 toDatabaseDestinationURL:(id)arg1 error:(*id)arg2 ;
+(id)buildTemporaryClusterURLWithError:(*id)arg0 ;
+(id)cachesDirectory;
+(id)importerForFile:(id)arg0 ;


@end


#endif