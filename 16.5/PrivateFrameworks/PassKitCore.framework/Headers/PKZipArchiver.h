// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKZIPARCHIVER_H
#define PKZIPARCHIVER_H


#import <Foundation/Foundation.h>


@interface PKZipArchiver : NSObject



-(id)zippedDataForURL:(id)arg0 ;
-(void)unzipStream:(id)arg0 toPath:(id)arg1 completionHandler:(id)arg2 ;
-(void)unzipStream:(id)arg0 toURL:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif