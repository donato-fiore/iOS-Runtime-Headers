// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPERSONIMAGEREQUEST_H
#define PXPERSONIMAGEREQUEST_H

@class NSTimer;
@protocol PXPerson;

#import <Foundation/Foundation.h>


@interface PXPersonImageRequest : NSObject

@property (retain, nonatomic) NSTimer *imageLoadInvalidationTimer; // ivar: _imageLoadInvalidationTimer
@property (nonatomic) NSUInteger imageRequestTag; // ivar: _imageRequestTag
@property (readonly, nonatomic) NSObject<PXPerson> *person; // ivar: _person


-(id)initWithPerson:(id)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)requestFaceCropWithOptions:(id)arg0 timeout:(CGFloat)arg1 resultHandler:(id)arg2 ;
-(void)requestImageWithTargetSize:(struct CGSize )arg0 cropFactor:(NSUInteger)arg1 cacheResult:(BOOL)arg2 boundFaceRect:(BOOL)arg3 timeout:(CGFloat)arg4 withCompletion:(id)arg5 ;


@end


#endif