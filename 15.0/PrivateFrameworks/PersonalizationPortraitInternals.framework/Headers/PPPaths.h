// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPPATHS_H
#define PPPATHS_H


#import <Foundation/Foundation.h>


@interface PPPaths : NSObject



+(id)defaultAssetPathForNamespaceId:(unsigned int)arg0 factorName:(id)arg1 ;
+(id)filename:(id)arg0 logSubdirectory:(id)arg1 ;
+(id)filename:(id)arg0 subdirectory:(id)arg1 ;
+(id)logDirectory;
+(id)logSubdirectory:(id)arg0 ;
+(id)resourcesDirectory;
+(id)subdirectory:(id)arg0 ;
+(id)topDirectory;


@end


#endif