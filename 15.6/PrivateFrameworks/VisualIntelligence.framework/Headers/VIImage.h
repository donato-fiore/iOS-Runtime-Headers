// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VIIMAGE_H
#define VIIMAGE_H

@class NSString;
@protocol VIImageContent;

#import <Foundation/Foundation.h>


@interface VIImage : NSObject <VIImageContent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned int orientation; // ivar: _orientation
@property (readonly, nonatomic) *__CVBuffer pixelBuffer; // ivar: _pixelBuffer
@property (readonly) Class superclass;


+(id)imageWithPixelBuffer:(struct __CVBuffer *)arg0 orientation:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isLoaded;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithPixelBuffer:(struct __CVBuffer *)arg0 orientation:(unsigned int)arg1 ;
-(struct CGSize )imageSize;
-(void)dealloc;


@end


#endif