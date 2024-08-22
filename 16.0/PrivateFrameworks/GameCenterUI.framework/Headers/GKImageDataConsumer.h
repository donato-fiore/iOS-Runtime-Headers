// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKIMAGEDATACONSUMER_H
#define GKIMAGEDATACONSUMER_H

@class NSString;
@protocol GKResourceDataConsumer;

#import <Foundation/Foundation.h>


@interface GKImageDataConsumer : NSObject <GKResourceDataConsumer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isLayeredImage; // ivar: _isLayeredImage
@property (readonly, nonatomic) CGFloat scale; // ivar: _scale
@property (readonly, nonatomic) CGSize size; // ivar: _size
@property (readonly) Class superclass;


-(id)initWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 isLayeredImage:(BOOL)arg2 ;
-(id)objectForData:(id)arg0 error:(*id)arg1 ;


@end


#endif