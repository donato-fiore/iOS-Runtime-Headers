// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMLDATACHUNKPLIST_H
#define PMLDATACHUNKPLIST_H



#import "PMLDataChunk.h"

@interface PMLDataChunkPlist : PMLDataChunk {
    id *_plist;
    BOOL _parsed;
}


@property (readonly, nonatomic) id *plist;


+(id)chunkWithPlist:(id)arg0 ;
+(unsigned int)dataChunkType;


@end


#endif