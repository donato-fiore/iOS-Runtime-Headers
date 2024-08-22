// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MBFILEMANAGER_H
#define MBFILEMANAGER_H


#import <Foundation/Foundation.h>


@interface MBFileManager : NSObject



+(id)defaultManager;
-(BOOL)copyPath:(id)arg0 toPath:(id)arg1 ;
-(BOOL)createDirectoryAtPath:(id)arg0 attributes:(id)arg1 ;
-(BOOL)fileExistsAtPath:(id)arg0 ;
-(BOOL)movePath:(id)arg0 toPath:(id)arg1 ;
-(BOOL)removeFileAtPath:(id)arg0 ;
-(id)directoryContentsAtPath:(id)arg0 ;
-(id)fileAttributesAtPath:(id)arg0 traverseLink:(BOOL)arg1 ;


@end


#endif