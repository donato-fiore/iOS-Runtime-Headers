// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKPACKAGEDB_H
#define CKPACKAGEDB_H


#import <Foundation/Foundation.h>


@interface CKPackageDB : NSObject



+(BOOL)copySQLiteFileAtPath:(id)arg0 toPath:(id)arg1 timeout:(CGFloat)arg2 error:(*id)arg3 ;
+(BOOL)moveSQLiteFileAtPath:(id)arg0 toPath:(id)arg1 timeout:(CGFloat)arg2 error:(*id)arg3 ;


@end


#endif