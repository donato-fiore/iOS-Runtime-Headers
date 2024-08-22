// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DEARCHIVER_H
#define DEARCHIVER_H


#import <Foundation/Foundation.h>


@interface DEArchiver : NSObject



+(id)archiveDirectoryAt:(id)arg0 ;
+(id)archiveDirectoryAt:(id)arg0 deleteOriginal:(BOOL)arg1 ;
+(id)archiveFile:(id)arg0 ;
+(id)archiveFile:(id)arg0 deleteOriginal:(BOOL)arg1 ;


@end


#endif