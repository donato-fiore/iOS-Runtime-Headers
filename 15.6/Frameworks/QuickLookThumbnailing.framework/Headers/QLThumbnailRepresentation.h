// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLTHUMBNAILREPRESENTATION_H
#define QLTHUMBNAILREPRESENTATION_H

@class NSImage, UIImage;

#import <Foundation/Foundation.h>

#import "QLThumbnailMetadata.h"

@interface QLThumbnailRepresentation : NSObject

@property (readonly, nonatomic) *CGImage CGImage;
@property (nonatomic) *CGImage CGImageThumbnail; // ivar: _CGImageThumbnail
@property (readonly, nonatomic) NSImage *NSImage; // ivar: _NSImage
@property (readonly, nonatomic) UIImage *UIImage;
@property (retain, nonatomic) UIImage *UIImageThumbnail; // ivar: _UIImageThumbnail
@property (nonatomic) CGRect contentRect; // ivar: _contentRect
@property int flavor; // ivar: _flavor
@property (retain) QLThumbnailMetadata *generatedProperties; // ivar: _generatedProperties
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (nonatomic) NSInteger type; // ivar: _type


-(id)description;
-(id)initWithThumbnailType:(NSInteger)arg0 iconFlavor:(int)arg1 CGImage:(struct CGImage *)arg2 scale:(CGFloat)arg3 contentRect:(struct CGRect )arg4 generatedProperties:(id)arg5 ;
-(void)dealloc;


@end


#endif