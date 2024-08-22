// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BSUIMAPPEDIMAGECACHEOPTIONS_H
#define BSUIMAPPEDIMAGECACHEOPTIONS_H

@protocol NSCopying, BSPathProviding;

#import <Foundation/Foundation.h>


@interface BSUIMappedImageCacheOptions : NSObject <NSCopying>

 {
    id<BSPathProviding> *_containerPathProvider;
}


@property (readonly, nonatomic) NSObject<BSPathProviding> *containerPathProvider;


+(id)optionsWithContainerPathProvider:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif