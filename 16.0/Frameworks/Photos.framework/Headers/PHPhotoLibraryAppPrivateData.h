// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHPHOTOLIBRARYAPPPRIVATEDATA_H
#define PHPHOTOLIBRARYAPPPRIVATEDATA_H

@class PLAppPrivateData;

#import <Foundation/Foundation.h>

#import "PHPhotoLibrary.h"

@interface PHPhotoLibraryAppPrivateData : NSObject

@property (retain) PLAppPrivateData *impl; // ivar: _impl
@property (weak) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary


+(BOOL)accessInstanceVariablesDirectly;
-(BOOL)setValue:(id)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(BOOL)setValue:(id)arg0 forKeyPath:(id)arg1 error:(*id)arg2 ;
-(BOOL)setValuesForKeysWithDictionary:(id)arg0 error:(*id)arg1 ;
-(id)debugDescription;
-(id)dictionaryWithValuesForKeys:(id)arg0 ;
-(id)initWithLibrary:(id)arg0 ;
-(id)valueForKey:(id)arg0 ;
-(id)valueForKeyPath:(id)arg0 ;
-(void)invalidate;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;
-(void)setValue:(id)arg0 forKeyPath:(id)arg1 ;
-(void)setValuesForKeysWithDictionary:(id)arg0 ;


@end


#endif