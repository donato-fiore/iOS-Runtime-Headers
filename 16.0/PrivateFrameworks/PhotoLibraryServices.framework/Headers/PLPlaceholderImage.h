// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLPLACEHOLDERIMAGE_H
#define PLPLACEHOLDERIMAGE_H

@class NSCache;

#import <Foundation/Foundation.h>


@interface PLPlaceholderImage : NSObject {
    NSCache *_dumbCache;
}




+(id)sharedManager;
-(id)init;
-(struct CGImage *)newPlaceholderImageWithSize:(struct CGSize )arg0 ;


@end


#endif