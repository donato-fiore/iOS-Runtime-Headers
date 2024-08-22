// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKFILEMIGRATOR_H
#define MKFILEMIGRATOR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MKFileMigrator : NSObject {
    NSString *_root;
}




-(id)init;
-(void)import:(id)arg0 filename:(id)arg1 offset:(NSUInteger)arg2 length:(NSUInteger)arg3 total:(NSUInteger)arg4 ;
-(void)importChunk:(id)arg0 filename:(id)arg1 offset:(NSUInteger)arg2 length:(NSUInteger)arg3 total:(NSUInteger)arg4 ;


@end


#endif