// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPARTWORKRESIZEOPERATION_H
#define MPARTWORKRESIZEOPERATION_H

@class NSOperation, NSURL, NSError, UIImage;
@protocol OS_dispatch_group;



@interface MPArtworkResizeOperation : NSOperation

@property (readonly, nonatomic) NSURL *destinationURL; // ivar: _destinationURL
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *operationGroup; // ivar: _operationGroup
@property (readonly, nonatomic) UIImage *resizedImage; // ivar: _resizedImage
@property (nonatomic) CGSize scaledFittingSize; // ivar: _scaledFittingSize
@property (nonatomic) BOOL usesExactFittingSizeAsDestinationSize; // ivar: _usesExactFittingSizeAsDestinationSize


-(id)initWithImage:(id)arg0 scaledFittingSize:(struct CGSize )arg1 ;
-(id)initWithImage:(id)arg0 scaledFittingSize:(struct CGSize )arg1 destinationURL:(id)arg2 ;
-(id)initWithImage:(id)arg0 scaledFittingSize:(struct CGSize )arg1 useExactFittingSizeAsDestinationSize:(BOOL)arg2 destinationURL:(id)arg3 ;
-(struct CGSize )_resizedScaledSizeForScaledImageSize:(struct CGSize )arg0 scaledFittingSize:(struct CGSize )arg1 ;
-(void)main;


@end


#endif