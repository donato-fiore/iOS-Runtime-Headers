// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKPHOTOLIBRARY_H
#define MKPHOTOLIBRARY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MKPhotoLibrary : NSObject

@property (nonatomic) NSUInteger contentType; // ivar: _contentType
@property (copy, nonatomic) NSString *rootPath; // ivar: _rootPath


-(BOOL)copy:(id)arg0 filename:(id)arg1 error:(*id)arg2 ;
-(BOOL)photoLibraryDidComplete:(id)arg0 filename:(id)arg1 success:(BOOL)arg2 error:(*id)arg3 ;
-(NSUInteger)assetCount:(id)arg0 ;
-(NSUInteger)countForCollection:(id)arg0 error:(*id)arg1 ;
-(id)addAsset:(id)arg0 ;
-(id)assetCollection:(id)arg0 ;
-(id)assetCollectionChangeRequest:(id)arg0 ;
-(id)init;
-(id)initWithContentType:(NSUInteger)arg0 ;
-(void)addAsset:(id)arg0 filename:(id)arg1 size:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)setCollection:(id)arg0 forLocalIdentifiers:(id)arg1 ;


@end


#endif