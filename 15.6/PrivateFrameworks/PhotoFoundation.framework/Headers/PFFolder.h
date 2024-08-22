// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFFOLDER_H
#define PFFOLDER_H

@class NSMutableArray;


#import "PFFile.h"

@interface PFFolder : PFFile

@property (retain, nonatomic) NSMutableArray *files; // ivar: _files
@property (retain, nonatomic) NSMutableArray *folders; // ivar: _folders
@property (nonatomic) BOOL isLeaf; // ivar: _isLeaf


-(id)init;
-(void)addFile:(id)arg0 ;
-(void)addFiles:(id)arg0 ;
-(void)addFolder:(id)arg0 ;
-(void)addFolders:(id)arg0 ;


@end


#endif