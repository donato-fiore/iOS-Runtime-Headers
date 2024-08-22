// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPERSONITEM_H
#define PXPERSONITEM_H

@class UIImage, PHPerson;

#import <Foundation/Foundation.h>


@interface PXPersonItem : NSObject

@property (weak) UIImage *faceImage; // ivar: _faceImage
@property (copy) id *faceImageLoadingCompletionBlock; // ivar: _faceImageLoadingCompletionBlock
@property int faceImageRequestID; // ivar: _faceImageRequestID
@property (copy) id *fastDisplayBlock; // ivar: _fastDisplayBlock
@property (retain, nonatomic) PHPerson *modelObject; // ivar: _modelObject
@property (copy) id *resultHandler; // ivar: _resultHandler


-(id)initWithPerson:(id)arg0 ;
-(void)updateWithModel:(id)arg0 ;


@end


#endif