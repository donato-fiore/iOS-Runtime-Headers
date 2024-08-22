// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDIRECTORYPURGER_H
#define CKDIRECTORYPURGER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CKDirectoryPurger : NSObject

@property (copy, nonatomic) id *shouldRemoveFileBlock; // ivar: _shouldRemoveFileBlock
@property (copy, nonatomic) id *shouldSkipFileBlock; // ivar: _shouldSkipFileBlock
@property (retain, nonatomic) NSArray *urls; // ivar: _urls


+(void)purgeDirectoryAtURL:(id)arg0 ;
-(id)initWithDirectoryURLs:(id)arg0 ;
-(void)purge;


@end


#endif