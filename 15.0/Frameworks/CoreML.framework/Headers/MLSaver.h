// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLSAVER_H
#define MLSAVER_H


#import <Foundation/Foundation.h>


@interface MLSaver : NSObject



+(BOOL)copyModelAtURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
+(BOOL)saveModelToArchive:(*void)arg0 model:(id)arg1 compilerOptions:(id)arg2 error:(*id)arg3 ;
+(BOOL)saveModelToArchive:(*void)arg0 model:(id)arg1 error:(*id)arg2 ;
+(BOOL)saveModelToAssetAtURL:(id)arg0 model:(id)arg1 error:(*id)arg2 ;


@end


#endif