// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXPHOENIXDATAARCHIVER_H
#define AXPHOENIXDATAARCHIVER_H


#import <Foundation/Foundation.h>


@interface AXPhoenixDataArchiver : NSObject

@property (nonatomic) *archive archiver; // ivar: _archiver


-(id)initWithPath:(id)arg0 ;
-(void)addDirectoryToArchive:(id)arg0 withDirName:(id)arg1 ;
-(void)addFileToArchive:(id)arg0 withFileName:(id)arg1 ;
-(void)closeArchive;


@end


#endif