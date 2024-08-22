// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPMEDIAITEMARTWORK_H
#define MPMEDIAITEMARTWORK_H


#import <Foundation/Foundation.h>


@interface MPMediaItemArtwork : NSObject {
    CGSize _bounds;
    id *_requestHandler;
}


@property (readonly, nonatomic) CGRect bounds;
@property (readonly, nonatomic) CGRect imageCropRect;


-(id)imageWithSize:(struct CGSize )arg0 ;
-(id)init;
-(id)initWithBoundsSize:(struct CGSize )arg0 requestHandler:(id)arg1 ;
-(id)initWithImage:(id)arg0 ;
-(id)jpegDataWithSize:(struct CGSize )arg0 ;
-(id)pngDataWithSize:(struct CGSize )arg0 ;


@end


#endif