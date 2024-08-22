// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DOCTHUMBNAILDESCRIPTOR_H
#define DOCTHUMBNAILDESCRIPTOR_H


#import <Foundation/Foundation.h>


@interface DOCThumbnailDescriptor : NSObject

@property (readonly, nonatomic, getter=isFolded) BOOL folded; // ivar: _folded
@property (readonly, nonatomic, getter=isInteractive) BOOL interactive; // ivar: _interactive
@property (readonly, nonatomic) CGFloat minimumSize; // ivar: _minimumSize
@property (readonly, nonatomic) CGFloat scale; // ivar: _scale
@property (readonly, nonatomic) CGSize size; // ivar: _size
@property (readonly, nonatomic) NSUInteger style; // ivar: _style


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithScale:(CGFloat)arg0 style:(NSUInteger)arg1 isFolded:(BOOL)arg2 isInteractive:(BOOL)arg3 ;
-(id)initWithSize:(struct CGSize )arg0 minimumSize:(CGFloat)arg1 scale:(CGFloat)arg2 style:(NSUInteger)arg3 isFolded:(BOOL)arg4 isInteractive:(BOOL)arg5 ;
-(id)initWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 style:(NSUInteger)arg2 isFolded:(BOOL)arg3 isInteractive:(BOOL)arg4 ;


@end


#endif