// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHAPHOTOLIBRARYREFERENCE_H
#define PHAPHOTOLIBRARYREFERENCE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PHAPhotoLibraryReference : NSObject

@property (readonly, copy) NSString *path; // ivar: _path


-(BOOL)isEqualToPhotoLibraryReference:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithLibraryURL:(id)arg0 ;


@end


#endif