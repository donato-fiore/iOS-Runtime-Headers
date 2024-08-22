// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKMAPPEDINDEXPATH_H
#define GKMAPPEDINDEXPATH_H

@class NSIndexPath;



@interface GKMappedIndexPath : NSIndexPath

@property (copy, nonatomic) NSIndexPath *sourceIndexPath; // ivar: _sourceIndexPath
@property (retain, nonatomic) id *tag; // ivar: _tag


+(id)indexPathForItem:(NSInteger)arg0 inSection:(NSInteger)arg1 fromSourceIndexPath:(id)arg2 withTag:(id)arg3 ;
-(id)description;


@end


#endif