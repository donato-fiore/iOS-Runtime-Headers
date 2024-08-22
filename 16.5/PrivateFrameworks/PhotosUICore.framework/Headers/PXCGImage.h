// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCGIMAGE_H
#define PXCGIMAGE_H


#import <Foundation/Foundation.h>


@interface PXCGImage : NSObject

@property (readonly, nonatomic) *CGImage image; // ivar: _image


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCGImage:(struct CGImage *)arg0 ;
-(void)dealloc;


@end


#endif