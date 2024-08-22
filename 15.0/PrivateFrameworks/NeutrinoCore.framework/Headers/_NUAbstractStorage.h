// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NUABSTRACTSTORAGE_H
#define _NUABSTRACTSTORAGE_H

@class NSString;
@protocol NUImageStorage;

#import <Foundation/Foundation.h>

#import "NUMutableRegion.h"
#import "NUPixelFormat.h"
#import "NURegion.h"

@interface _NUAbstractStorage : NSObject <NUImageStorage>

 {
    NUMutableRegion *_validRegion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NUPixelFormat *format; // ivar: _format
@property (readonly) NSUInteger hash;
@property ? size; // ivar: _size
@property NSInteger sizeInBytes; // ivar: _sizeInBytes
@property (readonly) Class superclass;
@property (readonly) NURegion *validRegion;


-(BOOL)isValidInRect:(struct ? )arg0 ;
-(BOOL)isValidInRegion:(id)arg0 ;
-(NSInteger)copyFromStorage:(id)arg0 region:(id)arg1 ;
-(NSInteger)fillBufferWithPattern4:(unsigned int)arg0 ;
-(NSInteger)readBufferInRegion:(id)arg0 block:(id)arg1 ;
-(NSInteger)useAsCIImageWithOptions:(id)arg0 renderer:(id)arg1 block:(id)arg2 ;
-(NSInteger)useAsCIRenderDestinationWithRenderer:(id)arg0 block:(id)arg1 ;
-(NSInteger)writeBufferInRegion:(id)arg0 block:(id)arg1 ;
-(id)init;
-(void)assertIsValidInRect:(struct ? )arg0 ;
-(void)assertIsValidInRegion:(id)arg0 ;
-(void)invalidate;
-(void)provideBuffer:(id)arg0 ;
-(void)provideMutableBuffer:(id)arg0 ;
-(void)validateRect:(struct ? )arg0 ;
-(void)validateRegion:(id)arg0 ;


@end


#endif