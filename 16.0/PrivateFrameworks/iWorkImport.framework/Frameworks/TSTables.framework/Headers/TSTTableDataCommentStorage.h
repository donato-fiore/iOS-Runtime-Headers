// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTTABLEDATACOMMENTSTORAGE_H
#define TSTTABLEDATACOMMENTSTORAGE_H



#import "TSTTableDataObject.h"

@interface TSTTableDataCommentStorage : TSTTableDataObject



+(id)objectWithCommentStorage:(id)arg0 refCount:(unsigned int)arg1 ;
-(NSUInteger)estimateByteSize;
-(id)commentStorage;
-(id)description;
-(id)initObjectWithCommentStorage:(id)arg0 refCount:(unsigned int)arg1 ;
-(void)encodeToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 completion:(id)arg2 ;


@end


#endif