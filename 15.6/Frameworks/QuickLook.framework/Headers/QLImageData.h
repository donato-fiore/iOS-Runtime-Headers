// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLIMAGEDATA_H
#define QLIMAGEDATA_H


#import <Foundation/Foundation.h>


@interface QLImageData : NSObject {
    *CGImageSource _imageSource;
}




-(NSInteger)orientation;
-(NSUInteger)count;
-(id)durations;
-(id)imageAtIndex:(NSUInteger)arg0 ;
-(id)initWithImageSource:(struct CGImageSource *)arg0 ;
-(id)type;
-(struct CGSize )size;
-(void)dealloc;


@end


#endif