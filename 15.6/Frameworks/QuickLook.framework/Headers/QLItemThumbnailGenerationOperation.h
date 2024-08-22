// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLITEMTHUMBNAILGENERATIONOPERATION_H
#define QLITEMTHUMBNAILGENERATIONOPERATION_H

@class QLAsynchronousOperation, UIImage;
@protocol QLItemThumbnailGeneratorProtocol;


#import "QLItem.h"

@interface QLItemThumbnailGenerationOperation : QLAsynchronousOperation

@property (retain, nonatomic) NSObject<QLItemThumbnailGeneratorProtocol> *generator; // ivar: _generator
@property (retain, nonatomic) QLItem *item; // ivar: _item
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (nonatomic) CGSize size; // ivar: _size
@property (retain, nonatomic) UIImage *thumbnail; // ivar: _thumbnail


-(id)initWithThumbnailGenerator:(id)arg0 item:(id)arg1 size:(struct CGSize )arg2 scale:(CGFloat)arg3 ;
-(void)main;


@end


#endif