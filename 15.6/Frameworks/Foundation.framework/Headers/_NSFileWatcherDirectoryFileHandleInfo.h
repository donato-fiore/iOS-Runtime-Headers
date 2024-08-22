// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSFILEWATCHERDIRECTORYFILEHANDLEINFO_H
#define _NSFILEWATCHERDIRECTORYFILEHANDLEINFO_H

@class NSFileWatcherFileHandleInfo;



@interface _NSFileWatcherDirectoryFileHandleInfo : NSFileWatcherFileHandleInfo {
    InodeDevPair inodeDevPair;
}




-(BOOL)isDirectory;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(void)close;


@end


#endif