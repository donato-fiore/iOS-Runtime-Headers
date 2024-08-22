// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ANFILES_H
#define ANFILES_H


#import <Foundation/Foundation.h>


@interface ANFiles : NSObject



+(id)createTemporaryFileWithData:(id)arg0 extension:(id)arg1 directory:(id)arg2 ;
+(id)createTemporaryURLWithFileExtension:(id)arg0 directory:(id)arg1 ;
+(id)shared;
+(id)temporaryDirectoryUrl;
+(void)purgeTemporarySubDirectory:(id)arg0 ;
+(void)removeItem:(id)arg0 ;
-(id)createDirectory:(id)arg0 andFileURLWithExtension:(id)arg1 ;
-(id)createTemporaryFileWithData:(id)arg0 extension:(id)arg1 directory:(id)arg2 ;
-(id)createTemporaryURLWithExtension:(id)arg0 directory:(id)arg1 ;
-(void)purgeTemporarySubDirectory:(id)arg0 ;
-(void)removeDirectoryIfEmpty:(id)arg0 ;
-(void)removeItem:(id)arg0 ;


@end


#endif