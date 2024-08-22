// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DEARCHIVEREADER_H
#define DEARCHIVEREADER_H


#import <Foundation/Foundation.h>


@interface DEArchiveReader : NSObject {
    *archive _archive;
}




-(id)initWithURL:(id)arg0 ;
-(id)listContainedPaths;
-(void)closeArchive;


@end


#endif