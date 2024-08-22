// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMFILEMANAGER_H
#define CMFILEMANAGER_H


#import <Foundation/Foundation.h>


@interface CMFileManager : NSObject



+(NSUInteger)getFileTypeFromPath:(id)arg0 ;
+(NSUInteger)getFileTypeFromUTI:(id)arg0 ;
+(id)canonicalUrlPrefix:(id)arg0 ;
+(id)getTmpDirectory;
+(id)getUrlProtocol:(id)arg0 ;
+(id)uniqueFileName:(id)arg0 ;


@end


#endif