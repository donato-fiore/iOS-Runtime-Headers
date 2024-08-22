// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMCFILEACCESSREPAIRTOOL_H
#define DMCFILEACCESSREPAIRTOOL_H

@class NSFileManager;

#import <Foundation/Foundation.h>


@interface DMCFileAccessRepairTool : NSObject

@property (retain, nonatomic) NSFileManager *fileManager; // ivar: _fileManager


-(BOOL)changePermissions:(unsigned short)arg0 ofFileAtPath:(id)arg1 ;
-(BOOL)fileManagerThinksFileNeedsRepairAtPath:(id)arg0 ;
-(BOOL)fileNeedsRepairAtPath:(id)arg0 ;
-(BOOL)posixThinksFileNeedsRepairAtPath:(id)arg0 ;
-(BOOL)repairFileAtPath:(id)arg0 error:(*id)arg1 ;
-(BOOL)writeData:(id)arg0 toFileAtPath:(id)arg1 ;
-(id)contentsOfFileAtPath:(id)arg0 ;
-(id)createFileManager;
-(id)createRepairToolErrorWithCode:(NSInteger)arg0 ;
-(int)accessAtPath:(char *)arg0 mode:(int)arg1 error:(*int)arg2 ;


@end


#endif