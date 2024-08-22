// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUPURGEABLEIMAGEACCESSGUARD_H
#define NUPURGEABLEIMAGEACCESSGUARD_H

@protocol NUPurgeableImage;

#import <Foundation/Foundation.h>

#import "NURegion.h"

@interface NUPurgeableImageAccessGuard : NSObject {
    NURegion *_accessRegion;
    id<NUPurgeableImage> *_accessImage;
}




-(id)initWithRegion:(id)arg0 image:(id)arg1 ;
-(void)_beginAccess;
-(void)_endAccess;
-(void)dealloc;


@end


#endif