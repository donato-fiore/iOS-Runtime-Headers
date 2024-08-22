// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKAVATARIMAGE_H
#define GKAVATARIMAGE_H

@class UIImage, NSData;

#import <Foundation/Foundation.h>


@interface GKAvatarImage : NSObject

@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) NSData *imageData; // ivar: _imageData


-(id)initWithData:(id)arg0 useUIImage:(BOOL)arg1 ;
-(void)prepareForUsingUIImage:(BOOL)arg0 ;


@end


#endif