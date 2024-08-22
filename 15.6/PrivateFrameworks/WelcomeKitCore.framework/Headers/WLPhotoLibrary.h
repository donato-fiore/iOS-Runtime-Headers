// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WLPHOTOLIBRARY_H
#define WLPHOTOLIBRARY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WLPhotoLibrary : NSObject

@property (nonatomic) NSUInteger contentType; // ivar: _contentType
@property (nonatomic) NSUInteger errorCount; // ivar: _errorCount
@property (copy, nonatomic) NSString *rootPath; // ivar: _rootPath


-(BOOL)copy:(id)arg0 filename:(id)arg1 error:(*id)arg2 ;
-(BOOL)photoLibraryDidComplete:(id)arg0 filename:(id)arg1 success:(BOOL)arg2 error:(*id)arg3 ;
-(id)assetCollectionChangeRequest:(id)arg0 ;
-(id)init;
-(id)initWithContentType:(NSUInteger)arg0 ;
-(void)addAsset:(id)arg0 collection:(id)arg1 ;
-(void)addAsset:(id)arg0 filename:(id)arg1 size:(NSUInteger)arg2 collection:(id)arg3 completion:(id)arg4 ;


@end


#endif