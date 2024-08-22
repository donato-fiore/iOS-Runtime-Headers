// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPARTWORKREPRESENTATION_H
#define MPARTWORKREPRESENTATION_H

@class UIImage, AVAsset, NSString;

#import <Foundation/Foundation.h>


@interface MPArtworkRepresentation : NSObject

@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic, getter=isImagePrepared) BOOL imagePrepared; // ivar: _imagePrepared
@property (nonatomic) NSInteger kind; // ivar: _kind
@property (nonatomic) CGSize representationSize; // ivar: _representationSize
@property (retain, nonatomic) id *representationToken; // ivar: _representationToken
@property (retain, nonatomic) AVAsset *video; // ivar: _video
@property (readonly, copy, nonatomic) NSString *visualIdenticalityStringRepresentation; // ivar: _visualIdenticalityStringRepresentation


+(id)representationForVisualIdentity:(id)arg0 withSize:(struct CGSize )arg1 image:(id)arg2 ;
+(id)representationForVisualIdentity:(id)arg0 withSize:(struct CGSize )arg1 video:(id)arg2 ;
+(id)representationWithSize:(struct CGSize )arg0 image:(id)arg1 ;
+(id)representationWithSize:(struct CGSize )arg0 video:(id)arg1 ;
-(id)debugQuickLookObject;
-(id)representationWithPreparedImage:(id)arg0 ;


@end


#endif