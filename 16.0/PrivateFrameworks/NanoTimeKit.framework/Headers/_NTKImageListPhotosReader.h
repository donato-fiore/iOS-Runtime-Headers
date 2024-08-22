// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NTKIMAGELISTPHOTOSREADER_H
#define _NTKIMAGELISTPHOTOSREADER_H

@class NSMutableArray;


#import "NTKPhotosReader.h"

@interface _NTKImageListPhotosReader : NTKPhotosReader {
    NSMutableArray *_photos;
}




-(NSUInteger)count;
-(id)initWithResourceDirectory:(id)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;


@end


#endif