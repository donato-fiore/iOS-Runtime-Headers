// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTIMAGETENSORDESCRIPTOR_H
#define FTIMAGETENSORDESCRIPTOR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface FTImageTensorDescriptor : NSObject

@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) unsigned int pixelFormat; // ivar: _pixelFormat
@property (nonatomic) CGSize size; // ivar: _size


+(id)bgraImageWithName:(id)arg0 size:(struct CGSize )arg1 ;
+(id)bgraSquareImageWithName:(id)arg0 size:(CGFloat)arg1 ;
+(id)descriptorWithName:(id)arg0 size:(struct CGSize )arg1 pixelFormat:(unsigned int)arg2 ;


@end


#endif