// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSFOCUSPEOPLECACHE_H
#define CLSFOCUSPEOPLECACHE_H

@class NSSet, PHPhotoLibrary;

#import <Foundation/Foundation.h>


@interface CLSFocusPeopleCache : NSObject

@property (nonatomic) NSUInteger maximumNumberOfPeople; // ivar: _maximumNumberOfPeople
@property (readonly, nonatomic) NSSet *personLocalIdentifiers; // ivar: _personLocalIdentifiers
@property (weak, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary


+(id)_personSortDescriptors;
-(id)_collectValidPersonLocalIdentifiers;
-(id)initWithPhotoLibrary:(id)arg0 maximumNumberOfPeople:(NSUInteger)arg1 ;
-(void)invalidate;


@end


#endif