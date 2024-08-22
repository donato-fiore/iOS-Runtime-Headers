// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PHPHOTOLIBRARYVALIDATOR_H
#define _PHPHOTOLIBRARYVALIDATOR_H

@class PLPhotoLibrary;


#import "PHValidator.h"

@interface _PHPhotoLibraryValidator : PHValidator

@property (readonly, weak, nonatomic) PLPhotoLibrary *photoLibrary; // ivar: _photoLibrary


-(BOOL)isValidImagePathExtension:(id)arg0 ;
-(BOOL)isValidVideoPathExtension:(id)arg0 ;
-(id)initWithPhotoLibrary:(id)arg0 ;


@end


#endif