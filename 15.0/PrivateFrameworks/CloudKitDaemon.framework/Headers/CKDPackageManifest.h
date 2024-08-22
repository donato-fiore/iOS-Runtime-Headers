// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDPACKAGEMANIFEST_H
#define CKDPACKAGEMANIFEST_H


#import <Foundation/Foundation.h>


@interface CKDPackageManifest : NSObject



+(BOOL)readContentsOfFile:(id)arg0 intoPackage:(id)arg1 error:(*id)arg2 ;
+(BOOL)writePackage:(id)arg0 toFile:(id)arg1 error:(*id)arg2 ;
+(id)packageInClientWithBasePath:(id)arg0 contentsOfFile:(id)arg1 error:(*id)arg2 ;


@end


#endif