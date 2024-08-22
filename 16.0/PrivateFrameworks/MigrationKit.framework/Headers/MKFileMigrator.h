// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKFILEMIGRATOR_H
#define MKFILEMIGRATOR_H

@class NSString;


#import "MKMigrator.h"

@interface MKFileMigrator : MKMigrator {
    NSString *_root;
}




-(id)init;
-(void)import:(id)arg0 filename:(id)arg1 offset:(NSUInteger)arg2 length:(NSUInteger)arg3 total:(NSUInteger)arg4 ;
-(void)importChunk:(id)arg0 filename:(id)arg1 offset:(NSUInteger)arg2 length:(NSUInteger)arg3 total:(NSUInteger)arg4 ;


@end


#endif