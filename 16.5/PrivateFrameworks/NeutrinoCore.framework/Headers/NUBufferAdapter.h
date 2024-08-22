// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUBUFFERADAPTER_H
#define NUBUFFERADAPTER_H

@class NSString;
@protocol NUBuffer, NUBufferProvider;

#import <Foundation/Foundation.h>

#import "NUPixelFormat.h"

@interface NUBufferAdapter : NSObject <NUBuffer, NUBufferProvider>

 {
    *void _bytes;
    BOOL _valid;
}


@property (readonly, nonatomic) *void bytes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NUPixelFormat *format; // ivar: _format
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger rowBytes; // ivar: _rowBytes
@property (readonly, nonatomic) ? size; // ivar: _size
@property (readonly) Class superclass;


-(*void)bytesAtPoint:(struct ? )arg0 ;
-(id)debugQuickLookObject;
-(id)init;
-(id)initWithBuffer:(id)arg0 ;
-(id)initWithSize:(struct ? )arg0 format:(id)arg1 rowBytes:(NSInteger)arg2 bytes:(*void)arg3 ;
-(void)invalidate;
-(void)provideBuffer:(id)arg0 ;


@end


#endif