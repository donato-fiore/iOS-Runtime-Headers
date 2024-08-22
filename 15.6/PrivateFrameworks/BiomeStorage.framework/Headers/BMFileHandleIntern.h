// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMFILEHANDLEINTERN_H
#define BMFILEHANDLEINTERN_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface BMFileHandleIntern : NSObject {
    NSMapTable *_fhCache;
}




+(id)sharedInstance;
-(id)fileHandleForFilePath:(id)arg0 permissions:(NSUInteger)arg1 protectionClass:(NSUInteger)arg2 createIfNotCached:(BOOL)arg3 createNewFile:(BOOL)arg4 error:(*id)arg5 ;
-(id)init;
-(id)openFileWithAttributes:(id)arg0 createNewFile:(BOOL)arg1 error:(*id)arg2 ;


@end


#endif