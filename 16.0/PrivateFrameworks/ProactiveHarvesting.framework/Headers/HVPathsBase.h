// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HVPATHSBASE_H
#define HVPATHSBASE_H


#import <Foundation/Foundation.h>


@interface HVPathsBase : NSObject



+(id)filename:(id)arg0 ;
+(id)filename:(id)arg0 createIfNeeded:(BOOL)arg1 ;
+(id)filename:(id)arg0 subdirectory:(id)arg1 ;
+(id)filename:(id)arg0 subdirectory:(id)arg1 createIfNeeded:(BOOL)arg2 ;
+(id)subdirectory:(id)arg0 ;
+(id)subdirectory:(id)arg0 createIfNeeded:(BOOL)arg1 ;
+(id)topDirectory;
+(id)topDirectoryCreateIfNeeded:(BOOL)arg0 ;
+(id)topDirectoryWithName:(id)arg0 createIfNeeded:(BOOL)arg1 ;


@end


#endif