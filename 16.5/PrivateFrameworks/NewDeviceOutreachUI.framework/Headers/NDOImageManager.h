// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NDOIMAGEMANAGER_H
#define NDOIMAGEMANAGER_H

@class NSCache;

#import <Foundation/Foundation.h>


@interface NDOImageManager : NSObject

@property (retain, nonatomic) NSCache *imageCache; // ivar: _imageCache


+(id)sharedManager;
-(id)fetchImageWithURLString:(id)arg0 completion:(id)arg1 ;
-(id)initPrivate;
-(void)resetCache;


@end


#endif