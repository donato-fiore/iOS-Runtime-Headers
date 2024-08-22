// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGCOLORPROGRAMLIBRARY_H
#define PXGCOLORPROGRAMLIBRARY_H

@class NSMutableArray, NSMutableSet;
@protocol MTLDevice;

#import <Foundation/Foundation.h>


@interface PXGColorProgramLibrary : NSObject {
    NSMutableArray *_programs;
    NSMutableSet *_failedColorspaces;
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) *CGColorSpace destinationColorSpace; // ivar: _destinationColorSpace
@property (readonly, nonatomic) NSObject<MTLDevice> *device; // ivar: _device


-(id)colorProgramForSourceColorSpace:(struct CGColorSpace *)arg0 flags:(NSUInteger)arg1 ;
-(id)description;
-(id)init;
-(id)initWithDevice:(id)arg0 destinationColorSpace:(struct CGColorSpace *)arg1 ;
-(void)dealloc;


@end


#endif