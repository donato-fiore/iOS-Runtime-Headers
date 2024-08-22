// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TXRARRAYELEMENT_H
#define TXRARRAYELEMENT_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TXRArrayElement : NSObject <NSCopying>



@property (readonly) NSArray *faces; // ivar: _faces


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initAsLevel:(NSUInteger)arg0 element:(NSUInteger)arg1 cubemap:(BOOL)arg2 dataSourceProvider:(id)arg3 ;
-(id)initAsLevel:(NSUInteger)arg0 element:(NSUInteger)arg1 dimensions:(NSUInteger)arg2 pixelFormat:(NSUInteger)arg3 alphaInfo:(BOOL)arg4 cubemap:(id)arg5 bufferAllocator;
-(void)setImage:(id)arg0 atFace:(NSUInteger)arg1 ;


@end


#endif