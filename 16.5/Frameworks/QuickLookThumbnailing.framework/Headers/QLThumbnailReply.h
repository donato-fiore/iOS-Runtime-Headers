// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLTHUMBNAILREPLY_H
#define QLTHUMBNAILREPLY_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>


@interface QLThumbnailReply : NSObject {
    *CGColorSpace _colorSpace;
}


@property (nonatomic) *CGColorSpace colorSpace;
@property (nonatomic) CGSize contextSize; // ivar: _contextSize
@property (copy, nonatomic) id *drawInContextBlock; // ivar: _drawInContextBlock
@property (copy, nonatomic) id *drawingBlock; // ivar: _drawingBlock
@property (copy, nonatomic) NSString *extensionBadge; // ivar: _extensionBadge
@property (nonatomic) int iconFlavor; // ivar: _iconFlavor
@property (retain, nonatomic) NSURL *imageURL; // ivar: _imageURL
@property (copy, nonatomic) id *ioSurfaceAsyncBlock; // ivar: _ioSurfaceAsyncBlock
@property (copy, nonatomic) id *ioSurfaceBlock; // ivar: _ioSurfaceBlock
@property (nonatomic) NSUInteger type; // ivar: _type


+(id)replyWithContextSize:(struct CGSize )arg0 currentContextDrawingBlock:(id)arg1 ;
+(id)replyWithContextSize:(struct CGSize )arg0 drawingBlock:(id)arg1 ;
+(id)replyWithContextSize:(struct CGSize )arg0 ioSurfaceAsyncBlock:(id)arg1 ;
+(id)replyWithContextSize:(struct CGSize )arg0 ioSurfaceBlock:(id)arg1 ;
+(id)replyWithImageFileURL:(id)arg0 ;
-(id)init;


@end


#endif