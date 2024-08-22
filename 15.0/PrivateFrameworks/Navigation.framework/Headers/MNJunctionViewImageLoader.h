// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MNJUNCTIONVIEWIMAGELOADER_H
#define MNJUNCTIONVIEWIMAGELOADER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface MNJunctionViewImageLoader : NSObject {
    NSArray *_preloadEvents;
    CGFloat _imageWidth;
    CGFloat _imageHeight;
}




-(id)_imagesForRequest:(id)arg0 response:(id)arg1 ;
-(id)_stringForImageIDs:(id)arg0 ;
-(id)init;
-(void)_imagesForIDs:(id)arg0 handler:(id)arg1 ;
-(void)imagesForJunctionView:(id)arg0 eventID:(id)arg1 handler:(id)arg2 ;
-(void)setJunctionViewEvents:(id)arg0 ;
-(void)setJunctionViewImageWidth:(CGFloat)arg0 height:(CGFloat)arg1 ;
-(void)updateForLocation:(id)arg0 remainingDistanceOnRoute:(CGFloat)arg1 ;


@end


#endif