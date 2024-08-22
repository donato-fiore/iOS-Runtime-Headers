// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMDIRECTORYCONTENTSSIZES_H
#define IMDIRECTORYCONTENTSSIZES_H


#import <Foundation/Foundation.h>


@interface IMDirectoryContentsSizes : NSObject

@property (readonly, nonatomic) IMFileSize totalAttachmentSize; // ivar: _totalAttachmentSize
@property (readonly, nonatomic) IMFileSize totalPurgableSize; // ivar: _totalPurgableSize
@property (readonly, nonatomic) IMFileSize totalSize; // ivar: _totalSize


-(id)initWithDirectoryContents:(id)arg0 ;


@end


#endif