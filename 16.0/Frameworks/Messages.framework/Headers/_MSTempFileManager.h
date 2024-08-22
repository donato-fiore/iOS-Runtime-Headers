// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MSTEMPFILEMANAGER_H
#define _MSTEMPFILEMANAGER_H

@class NSHashTable;

#import <Foundation/Foundation.h>


@interface _MSTempFileManager : NSObject

@property (readonly, nonatomic) NSHashTable *registry; // ivar: _registry


+(id)sharedInstance;
-(id)init;
-(id)writeTemporaryFileWithData:(id)arg0 type:(id)arg1 ;


@end


#endif