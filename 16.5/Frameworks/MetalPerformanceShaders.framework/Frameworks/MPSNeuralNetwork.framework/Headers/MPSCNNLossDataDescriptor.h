// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSCNNLOSSDATADESCRIPTOR_H
#define MPSCNNLOSSDATADESCRIPTOR_H

@class NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MPSCNNLossDataDescriptor : NSObject <NSCopying>

 {
    NSData *_data;
}


@property (nonatomic) NSUInteger bytesPerImage; // ivar: _bytesPerImage
@property (nonatomic) NSUInteger bytesPerRow; // ivar: _bytesPerRow
@property (readonly, nonatomic) NSUInteger layout; // ivar: _layout
@property (readonly, nonatomic) ? size; // ivar: _size


+(id)cnnLossDataDescriptorWithData:(id)arg0 layout:(NSUInteger)arg1 size:(struct ? )arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(void)dealloc;


@end


#endif