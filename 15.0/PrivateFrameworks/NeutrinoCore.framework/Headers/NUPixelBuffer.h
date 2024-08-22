// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUPIXELBUFFER_H
#define NUPIXELBUFFER_H

@class NSString;
@protocol NUBuffer, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "NUBufferStorage.h"
#import "NUPixelFormat.h"

@interface NUPixelBuffer : NSObject <NUBuffer, NSCopying, NSMutableCopying>

 {
    NUBufferStorage *_storage;
    id<NUBuffer> *_buffer;
}


@property (readonly, nonatomic) *void bytes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NUPixelFormat *format;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger rowBytes;
@property (readonly, nonatomic) ? size;
@property (readonly) Class superclass;


-(*void)bytesAtPoint:(struct ? )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugQuickLookObject;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)privateInit;
-(void)dealloc;


@end


#endif